
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_parse_context {size_t blob_len; void const* blob; } ;



int FUNC_0(void *VAR_0, size_t VAR_1,
     unsigned char VAR_2,
     const void *VAR_3, size_t VAR_4)
{
 struct tpm_parse_context *VAR_5 = VAR_0;

 VAR_5->blob = VAR_3;
 VAR_5->blob_len = VAR_4;

 return 0;
}
