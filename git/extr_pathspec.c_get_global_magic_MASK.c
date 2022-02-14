
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(int VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_4())
  VAR_4 |= VAR_2;


 if (FUNC_2() && !(VAR_3 & VAR_2))
  VAR_4 |= VAR_0;

 if (FUNC_2() && FUNC_5())
  FUNC_1(FUNC_0("global 'glob' and 'noglob' pathspec settings are incompatible"));

 if (FUNC_3())
  VAR_4 |= VAR_1;

 if ((VAR_4 & VAR_2) &&
     (VAR_4 & ~VAR_2))
  FUNC_1(FUNC_0("global 'literal' pathspec setting is incompatible "
        "with all other global pathspec settings"));


 if (FUNC_5() && !(VAR_3 & VAR_0))
  VAR_4 |= VAR_2;

 return VAR_4;
}
