
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_parse_context {size_t params_size; void const* params; scalar_t__ key; TYPE_1__* cert; } ;
struct TYPE_2__ {int raw_subject; } ;



int FUNC_0(void *VAR_0, size_t VAR_1,
       unsigned char VAR_2,
       const void *VAR_3, size_t VAR_4)
{
 struct x509_parse_context *VAR_5 = VAR_0;






 if (!VAR_5->cert->raw_subject || VAR_5->key)
  return 0;
 VAR_5->params = VAR_3 - VAR_1;
 VAR_5->params_size = VAR_4 + VAR_1;
 return 0;
}
