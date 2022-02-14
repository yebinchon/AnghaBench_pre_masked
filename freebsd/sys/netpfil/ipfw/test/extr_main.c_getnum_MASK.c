
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*,char**) ;
 int FUNC_1 (int,char*,...) ;
 long FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static long
FUNC_3(const char *VAR_0, char **VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 long VAR_4;

 if (VAR_1)
  *VAR_1 = ((void*)0);
 if (VAR_0 && *VAR_0) {
  FUNC_1(3, "token is <%s> %s", VAR_0, VAR_2 ? VAR_2 : "-");
  VAR_4 = FUNC_2(VAR_0, &VAR_3, 0);
 } else {
  FUNC_1(3, "empty string");
  VAR_4 = -1;
 }
 if (VAR_4 < 0) {
  FUNC_1(2, "invalid %s for %s", VAR_0 ? VAR_0 : "NULL", (VAR_2 ? VAR_2 : "") );
  return 0;
 }
 if (!VAR_3 || !*VAR_3)
  return VAR_4;
 if (*VAR_3 == 'n')
  VAR_4 = -VAR_4;
 else if (*VAR_3 == 'K')
  VAR_4 = VAR_4*1000;
 else if (*VAR_3 == 'M')
  VAR_4 = VAR_4*1000000;
 else if (*VAR_3 == 'k')
  VAR_4 = VAR_4*1024;
 else if (*VAR_3 == 'm')
  VAR_4 = VAR_4*1024*1024;
 else if (*VAR_3 == 'w')
  ;
 else {
  FUNC_0("suffix %s for %s, next %p", VAR_3, VAR_2, VAR_1);
  VAR_3--;
 }
 VAR_3++;
 FUNC_1(3, "suffix now %s for %s, next %p", VAR_3, VAR_2, VAR_1);
 if (VAR_1 && *VAR_3) {
  FUNC_1(3, "setting next to %s for %s", VAR_3, VAR_2);
  *VAR_1 = VAR_3;
 }
 return VAR_4;
}
