
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs8_parse_context {scalar_t__ last_oid; TYPE_1__* pub; } ;
struct TYPE_2__ {char* pkey_algo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(void *VAR_2, size_t VAR_3,
      unsigned char VAR_4,
      const void *VAR_5, size_t VAR_6)
{
 struct pkcs8_parse_context *VAR_7 = VAR_2;

 if (VAR_7->last_oid != VAR_1)
  return -VAR_0;

 VAR_7->pub->pkey_algo = "rsa";
 return 0;
}
