
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, const char *VAR_1)
{

 struct stat VAR_2;

 if (VAR_0)
  if (FUNC_1(VAR_0, &VAR_2) < 0)
  {
   FUNC_2("%s", VAR_0);
   FUNC_0();
  }
 if (VAR_1) {
  if (FUNC_1(VAR_1, &VAR_2) < 0)
   return;
  else {
   FUNC_3("file '%s' already exists and may be overwritten", VAR_1);
   FUNC_0();
  }
 }
}
