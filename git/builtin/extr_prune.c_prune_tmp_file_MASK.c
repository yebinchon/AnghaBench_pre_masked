
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_4(const char *VAR_3)
{
 struct stat VAR_4;
 if (FUNC_1(VAR_3, &VAR_4))
  return FUNC_0("Could not stat '%s'", VAR_3);
 if (VAR_4.st_mtime > VAR_0)
  return 0;
 if (VAR_1 || VAR_2)
  FUNC_2("Removing stale temporary file %s\n", VAR_3);
 if (!VAR_1)
  FUNC_3(VAR_3);
 return 0;
}
