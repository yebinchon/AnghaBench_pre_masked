
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char*,char const**) ;
 int FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (char const*,char const*,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,char const*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int*,int ) ;
 scalar_t__ FUNC_12 (char const*,char*,char const**) ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(const char *VAR_10, const char *VAR_11, void *VAR_12)
{
 const char *VAR_13;
 int *VAR_14 = VAR_12;
 int VAR_15;

 VAR_15 = FUNC_7(VAR_10, VAR_11, ((void*)0));
 if (VAR_15)
  return VAR_15;

 if (!FUNC_14(VAR_10, "push.followtags")) {
  if (FUNC_3(VAR_10, VAR_11))
   *VAR_14 |= VAR_5;
  else
   *VAR_14 &= ~VAR_5;
  return 0;
 } else if (!FUNC_14(VAR_10, "push.gpgsign")) {
  const char *VAR_16;
  if (!FUNC_5("push.gpgsign", &VAR_16)) {
   switch (FUNC_8(VAR_16)) {
   case 0:
    FUNC_11(VAR_14, VAR_4);
    break;
   case 1:
    FUNC_11(VAR_14, VAR_2);
    break;
   default:
    if (VAR_16 && !FUNC_13(VAR_16, "if-asked"))
     FUNC_11(VAR_14, VAR_3);
    else
     return FUNC_2("Invalid value for '%s'", VAR_10);
   }
  }
 } else if (!FUNC_14(VAR_10, "push.recursesubmodules")) {
  const char *VAR_17;
  if (!FUNC_5("push.recursesubmodules", &VAR_17))
   VAR_9 = FUNC_10(VAR_10, VAR_17);
 } else if (!FUNC_14(VAR_10, "submodule.recurse")) {
  int VAR_18 = FUNC_3(VAR_10, VAR_11) ?
   VAR_1 : VAR_0;
  VAR_9 = VAR_18;
 } else if (!FUNC_14(VAR_10, "push.pushoption")) {
  if (!VAR_11)
   return FUNC_1(VAR_10);
  else
   if (!*VAR_11)
    FUNC_16(&VAR_7, 0);
   else
    FUNC_15(&VAR_7, VAR_11);
  return 0;
 } else if (!FUNC_14(VAR_10, "color.push")) {
  VAR_8 = FUNC_4(VAR_10, VAR_11);
  return 0;
 } else if (FUNC_12(VAR_10, "color.push.", &VAR_13)) {
  int VAR_19 = FUNC_9(VAR_13);
  if (VAR_19 < 0)
   return 0;
  if (!VAR_11)
   return FUNC_1(VAR_10);
  return FUNC_0(VAR_11, VAR_6[VAR_19]);
 }

 return FUNC_6(VAR_10, VAR_11, ((void*)0));
}
