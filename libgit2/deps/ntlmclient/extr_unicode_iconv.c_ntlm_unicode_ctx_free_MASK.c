
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ utf16_to_8; scalar_t__ utf8_to_16; } ;
typedef TYPE_1__ ntlm_unicode_ctx ;
typedef scalar_t__ iconv_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(ntlm_unicode_ctx *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->utf16_to_8 != (iconv_t)-1)
  FUNC_1(VAR_0->utf16_to_8);

 if (VAR_0->utf8_to_16 != (iconv_t)-1)
  FUNC_1(VAR_0->utf8_to_16);

 FUNC_0(VAR_0);
}
