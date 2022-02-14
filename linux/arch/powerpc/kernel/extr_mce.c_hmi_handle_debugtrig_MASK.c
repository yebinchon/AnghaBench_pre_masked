
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {long hmi_p9_special_emu; } ;


 int VAR_0 ;

 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct pt_regs*) ;

long FUNC_3(struct pt_regs *VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_3);
 long VAR_8 = 0;


 if (!((VAR_7 & VAR_1)
       && VAR_4 != VAR_0))
  return -1;

 VAR_7 &= ~VAR_1;

 FUNC_1(VAR_3, ~VAR_1);

 switch (VAR_4) {
 case 128:





  if (VAR_6 && FUNC_2(VAR_6))
   VAR_8 = VAR_5->hmi_p9_special_emu = 1;

  break;

 default:
  break;
 }




 if (VAR_7 & FUNC_0(VAR_2))
  return -1;

 return VAR_8;
}
