
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct caam_drv_private_jr {int irqtask; TYPE_1__* rregs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int jrintstatus; int rconfig_lo; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct caam_drv_private_jr* FUNC_3 (struct device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_4, void *VAR_5)
{
 struct device *VAR_6 = VAR_5;
 struct caam_drv_private_jr *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;





 VAR_8 = FUNC_6(&VAR_7->rregs->jrintstatus);
 if (!VAR_8)
  return VAR_1;






 if (VAR_8 & VAR_3) {
  FUNC_2(VAR_6, "job ring error: irqstate: %08x\n", VAR_8);
  FUNC_0();
 }


 FUNC_1(&VAR_7->rregs->rconfig_lo, 0, VAR_2);


 FUNC_8(&VAR_7->rregs->jrintstatus, VAR_8);

 FUNC_4();
 FUNC_7(&VAR_7->irqtask);
 FUNC_5();

 return VAR_0;
}
