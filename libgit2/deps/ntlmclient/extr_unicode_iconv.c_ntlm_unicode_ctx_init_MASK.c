
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* utf16_to_8; void* utf8_to_16; int * ntlm; } ;
typedef TYPE_1__ ntlm_unicode_ctx ;
typedef int ntlm_client ;
typedef void* iconv_t ;


 TYPE_1__* FUNC_0 (int,int) ;

ntlm_unicode_ctx *FUNC_1(ntlm_client *VAR_0)
{
 ntlm_unicode_ctx *VAR_1;

 if ((VAR_1 = FUNC_0(1, sizeof(ntlm_unicode_ctx))) == ((void*)0))
  return ((void*)0);

 VAR_1->ntlm = VAR_0;
 VAR_1->utf8_to_16 = (iconv_t)-1;
 VAR_1->utf16_to_8 = (iconv_t)-1;

 return VAR_1;
}
