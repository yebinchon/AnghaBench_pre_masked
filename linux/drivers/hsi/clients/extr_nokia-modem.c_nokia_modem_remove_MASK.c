
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nokia_modem_device {int nokia_modem_rst_ind_tasklet; int nokia_modem_rst_ind_irq; TYPE_1__* ssi_protocol; TYPE_2__* cmt_speech; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int device; } ;


 struct nokia_modem_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct nokia_modem_device *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;

 if (VAR_1->cmt_speech) {
  FUNC_3(&VAR_1->cmt_speech->device, ((void*)0));
  VAR_1->cmt_speech = ((void*)0);
 }

 if (VAR_1->ssi_protocol) {
  FUNC_3(&VAR_1->ssi_protocol->device, ((void*)0));
  VAR_1->ssi_protocol = ((void*)0);
 }

 FUNC_4(VAR_0);
 FUNC_1(VAR_0, ((void*)0));
 FUNC_2(VAR_1->nokia_modem_rst_ind_irq);
 FUNC_5(&VAR_1->nokia_modem_rst_ind_tasklet);

 return 0;
}
