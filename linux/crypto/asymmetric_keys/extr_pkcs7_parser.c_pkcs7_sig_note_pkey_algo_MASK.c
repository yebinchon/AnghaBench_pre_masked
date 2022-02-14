
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pkcs7_parse_context {int last_oid; TYPE_2__* sinfo; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {char* pkey_algo; char* encoding; } ;


 int VAR_0 ;

 int FUNC_0 (char*,int) ;

int FUNC_1(void *VAR_1, size_t VAR_2,
        unsigned char VAR_3,
        const void *VAR_4, size_t VAR_5)
{
 struct pkcs7_parse_context *VAR_6 = VAR_1;

 switch (VAR_6->last_oid) {
 case 128:
  VAR_6->sinfo->sig->pkey_algo = "rsa";
  VAR_6->sinfo->sig->encoding = "pkcs1";
  break;
 default:
  FUNC_0("Unsupported pkey algo: %u\n", VAR_6->last_oid);
  return -VAR_0;
 }
 return 0;
}
