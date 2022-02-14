
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_parse_context {size_t raw_serial_size; void const* raw_serial; } ;



int FUNC_0(void *VAR_0, size_t VAR_1,
     unsigned char VAR_2,
     const void *VAR_3, size_t VAR_4)
{
 struct pkcs7_parse_context *VAR_5 = VAR_0;
 VAR_5->raw_serial = VAR_3;
 VAR_5->raw_serial_size = VAR_4;
 return 0;
}
