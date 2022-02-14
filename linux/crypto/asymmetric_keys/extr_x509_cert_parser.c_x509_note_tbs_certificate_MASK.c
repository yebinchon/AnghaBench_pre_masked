
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_parse_context {TYPE_1__* cert; scalar_t__ data; } ;
struct TYPE_2__ {size_t tbs_size; void const* tbs; } ;


 int FUNC_0 (char*,size_t,unsigned char,scalar_t__,size_t) ;

int FUNC_1(void *VAR_0, size_t VAR_1,
         unsigned char VAR_2,
         const void *VAR_3, size_t VAR_4)
{
 struct x509_parse_context *VAR_5 = VAR_0;

 FUNC_0("x509_note_tbs_certificate(,%zu,%02x,%ld,%zu)!\n",
   VAR_1, VAR_2, (unsigned long)VAR_3 - VAR_5->data, VAR_4);

 VAR_5->cert->tbs = VAR_3 - VAR_1;
 VAR_5->cert->tbs_size = VAR_4 + VAR_1;
 return 0;
}
