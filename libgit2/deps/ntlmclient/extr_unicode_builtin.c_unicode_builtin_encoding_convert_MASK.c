
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ unicode_builtin_encoding_direction ;
struct TYPE_3__ {int ntlm; } ;
typedef TYPE_1__ ntlm_unicode_ctx ;
typedef int UTF8 ;
typedef int UTF16 ;
typedef int ConversionResult ;


 int FUNC_0 (int const**,int *,int **,int *,int ) ;
 int FUNC_1 (int const**,int *,int **,int *,int ) ;
 size_t VAR_0 ;

 int FUNC_2 (char*) ;
 int VAR_1 ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (char*,size_t) ;


 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline bool FUNC_6(
 char **VAR_5,
 size_t *VAR_6,
 ntlm_unicode_ctx *VAR_7,
 const char *VAR_8,
 size_t VAR_9,
 unicode_builtin_encoding_direction VAR_10)
{
 const char *VAR_11, *VAR_12;
 char *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 size_t VAR_17, VAR_18;
 bool VAR_19 = 0;
 ConversionResult VAR_20;

 *VAR_5 = ((void*)0);
 *VAR_6 = 0;

 VAR_11 = VAR_8;
 VAR_12 = VAR_11 + VAR_9;







 if (VAR_10 == VAR_4)
  VAR_17 = (VAR_9 * 2 + 2);
 else
  VAR_17 = (VAR_9 / 2 + 1);


 VAR_17 = (VAR_17 + 7) & ~7;

 if ((VAR_13 = FUNC_3(VAR_17)) == ((void*)0)) {
  FUNC_4(VAR_7->ntlm, "out of memory");
  return 0;
 }

 VAR_14 = VAR_13;
 VAR_15 = VAR_14 + VAR_17;


 if (VAR_10 == VAR_3)
  VAR_15--;

 while (1) {
  if (VAR_10 == VAR_4)
   VAR_20 = FUNC_1(
    (const UTF8 **)&VAR_11, (UTF8 *)VAR_12,
    (UTF16 **)&VAR_14, (UTF16 *)VAR_15, VAR_2);
  else
   VAR_20 = FUNC_0(
    (const UTF16 **)&VAR_11, (UTF16 *)VAR_12,
    (UTF8 **)&VAR_14, (UTF8 *)VAR_15, VAR_1);

  switch (VAR_20) {
   case 131:
    VAR_19 = 1;
    goto done;
   case 130:
    FUNC_4(VAR_7->ntlm,
     "invalid unicode string; trailing data remains");
    goto done;
   case 128:
    break;
   case 129:
    FUNC_4(VAR_7->ntlm,
     "invalid unicode string; trailing data remains");
    goto done;
   default:
    FUNC_4(VAR_7->ntlm,
     "unknown unicode conversion failure");
    goto done;
  }


  VAR_17 = ((((VAR_17 << 1) - (VAR_17 >> 1)) + 7) & ~7);

  if (VAR_17 > VAR_0) {
   FUNC_4(VAR_7->ntlm,
    "unicode conversion too large");
   goto done;
  }

  if ((VAR_16 = FUNC_5(VAR_13, VAR_17)) == ((void*)0)) {
   FUNC_4(VAR_7->ntlm, "out of memory");
   goto done;
  }

  VAR_18 = VAR_14 - VAR_13;

  VAR_13 = VAR_16;
  VAR_14 = VAR_16 + VAR_18;
  VAR_15 = VAR_13 + VAR_17;


  VAR_15 -= (VAR_10 == VAR_4) ? 2 : 1;
 }

done:
 if (!VAR_19) {
  FUNC_2(VAR_13);
  return 0;
 }

 VAR_18 = (VAR_14 - VAR_13);


 VAR_13[VAR_18] = '\0';

 if (VAR_10 == VAR_4)
  VAR_13[VAR_18+1] = '\0';

 *VAR_5 = VAR_13;
 *VAR_6 = VAR_18;
 return 1;
}
