
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ VAR_0 ;
 int FUNC_8 () ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 long FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_19 () ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_20 (int *) ;
 char* FUNC_21 (long) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_24 (int ,int *) ;

int FUNC_25(int VAR_8, char *VAR_9[]) {
 BIO *VAR_10;
 SSL_CTX *VAR_11;
 SSL *VAR_12;
 X509 *VAR_13;


 FUNC_17();
 FUNC_18();


 if(FUNC_8() != 1) {
  FUNC_22(VAR_7, "OpenSSL PRNG not seeded with enough data.");
  goto error_1;
 }

 VAR_11 = FUNC_11(FUNC_19());


 FUNC_13(VAR_11, VAR_2, ((void*)0));

 if (FUNC_10(VAR_11, VAR_5, ((void*)0)) != 1) {
  FUNC_22(VAR_7, "Couldn't load certificate trust store.\n");
  goto error_2;
 }


 if (FUNC_12(VAR_11, VAR_1) != 1)
  goto error_2;


 VAR_10 = FUNC_2(VAR_11);
 FUNC_1(VAR_10, &VAR_12);
 if(!VAR_12) {
   FUNC_22(VAR_7, "Can't locate SSL pointer\n");
  goto error_3;
 }


 FUNC_3(VAR_10, VAR_4);
 if(FUNC_14(VAR_12) <= 0) {

  long VAR_14 = FUNC_16(VAR_12);
  if (VAR_14 != VAR_6) {

   FUNC_22(VAR_7, "Certificate chain validation failed: %s\n", FUNC_21(VAR_14));
  }
  else {

   FUNC_6(VAR_7);
  }
  goto error_3;
 }


 VAR_13 = FUNC_15(VAR_12);
 if (VAR_13 == ((void*)0)) {


  goto error_4;
 }


 if (FUNC_24(VAR_3, VAR_13) != VAR_0) {
  FUNC_22(VAR_7, "Hostname validation failed.\n");
  goto error_5;
 }


 FUNC_23(VAR_10);


error_5:
 FUNC_20(VAR_13);

error_4:
 FUNC_4(VAR_10);

error_3:
 FUNC_0(VAR_10);

error_2:
 FUNC_9(VAR_11);

error_1:
    FUNC_7();
    FUNC_5();

 return 0;
}
