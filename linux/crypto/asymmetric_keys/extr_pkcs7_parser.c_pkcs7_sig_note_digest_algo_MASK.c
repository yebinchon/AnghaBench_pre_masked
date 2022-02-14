
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pkcs7_parse_context {int last_oid; TYPE_2__* sinfo; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {char* hash_algo; } ;


 int VAR_0 ;







 int FUNC_0 (char*,int) ;

int FUNC_1(void *VAR_1, size_t VAR_2,
          unsigned char VAR_3,
          const void *VAR_4, size_t VAR_5)
{
 struct pkcs7_parse_context *VAR_6 = VAR_1;

 switch (VAR_6->last_oid) {
 case 134:
  VAR_6->sinfo->sig->hash_algo = "md4";
  break;
 case 133:
  VAR_6->sinfo->sig->hash_algo = "md5";
  break;
 case 132:
  VAR_6->sinfo->sig->hash_algo = "sha1";
  break;
 case 130:
  VAR_6->sinfo->sig->hash_algo = "sha256";
  break;
 case 129:
  VAR_6->sinfo->sig->hash_algo = "sha384";
  break;
 case 128:
  VAR_6->sinfo->sig->hash_algo = "sha512";
  break;
 case 131:
  VAR_6->sinfo->sig->hash_algo = "sha224";
  break;
 default:
  FUNC_0("Unsupported digest algo: %u\n", VAR_6->last_oid);
  return -VAR_0;
 }
 return 0;
}
