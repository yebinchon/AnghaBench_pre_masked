
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_parse_context {int last_oid; size_t cn_size; size_t o_size; size_t email_size; int data; int email_offset; int o_offset; int cn_offset; } ;






int FUNC_0(void *VAR_0, size_t VAR_1,
         unsigned char VAR_2,
         const void *VAR_3, size_t VAR_4)
{
 struct x509_parse_context *VAR_5 = VAR_0;

 switch (VAR_5->last_oid) {
 case 130:
  VAR_5->cn_size = VAR_4;
  VAR_5->cn_offset = (unsigned long)VAR_3 - VAR_5->data;
  break;
 case 128:
  VAR_5->o_size = VAR_4;
  VAR_5->o_offset = (unsigned long)VAR_3 - VAR_5->data;
  break;
 case 129:
  VAR_5->email_size = VAR_4;
  VAR_5->email_offset = (unsigned long)VAR_3 - VAR_5->data;
  break;
 default:
  break;
 }

 return 0;
}
