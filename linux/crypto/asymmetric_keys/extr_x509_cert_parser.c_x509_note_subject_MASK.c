
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_parse_context {TYPE_1__* cert; } ;
struct TYPE_2__ {size_t raw_subject_size; int subject; void const* raw_subject; } ;


 int FUNC_0 (struct x509_parse_context*,size_t,unsigned char,int *,size_t) ;

int FUNC_1(void *VAR_0, size_t VAR_1,
        unsigned char VAR_2,
        const void *VAR_3, size_t VAR_4)
{
 struct x509_parse_context *VAR_5 = VAR_0;
 VAR_5->cert->raw_subject = VAR_3;
 VAR_5->cert->raw_subject_size = VAR_4;
 return FUNC_0(VAR_5, VAR_1, VAR_2, &VAR_5->cert->subject, VAR_4);
}
