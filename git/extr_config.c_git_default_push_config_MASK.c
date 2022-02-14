
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,...) ;
 int VAR_5 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_6, const char *VAR_7)
{
 if (!FUNC_3(VAR_6, "push.default")) {
  if (!VAR_7)
   return FUNC_1(VAR_6);
  else if (!FUNC_3(VAR_7, "nothing"))
   VAR_5 = VAR_2;
  else if (!FUNC_3(VAR_7, "matching"))
   VAR_5 = VAR_1;
  else if (!FUNC_3(VAR_7, "simple"))
   VAR_5 = VAR_3;
  else if (!FUNC_3(VAR_7, "upstream"))
   VAR_5 = VAR_4;
  else if (!FUNC_3(VAR_7, "tracking"))
   VAR_5 = VAR_4;
  else if (!FUNC_3(VAR_7, "current"))
   VAR_5 = VAR_0;
  else {
   FUNC_2(FUNC_0("malformed value for %s: %s"), VAR_6, VAR_7);
   return FUNC_2(FUNC_0("must be one of nothing, matching, simple, "
           "upstream or current"));
  }
  return 0;
 }


 return 0;
}
