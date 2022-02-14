
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argn; int argc; int * argv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(struct cmdargs const *VAR_5)
{

  int VAR_6, VAR_7, VAR_8;

  VAR_8 = 0;
  for (VAR_6 = VAR_5->argn; VAR_6 < VAR_5->argc; VAR_6++) {
    VAR_7 = FUNC_0(VAR_5->argv[VAR_6]);
    if (VAR_7 == VAR_2 || VAR_7 == VAR_1)
      FUNC_1(VAR_0, "allow modes: %s: Invalid mode\n", VAR_5->argv[VAR_6]);
    else
      VAR_8 |= VAR_7;
  }

  VAR_3 = VAR_4 & VAR_8 ? 1 : 0;
  return 0;
}
