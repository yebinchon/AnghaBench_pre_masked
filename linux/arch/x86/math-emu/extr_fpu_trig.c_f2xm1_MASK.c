
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int FPU_REG ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12(FPU_REG *VAR_4, u_char VAR_5)
{
 FPU_REG VAR_6;

 FUNC_3();

 if (VAR_5 == VAR_2) {

  if (FUNC_5(VAR_4) < 0) {
        denormal_arg:

   FUNC_2(VAR_4, &VAR_6);


   FUNC_7(FUNC_6(VAR_4), &VAR_6, VAR_4);
  }
  FUNC_8();
  return;
 }

 if (VAR_5 == VAR_3)
  return;

 if (VAR_5 == VAR_1)
  VAR_5 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 129:
  if (FUNC_4() < 0)
   return;
  goto denormal_arg;
 case 128:
  if (FUNC_10(VAR_4)) {

   FUNC_1(&VAR_0, VAR_2);
   FUNC_9(VAR_4);
  }
  return;
 default:
  FUNC_11(VAR_4, VAR_5);
 }
}
