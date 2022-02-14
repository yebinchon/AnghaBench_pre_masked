
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct caam_drv_private_jr {TYPE_1__* rregs; int ridx; } ;
struct TYPE_2__ {int rconfig_lo; int jrcommand; int jrintstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*,char*,int ) ;
 struct caam_drv_private_jr* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6)
{
 struct caam_drv_private_jr *VAR_7 = FUNC_3(VAR_6);
 unsigned int VAR_8 = 100000;





 FUNC_0(&VAR_7->rregs->rconfig_lo, 0, VAR_1);


 FUNC_5(&VAR_7->rregs->jrcommand, VAR_2);
 while (((FUNC_4(&VAR_7->rregs->jrintstatus) & VAR_5) ==
  VAR_4) && --VAR_8)
  FUNC_1();

 if ((FUNC_4(&VAR_7->rregs->jrintstatus) & VAR_5) !=
     VAR_3 || VAR_8 == 0) {
  FUNC_2(VAR_6, "failed to flush job ring %d\n", VAR_7->ridx);
  return -VAR_0;
 }


 VAR_8 = 100000;
 FUNC_5(&VAR_7->rregs->jrcommand, VAR_2);
 while ((FUNC_4(&VAR_7->rregs->jrcommand) & VAR_2) && --VAR_8)
  FUNC_1();

 if (VAR_8 == 0) {
  FUNC_2(VAR_6, "failed to reset job ring %d\n", VAR_7->ridx);
  return -VAR_0;
 }


 FUNC_0(&VAR_7->rregs->rconfig_lo, VAR_1, 0);

 return 0;
}
