
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int PKCS7_SIGNER_INFO ;
typedef int PKCS7 ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,void**) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (void*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *,int *,int ,int *) ;
 int * FUNC_13 (int *,int *,int *,int *,int) ;
 int * FUNC_14 (int *,int *,int *,int const*,int ) ;
 int VAR_5 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,void*,size_t) ;
 int FUNC_19 (void**,size_t*,int) ;
 int FUNC_20 (void*,size_t,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_21(X509 *VAR_8, EVP_PKEY *VAR_9, int VAR_10)
{
 PKCS7 *VAR_11;
 BIO *VAR_12, *VAR_13;
 const EVP_MD *VAR_14;
 PKCS7_SIGNER_INFO *VAR_15;
 void *VAR_16, *VAR_17;
 size_t VAR_18, VAR_19;
 int VAR_20;

 FUNC_15(VAR_8 != ((void*)0));
 FUNC_15(VAR_9 != ((void*)0));

 FUNC_19(&VAR_16, &VAR_18, VAR_10);

 VAR_12 = FUNC_3(VAR_16, VAR_18);
 if (VAR_12 == ((void*)0)) {
  FUNC_8(VAR_6);
  FUNC_16(1, "BIO_new_mem_buf(3) failed");
 }

 VAR_11 = FUNC_13(((void*)0), ((void*)0), ((void*)0), VAR_12, VAR_3 | VAR_4);
 if (VAR_11 == ((void*)0)) {
  FUNC_8(VAR_6);
  FUNC_16(1, "PKCS7_sign(3) failed");
 }

 VAR_14 = FUNC_9(VAR_1);
 if (VAR_14 == ((void*)0)) {
  FUNC_8(VAR_6);
  FUNC_16(1, "EVP_get_digestbyname(\"%s\") failed", VAR_1);
 }

 VAR_15 = FUNC_14(VAR_11, VAR_8, VAR_9, VAR_14, 0);
 if (VAR_15 == ((void*)0)) {
  FUNC_8(VAR_6);
  FUNC_16(1, "PKCS7_sign_add_signer(3) failed");
 }





 FUNC_11(VAR_15, VAR_2,
     VAR_5, FUNC_10("1.3.6.1.4.1.311.2.1.4", 1));

 FUNC_18(VAR_11, VAR_16, VAR_18);
 VAR_13 = FUNC_2(FUNC_5());
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_6);
  FUNC_16(1, "BIO_new(3) failed");
 }

 VAR_20 = FUNC_17(VAR_13, VAR_11);
 if (VAR_20 == 0) {
  FUNC_8(VAR_6);
  FUNC_16(1, "i2d_PKCS7_bio(3) failed");
 }

 VAR_19 = FUNC_1(VAR_13, &VAR_17);
 if (VAR_19 <= 0) {
  FUNC_8(VAR_6);
  FUNC_16(1, "BIO_get_mem_data(3) failed");
 }

 (void)FUNC_6(VAR_13, VAR_0);
 FUNC_0(VAR_13);

 FUNC_20(VAR_17, VAR_19, VAR_10);
}
