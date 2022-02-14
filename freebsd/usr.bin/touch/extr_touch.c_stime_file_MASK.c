
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct stat {struct timespec st_mtim; struct timespec st_atim; } ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, struct timespec *VAR_1)
{
 struct stat VAR_2;

 if (FUNC_1(VAR_0, &VAR_2))
  FUNC_0(1, "%s", VAR_0);
 VAR_1[0] = VAR_2.st_atim;
 VAR_1[1] = VAR_2.st_mtim;
}
