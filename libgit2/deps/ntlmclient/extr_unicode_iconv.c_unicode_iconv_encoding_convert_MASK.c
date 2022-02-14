
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unicode_iconv_encoding_direction ;
struct TYPE_4__ {int ntlm; int utf16_to_8; int utf8_to_16; } ;
typedef TYPE_1__ ntlm_unicode_ctx ;
typedef int iconv_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int ,char**,size_t*,char**,size_t*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*,size_t) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline bool FUNC_7(
 char **VAR_4,
 size_t *VAR_5,
 ntlm_unicode_ctx *VAR_6,
 const char *VAR_7,
 size_t VAR_8,
 unicode_iconv_encoding_direction VAR_9)
{
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 iconv_t VAR_20;

 *VAR_4 = ((void*)0);
 *VAR_5 = 0;

 if (!FUNC_6(VAR_6))
  return 0;
 if (VAR_9 == VAR_3) {
  VAR_20 = VAR_6->utf8_to_16;
  VAR_16 = (VAR_8 * 2) + 2;
  VAR_17 = 2;
 } else {
  VAR_20 = VAR_6->utf16_to_8;
  VAR_16 = (VAR_8 / 2) + 1;
  VAR_17 = 1;
 }


 VAR_16 = (VAR_16 + 7) & ~7;

 if ((VAR_12 = FUNC_2(VAR_16)) == ((void*)0)) {
  FUNC_3(VAR_6->ntlm, "out of memory");
  return 0;
 }

 VAR_10 = (char *)VAR_7;
 VAR_14 = VAR_8;

 while (1) {
  VAR_11 = VAR_12 + VAR_19;
  VAR_15 = (VAR_16 - VAR_17) - VAR_19;

  VAR_18 = FUNC_1(VAR_20, &VAR_10, &VAR_14, &VAR_11, &VAR_15);
  VAR_19 = (VAR_16 - VAR_17) - VAR_15;

  if (VAR_18 == 0)
   break;

  if (VAR_18 == (size_t)-1 && VAR_2 != VAR_0) {
   FUNC_3(VAR_6->ntlm, FUNC_5(VAR_2));
   goto on_error;
  }


  VAR_16 = ((((VAR_16 << 1) - (VAR_16 >> 1)) + 7) & ~7);

  if (VAR_16 > VAR_1) {
   FUNC_3(VAR_6->ntlm,
    "unicode conversion too large");
   goto on_error;
  }

  if ((VAR_13 = FUNC_4(VAR_12, VAR_16)) == ((void*)0)) {
   FUNC_3(VAR_6->ntlm, "out of memory");
   goto on_error;
  }

  VAR_12 = VAR_13;
 }

 if (VAR_14 != 0) {
  FUNC_3(VAR_6->ntlm,
   "invalid unicode string; trailing data remains");
  goto on_error;
 }


 VAR_12[VAR_19] = '\0';

 if (VAR_9 == VAR_3)
  VAR_12[VAR_19 + 1] = '\0';

 *VAR_4 = VAR_12;

 if (VAR_5)
  *VAR_5 = VAR_19;

 return 1;

on_error:
 FUNC_0(VAR_12);
 return 0;
}
