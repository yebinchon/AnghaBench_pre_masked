
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_parse_context {scalar_t__ last_oid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_2, size_t VAR_3,
        unsigned char VAR_4,
        const void *VAR_5, size_t VAR_6)
{
 struct pkcs7_parse_context *VAR_7 = VAR_2;

 if (VAR_7->last_oid != VAR_1) {
  FUNC_0("Only support pkcs7_signedData type\n");
  return -VAR_0;
 }

 return 0;
}
