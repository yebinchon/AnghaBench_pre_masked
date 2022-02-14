
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char const*,struct stat*) ;

void
FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 struct stat VAR_3;

 FUNC_1('\t');
 if (VAR_2 > 1)
  FUNC_0("%-2d copies of %-19s", VAR_2, VAR_0);
 else
  FUNC_0("%-32s", VAR_0);
 if (*VAR_1 && !FUNC_2(VAR_1, &VAR_3))
  FUNC_0(" %qd bytes", (long long) VAR_3.st_size);
 else
  FUNC_0(" ??? bytes");
 FUNC_1('\n');
}
