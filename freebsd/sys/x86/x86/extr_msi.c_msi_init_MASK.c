
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,char*,int *,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{


 switch (VAR_3) {
 case 128:
 case 130:
  break;
 case 129:
  if (FUNC_0(VAR_2) == 0x6 &&
      FUNC_1(VAR_2) >= 0xf)
   break;

 default:
  return;
 }
 if (VAR_10 == 0)
  return;

 VAR_4 = VAR_9;
 if (VAR_10 > VAR_1 - VAR_4)
  FUNC_4("num_msi_irqs too high");
 VAR_9 = VAR_4 + VAR_10;

 VAR_5 = 1;
 FUNC_2(&VAR_7);
 FUNC_3(&VAR_6, "msi", ((void*)0), VAR_0);
}
