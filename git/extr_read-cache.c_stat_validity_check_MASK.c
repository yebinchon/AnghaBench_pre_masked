
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_validity {int * sd; } ;
struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct stat*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int FUNC_3(struct stat_validity *VAR_0, const char *VAR_1)
{
 struct stat VAR_2;

 if (FUNC_2(VAR_1, &VAR_2) < 0)
  return VAR_0->sd == ((void*)0);
 if (!VAR_0->sd)
  return 0;
 return FUNC_0(VAR_2.st_mode) && !FUNC_1(VAR_0->sd, &VAR_2);
}
