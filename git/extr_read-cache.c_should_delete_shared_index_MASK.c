
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long st_mtime; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 unsigned long FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
 struct stat VAR_1;
 unsigned long VAR_2;


 VAR_2 = FUNC_2();
 if (!VAR_2)
  return 0;
 if (FUNC_3(VAR_0, &VAR_1))
  return FUNC_1(FUNC_0("could not stat '%s'"), VAR_0);
 if (VAR_1.st_mtime > VAR_2)
  return 0;

 return 1;
}
