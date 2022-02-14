
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct index_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct index_state*,char const*,struct stat*,int) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

int FUNC_4(struct index_state *VAR_0, const char *VAR_1, int VAR_2)
{
 struct stat VAR_3;
 if (FUNC_3(VAR_1, &VAR_3))
  FUNC_2(FUNC_0("unable to stat '%s'"), VAR_1);
 return FUNC_1(VAR_0, VAR_1, &VAR_3, VAR_2);
}
