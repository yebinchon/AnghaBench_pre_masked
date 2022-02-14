
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sign; } ;
struct TYPE_9__ {TYPE_2__ d; } ;
struct TYPE_7__ {int contents; } ;
typedef TYPE_3__ PKCS7 ;
typedef int CONF ;
typedef int BIO ;
typedef int ASN1_TYPE ;
typedef int ASN1_STRING ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (char*,int *) ;
 int * FUNC_5 (void*,int) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (char*,int *,int *) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int * FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (int ,int,int *) ;
 int VAR_0 ;
 int FUNC_15 (char**,int ,char*) ;
 char* FUNC_16 (char const*,size_t) ;
 unsigned char* FUNC_17 (int,int) ;
 int FUNC_18 (int,char*) ;
 int FUNC_19 (int,char*) ;
 int FUNC_20 (int *,unsigned char**) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_21(PKCS7 *VAR_3, const char *VAR_4, size_t VAR_5)
{
 BIO *VAR_6, *VAR_7;
 ASN1_TYPE *VAR_8;
 ASN1_STRING *VAR_9;
 CONF *VAR_10;
 unsigned char *VAR_11, *VAR_12;
 char *VAR_13, *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 VAR_13 = FUNC_16(VAR_4, VAR_5);




 VAR_17 = FUNC_11("1.3.6.1.4.1.311.2.1.4", ((void*)0), ((void*)0));

 FUNC_15(&VAR_14, VAR_1, VAR_13);
 if (VAR_14 == ((void*)0))
  FUNC_18(1, "asprintf");

 VAR_6 = FUNC_5((void *)VAR_14, -1);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_2);
  FUNC_19(1, "BIO_new_mem_buf(3) failed");
 }

 VAR_10 = FUNC_10(((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_7(VAR_2);
  FUNC_19(1, "NCONF_new(3) failed");
 }

 VAR_18 = FUNC_9(VAR_10, VAR_6, ((void*)0));
 if (VAR_18 == 0) {
  FUNC_7(VAR_2);
  FUNC_19(1, "NCONF_load_bio(3) failed");
 }

 VAR_15 = FUNC_8(VAR_10, "default", "asn1");
 if (VAR_15 == ((void*)0)) {
  FUNC_7(VAR_2);
  FUNC_19(1, "NCONF_get_string(3) failed");
 }

 VAR_8 = FUNC_4(VAR_15, VAR_10);
 if (VAR_8 == ((void*)0)) {
  FUNC_7(VAR_2);
  FUNC_19(1, "ASN1_generate_nconf(3) failed");
 }





 VAR_16 = FUNC_20(VAR_8, ((void*)0));
 VAR_12 = VAR_11 = FUNC_17(1, VAR_16);
 if (VAR_12 == ((void*)0))
  FUNC_18(1, "calloc");
 FUNC_20(VAR_8, &VAR_12);




 VAR_12 = ((void*)0);
 VAR_8 = ((void*)0);

 VAR_7 = FUNC_13(VAR_3, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  FUNC_7(VAR_2);
  FUNC_19(1, "PKCS7_dataInit(3) failed");
 }

 FUNC_6(VAR_7, VAR_11 + 2, VAR_16 - 2);

 VAR_18 = FUNC_12(VAR_3, VAR_7);
 if (VAR_18 == 0) {
  FUNC_7(VAR_2);
  FUNC_19(1, "PKCS7_dataFinal(3) failed");
 }

 VAR_8 = FUNC_2();
 VAR_9 = FUNC_0();
 FUNC_1(VAR_9, VAR_11, VAR_16);
 FUNC_3(VAR_8, VAR_0, VAR_9);

 FUNC_14(VAR_3->d.sign->contents, VAR_17, VAR_8);
}
