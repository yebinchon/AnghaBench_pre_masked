
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x509_parse_context {int last_oid; int algo_oid; TYPE_2__* cert; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {char* hash_algo; char* pkey_algo; char* encoding; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

int FUNC_1(void *VAR_1, size_t VAR_2,
   unsigned char VAR_3,
   const void *VAR_4, size_t VAR_5)
{
 struct x509_parse_context *VAR_6 = VAR_1;

 FUNC_0("PubKey Algo: %u\n", VAR_6->last_oid);

 switch (VAR_6->last_oid) {
 case 135:
 case 134:
 default:
  return -VAR_0;

 case 133:
  VAR_6->cert->sig->hash_algo = "md4";
  goto rsa_pkcs1;

 case 132:
  VAR_6->cert->sig->hash_algo = "sha1";
  goto rsa_pkcs1;

 case 130:
  VAR_6->cert->sig->hash_algo = "sha256";
  goto rsa_pkcs1;

 case 129:
  VAR_6->cert->sig->hash_algo = "sha384";
  goto rsa_pkcs1;

 case 128:
  VAR_6->cert->sig->hash_algo = "sha512";
  goto rsa_pkcs1;

 case 131:
  VAR_6->cert->sig->hash_algo = "sha224";
  goto rsa_pkcs1;

 case 137:
  VAR_6->cert->sig->hash_algo = "streebog256";
  goto ecrdsa;

 case 136:
  VAR_6->cert->sig->hash_algo = "streebog512";
  goto ecrdsa;
 }

rsa_pkcs1:
 VAR_6->cert->sig->pkey_algo = "rsa";
 VAR_6->cert->sig->encoding = "pkcs1";
 VAR_6->algo_oid = VAR_6->last_oid;
 return 0;
ecrdsa:
 VAR_6->cert->sig->pkey_algo = "ecrdsa";
 VAR_6->cert->sig->encoding = "raw";
 VAR_6->algo_oid = VAR_6->last_oid;
 return 0;
}
