
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ utf8_to_16; scalar_t__ utf16_to_8; int ntlm; } ;
typedef TYPE_1__ ntlm_unicode_ctx ;
typedef scalar_t__ iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_3(ntlm_unicode_ctx *VAR_2)
{
 if (VAR_2->utf8_to_16 != (iconv_t)-1 || VAR_2->utf16_to_8 != (iconv_t)-1)
  return 1;

 if ((VAR_2->utf8_to_16 = FUNC_0("UTF-16LE", "UTF-8")) == (iconv_t)-1 ||
  (VAR_2->utf16_to_8 = FUNC_0("UTF-8", "UTF-16LE")) == (iconv_t)-1) {
  if (VAR_1 == VAR_0)
   FUNC_1(VAR_2->ntlm,
    "iconv does not support UTF8 <-> UTF16 conversion");
  else
   FUNC_1(VAR_2->ntlm, FUNC_2(VAR_1));

  return 0;
 }

 return 1;
}
