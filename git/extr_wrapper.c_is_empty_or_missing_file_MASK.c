
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int FUNC_3(const char *VAR_2)
{
 struct stat VAR_3;

 if (FUNC_2(VAR_2, &VAR_3) < 0) {
  if (VAR_1 == VAR_0)
   return 1;
  FUNC_1(FUNC_0("could not stat %s"), VAR_2);
 }

 return !VAR_3.st_size;
}
