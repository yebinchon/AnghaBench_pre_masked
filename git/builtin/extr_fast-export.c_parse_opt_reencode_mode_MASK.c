
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_3 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_4,
       const char *VAR_5, int VAR_6)
{
 if (VAR_6) {
  VAR_3 = VAR_0;
  return 0;
 }

 switch (FUNC_1(VAR_5)) {
 case 0:
  VAR_3 = VAR_1;
  break;
 case 1:
  VAR_3 = VAR_2;
  break;
 default:
  if (!FUNC_2(VAR_5, "abort"))
   VAR_3 = VAR_0;
  else
   return FUNC_0("Unknown reencoding mode: %s", VAR_5);
 }

 return 0;
}
