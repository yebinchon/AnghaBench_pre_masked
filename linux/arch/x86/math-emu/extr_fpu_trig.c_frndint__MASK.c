
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int FPU_REG ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_11(FPU_REG *VAR_5, u_char VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 == VAR_1) {
  u_char VAR_9;

       denormal_arg:

  VAR_9 = FUNC_6(VAR_5);

  if (FUNC_5(VAR_5) > 63)
   return;

  if (VAR_6 == VAR_3) {
   if (FUNC_4() < 0)
    return;
  }


  if ((VAR_7 = FUNC_2(VAR_5, VAR_6)))
   FUNC_7(VAR_7);

  FUNC_8(VAR_5, 63);
  VAR_8 = FUNC_1(VAR_5);
  FUNC_9(VAR_5, VAR_9);
  FUNC_3(VAR_8);
  return;
 }

 if (VAR_6 == VAR_2)
  return;

 if (VAR_6 == VAR_0)
  VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_3)
  goto denormal_arg;
 else if (VAR_6 == VAR_4)
  return;
 else
  FUNC_10(VAR_5, VAR_6);
}
