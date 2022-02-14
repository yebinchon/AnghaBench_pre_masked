
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(FPU_REG *VAR_7, u_char VAR_8)
{
 u_char VAR_9;

 VAR_9 = FUNC_6(VAR_7);

 if (VAR_8 == VAR_3) {
  int VAR_10;

  if (FUNC_5(VAR_7) > -40) {
   if ((FUNC_5(VAR_7) < 0)
       || ((FUNC_5(VAR_7) == 0)
    && (FUNC_12(VAR_7) <=
        0xc90fdaa22168c234LL))) {
    FUNC_7(VAR_7);


    FUNC_9();

    return 0;
   } else if ((VAR_10 = FUNC_14(VAR_7, VAR_1)) != -1) {
    FUNC_8(VAR_7);

    if ((VAR_10 + 1) & 2)
     FUNC_3(VAR_7);


    FUNC_9();

    return 0;
   } else {

    return 1;
   }
  } else {
        denormal_arg:

   FUNC_11(0);
   FUNC_1(&VAR_0, VAR_3);



   FUNC_10();

   return 0;
  }
 } else if (VAR_8 == VAR_4) {
  FUNC_1(&VAR_0, VAR_3);
  FUNC_11(0);
  return 0;
 }

 if (VAR_8 == VAR_2)
  VAR_8 = FUNC_0(VAR_7);

 if (VAR_8 == VAR_5) {
  if (FUNC_4() < 0)
   return 1;

  goto denormal_arg;
 } else if (VAR_8 == VAR_6) {

  FUNC_2(0);
  return 1;
 } else {
  FUNC_13(VAR_7, VAR_8);
  return 1;
 }
}
