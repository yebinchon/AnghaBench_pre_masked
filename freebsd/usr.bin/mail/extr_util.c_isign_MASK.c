
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ignoretab {scalar_t__ i_count; } ;
typedef int realfld ;


 int VAR_0 ;
 struct ignoretab* VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,struct ignoretab*) ;

int
FUNC_2(const char *VAR_2, struct ignoretab VAR_3[2])
{
 char VAR_4[VAR_0];

 if (VAR_3 == VAR_1)
  return (1);




 FUNC_0(VAR_4, VAR_2, sizeof(VAR_4));
 if (VAR_3[1].i_count > 0)
  return (!FUNC_1(VAR_4, VAR_3 + 1));
 else
  return (FUNC_1(VAR_4, VAR_3));
}
