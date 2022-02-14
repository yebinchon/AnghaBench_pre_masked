
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, int VAR_3)
{
 struct stat VAR_4;

 if (FUNC_2(VAR_2, &VAR_4) == 0) {
  if (FUNC_0(VAR_4.st_mode))
   return;
  (void)FUNC_4(VAR_2);
 }
 if (FUNC_3(VAR_2, VAR_3) != 0 && VAR_1 != VAR_0)
  FUNC_1("mkdir('%s')", VAR_2);
}
