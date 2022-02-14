
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_parse_context {size_t raw_issuer_size; void const* raw_issuer; } ;



int FUNC_0(void *VAR_0, size_t VAR_1,
     unsigned char VAR_2,
     const void *VAR_3, size_t VAR_4)
{
 struct pkcs7_parse_context *VAR_5 = VAR_0;
 VAR_5->raw_issuer = VAR_3;
 VAR_5->raw_issuer_size = VAR_4;
 return 0;
}
