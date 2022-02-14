
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_parse_context {size_t raw_skid_size; void const* raw_skid; } ;


 int FUNC_0 (char*,unsigned char,size_t,unsigned int,void const*) ;

int FUNC_1(void *VAR_0, size_t VAR_1,
   unsigned char VAR_2,
   const void *VAR_3, size_t VAR_4)
{
 struct pkcs7_parse_context *VAR_5 = VAR_0;

 FUNC_0("SKID: %02x %zu [%*ph]\n", VAR_2, VAR_4, (unsigned)VAR_4, VAR_3);

 VAR_5->raw_skid = VAR_3;
 VAR_5->raw_skid_size = VAR_4;
 return 0;
}
