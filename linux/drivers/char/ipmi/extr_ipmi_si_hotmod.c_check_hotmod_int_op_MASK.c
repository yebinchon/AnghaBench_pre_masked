
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 unsigned int FUNC_1 (char const*,char**,int ) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2,
          const char *VAR_3, unsigned int *VAR_4)
{
 char *VAR_5;

 if (FUNC_2(VAR_1, VAR_3) == 0) {
  if (!VAR_2) {
   FUNC_0("No option given for '%s'\n", VAR_1);
   return -VAR_0;
  }
  *VAR_4 = FUNC_1(VAR_2, &VAR_5, 0);
  if ((*VAR_5 != '\0') || (*VAR_2 == '\0')) {
   FUNC_0("Bad option given for '%s'\n", VAR_1);
   return -VAR_0;
  }
  return 1;
 }
 return 0;
}
