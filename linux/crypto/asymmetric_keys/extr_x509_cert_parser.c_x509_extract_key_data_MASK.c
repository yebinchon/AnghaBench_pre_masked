
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct x509_parse_context {scalar_t__ key_algo; scalar_t__ last_oid; size_t key_size; void const* key; TYPE_2__* cert; } ;
struct TYPE_4__ {TYPE_1__* pub; } ;
struct TYPE_3__ {char* pkey_algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_0(void *VAR_5, size_t VAR_6,
     unsigned char VAR_7,
     const void *VAR_8, size_t VAR_9)
{
 struct x509_parse_context *VAR_10 = VAR_5;

 VAR_10->key_algo = VAR_10->last_oid;
 if (VAR_10->last_oid == VAR_4)
  VAR_10->cert->pub->pkey_algo = "rsa";
 else if (VAR_10->last_oid == VAR_2 ||
   VAR_10->last_oid == VAR_3)
  VAR_10->cert->pub->pkey_algo = "ecrdsa";
 else
  return -VAR_1;


 if (VAR_9 < 1 || *(const u8 *)VAR_8 != 0)
  return -VAR_0;
 VAR_10->key = VAR_8 + 1;
 VAR_10->key_size = VAR_9 - 1;
 return 0;
}
