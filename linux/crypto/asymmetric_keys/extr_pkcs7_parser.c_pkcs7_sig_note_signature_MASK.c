
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pkcs7_parse_context {TYPE_2__* sinfo; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {size_t s_size; int s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*,size_t,int ) ;

int FUNC_1(void *VAR_2, size_t VAR_3,
        unsigned char VAR_4,
        const void *VAR_5, size_t VAR_6)
{
 struct pkcs7_parse_context *VAR_7 = VAR_2;

 VAR_7->sinfo->sig->s = FUNC_0(VAR_5, VAR_6, VAR_1);
 if (!VAR_7->sinfo->sig->s)
  return -VAR_0;

 VAR_7->sinfo->sig->s_size = VAR_6;
 return 0;
}
