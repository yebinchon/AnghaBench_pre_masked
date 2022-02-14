
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp_device {struct psp_device* psp_data; int (* set_psp_master_device ) (struct sp_device*) ;scalar_t__ io_map; TYPE_1__* dev_vdata; struct device* dev; } ;
struct psp_vdata {scalar_t__ inten_reg; scalar_t__ intsts_reg; } ;
struct psp_device {int sp; struct psp_vdata* vdata; scalar_t__ io_regs; int name; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ psp_vdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int,scalar_t__) ;
 struct psp_device* FUNC_3 (struct sp_device*) ;
 int FUNC_4 (struct psp_device*) ;
 int VAR_2 ;
 int FUNC_5 (struct psp_device*) ;
 int FUNC_6 (int ,struct psp_device*) ;
 int FUNC_7 (int ,int ,int ,struct psp_device*) ;
 int FUNC_8 (struct sp_device*) ;

int FUNC_9(struct sp_device *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct psp_device *VAR_5;
 int VAR_6;

 VAR_6 = -VAR_1;
 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5)
  goto e_err;

 VAR_3->psp_data = VAR_5;

 VAR_5->vdata = (struct psp_vdata *)VAR_3->dev_vdata->psp_vdata;
 if (!VAR_5->vdata) {
  VAR_6 = -VAR_0;
  FUNC_0(VAR_4, "missing driver data\n");
  goto e_err;
 }

 VAR_5->io_regs = VAR_3->io_map;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto e_disable;


 FUNC_2(0, VAR_5->io_regs + VAR_5->vdata->inten_reg);
 FUNC_2(-1, VAR_5->io_regs + VAR_5->vdata->intsts_reg);


 VAR_6 = FUNC_7(VAR_5->sp, VAR_2, VAR_5->name, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_4, "psp: unable to allocate an IRQ\n");
  goto e_err;
 }

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6)
  goto e_irq;

 if (VAR_3->set_psp_master_device)
  VAR_3->set_psp_master_device(VAR_3);


 FUNC_2(-1, VAR_5->io_regs + VAR_5->vdata->inten_reg);

 FUNC_1(VAR_4, "psp enabled\n");

 return 0;

e_irq:
 FUNC_6(VAR_5->sp, VAR_5);
e_err:
 VAR_3->psp_data = ((void*)0);

 FUNC_1(VAR_4, "psp initialization failed\n");

 return VAR_6;

e_disable:
 VAR_3->psp_data = ((void*)0);

 return VAR_6;
}
