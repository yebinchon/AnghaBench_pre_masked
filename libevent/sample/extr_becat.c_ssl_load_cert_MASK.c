
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_context {int pkey; int cert; } ;
typedef int X509_NAME ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ,unsigned char*,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,long) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ssl_context *VAR_1)
{
 X509_NAME *VAR_2;

 VAR_1->cert = FUNC_8();

 FUNC_0(FUNC_5(VAR_1->cert), 1);

 FUNC_7(FUNC_4(VAR_1->cert), 0);

 FUNC_7(FUNC_3(VAR_1->cert),
  (long)FUNC_12(((void*)0)) + 365 * 86400);

 FUNC_10(VAR_1->cert, VAR_1->pkey);

 VAR_2 = FUNC_6(VAR_1->cert);
 FUNC_2(
  VAR_2, "C", VAR_0, (unsigned char *)"--", -1, -1, 0);
 FUNC_2(
  VAR_2, "O", VAR_0, (unsigned char *)"<NULL>", -1, -1, 0);
 FUNC_2(
  VAR_2, "CN", VAR_0, (unsigned char *)"*", -1, -1, 0);
 FUNC_9(VAR_1->cert, VAR_2);

 FUNC_11(VAR_1->cert, VAR_1->pkey, FUNC_1());

 return 0;
}
