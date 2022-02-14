
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char const*,char const*) ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (int *,char const*) ;

int FUNC_10(const char *VAR_11, const char *VAR_12)
{
 DWORD VAR_13, VAR_14;
 int VAR_15 = 0;
 wchar_t VAR_16[VAR_7], VAR_17[VAR_7];
 if (FUNC_9(VAR_16, VAR_11) < 0 || FUNC_9(VAR_17, VAR_12) < 0)
  return -1;





 if (!FUNC_6(VAR_16, VAR_17))
  return 0;
 if (VAR_10 != VAR_1)
  return -1;
repeat:
 if (FUNC_3(VAR_16, VAR_17, VAR_8))
  return 0;

 VAR_14 = FUNC_2();
 if (VAR_14 == VAR_3 &&
     (VAR_13 = FUNC_1(VAR_17)) != VAR_6) {
  if (VAR_13 & VAR_4) {
   DWORD VAR_18 = FUNC_1(VAR_16);
   if (VAR_18 == VAR_6 ||
       !(VAR_18 & VAR_4))
    VAR_10 = VAR_2;
   else if (!FUNC_7(VAR_17))
    goto repeat;
   return -1;
  }
  if ((VAR_13 & VAR_5) &&
      FUNC_4(VAR_17, VAR_13 & ~VAR_5)) {
   if (FUNC_3(VAR_16, VAR_17, VAR_8))
    return 0;
   VAR_14 = FUNC_2();

   FUNC_4(VAR_17, VAR_13);
  }
 }
 if (VAR_15 < FUNC_0(VAR_9) && VAR_14 == VAR_3) {







  FUNC_5(VAR_9[VAR_15]);
  VAR_15++;
  goto repeat;
 }
 if (VAR_14 == VAR_3 &&
        FUNC_8("Rename from '%s' to '%s' failed. "
         "Should I try again?", VAR_11, VAR_12))
  goto repeat;

 VAR_10 = VAR_0;
 return -1;
}
