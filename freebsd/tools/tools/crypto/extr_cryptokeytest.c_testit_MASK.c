
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int,int ,int ) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(void)
{
 BIGNUM *VAR_0, *VAR_1, *VAR_2, *VAR_3, *VAR_4;
 BN_CTX *VAR_5;

 VAR_5 = FUNC_1();

 VAR_0 = FUNC_6();
 VAR_1 = FUNC_6();
 VAR_2 = FUNC_6();
 VAR_3 = FUNC_6();
 VAR_4 = FUNC_6();

 FUNC_7(VAR_0, 1023, 0, 0);
 FUNC_7(VAR_1, 1023, 0, 0);
 FUNC_7(VAR_2, 1024, 0, 0);

 if (FUNC_2(VAR_0, VAR_2) > 0) {
  BIGNUM *VAR_6 = FUNC_6();

  FUNC_4(VAR_6, VAR_0, VAR_2, VAR_5);
  FUNC_8(VAR_4, VAR_6, VAR_1, VAR_2);
  FUNC_3(VAR_6);
 } else {
  FUNC_8(VAR_4, VAR_0, VAR_1, VAR_2);
 }
 FUNC_5(VAR_3, VAR_0, VAR_1, VAR_2, VAR_5);

 if (FUNC_2(VAR_3, VAR_4) != 0) {
  FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }

 FUNC_3(VAR_4);
 FUNC_3(VAR_3);
 FUNC_3(VAR_2);
 FUNC_3(VAR_1);
 FUNC_3(VAR_0);
 FUNC_0(VAR_5);
}
