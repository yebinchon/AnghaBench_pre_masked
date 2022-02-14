
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ops {int dummy; } ;
typedef scalar_t__ Linetype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char const) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,long*,char const**) ;
 int FUNC_3 (char const**) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int * FUNC_5 (char*,char const*) ;
 int FUNC_6 (struct ops const*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char const*) ;
 long FUNC_9 (char const*,char**,int ) ;
 long* VAR_6 ;
 char** VAR_7 ;

__attribute__((used)) static Linetype
FUNC_10(const struct ops *VAR_8, long *VAR_9, const char **VAR_10)
{
 const char *VAR_11;
 char *VAR_12;
 int VAR_13;
 bool VAR_14;
 Linetype VAR_15;

 VAR_11 = FUNC_8(*VAR_10);
 if (*VAR_11 == '!') {
  FUNC_0("eval%d !", FUNC_6(VAR_8));
  VAR_11++;
  VAR_15 = FUNC_10(VAR_8, VAR_9, &VAR_11);
  if (VAR_15 == VAR_0)
   return (VAR_0);
  if (VAR_15 != VAR_2) {
   *VAR_9 = !*VAR_9;
   VAR_15 = *VAR_9 ? VAR_3 : VAR_1;
  }
 } else if (*VAR_11 == '~') {
  FUNC_0("eval%d ~", FUNC_6(VAR_8));
  VAR_11++;
  VAR_15 = FUNC_10(VAR_8, VAR_9, &VAR_11);
  if (VAR_15 == VAR_0)
   return (VAR_0);
  if (VAR_15 != VAR_2) {
   *VAR_9 = ~(*VAR_9);
   VAR_15 = *VAR_9 ? VAR_3 : VAR_1;
  }
 } else if (*VAR_11 == '-') {
  FUNC_0("eval%d -", FUNC_6(VAR_8));
  VAR_11++;
  VAR_15 = FUNC_10(VAR_8, VAR_9, &VAR_11);
  if (VAR_15 == VAR_0)
   return (VAR_0);
  if (VAR_15 != VAR_2) {
   *VAR_9 = -(*VAR_9);
   VAR_15 = *VAR_9 ? VAR_3 : VAR_1;
  }
 } else if (*VAR_11 == '(') {
  VAR_11++;
  FUNC_0("eval%d (", FUNC_6(VAR_8));
  VAR_15 = FUNC_2(VAR_5, VAR_9, &VAR_11);
  if (VAR_15 == VAR_0)
   return (VAR_0);
  VAR_11 = FUNC_8(VAR_11);
  if (*VAR_11++ != ')')
   return (VAR_0);
 } else if (FUNC_4((unsigned char)*VAR_11)) {
  FUNC_0("eval%d number", FUNC_6(VAR_8));
  *VAR_9 = FUNC_9(VAR_11, &VAR_12, 0);
  if (VAR_12 == VAR_11)
   return (VAR_0);
  VAR_15 = *VAR_9 ? VAR_3 : VAR_1;
  VAR_11 = VAR_12;
 } else if (FUNC_5("defined", VAR_11) != ((void*)0)) {
  VAR_11 = FUNC_8(VAR_11+7);
  if (*VAR_11 == '(') {
   VAR_11 = FUNC_8(VAR_11+1);
   VAR_14 = 1;
  } else {
   VAR_14 = 0;
  }
  VAR_13 = FUNC_3(&VAR_11);
  VAR_11 = FUNC_8(VAR_11);
  if (VAR_14 && *VAR_11++ != ')') {
   FUNC_0("eval%d defined missing ')'", FUNC_6(VAR_8));
   return (VAR_0);
  }
  if (VAR_13 < 0) {
   FUNC_0("eval%d defined unknown", FUNC_6(VAR_8));
   VAR_15 = VAR_2;
  } else {
   FUNC_0("eval%d defined %s", FUNC_6(VAR_8), VAR_6[VAR_13]);
   *VAR_9 = (VAR_7[VAR_13] != ((void*)0));
   VAR_15 = *VAR_9 ? VAR_3 : VAR_1;
  }
  VAR_4 = 0;
 } else if (!FUNC_1(*VAR_11)) {
  FUNC_0("eval%d symbol", FUNC_6(VAR_8));
  VAR_13 = FUNC_3(&VAR_11);
  if (VAR_13 < 0) {
   VAR_15 = VAR_2;
   VAR_11 = FUNC_7(VAR_11);
  } else if (VAR_7[VAR_13] == ((void*)0)) {
   *VAR_9 = 0;
   VAR_15 = VAR_1;
  } else {
   *VAR_9 = FUNC_9(VAR_7[VAR_13], &VAR_12, 0);
   if (*VAR_12 != '\0' || VAR_12 == VAR_7[VAR_13])
    return (VAR_0);
   VAR_15 = *VAR_9 ? VAR_3 : VAR_1;
   VAR_11 = FUNC_7(VAR_11);
  }
  VAR_4 = 0;
 } else {
  FUNC_0("eval%d bad expr", FUNC_6(VAR_8));
  return (VAR_0);
 }

 *VAR_10 = VAR_11;
 FUNC_0("eval%d = %d", FUNC_6(VAR_8), *VAR_9);
 return (VAR_15);
}
