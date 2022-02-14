
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_stateflags; } ;
typedef TYPE_1__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 char const** VAR_4 ;
 char const** VAR_5 ;

const char *
FUNC_0(const teken_t *VAR_6, unsigned int VAR_7)
{


 if ((VAR_6->t_stateflags & (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1))
  return (((void*)0));
 if (VAR_6->t_stateflags & VAR_0 &&
     VAR_7 < sizeof VAR_4 / sizeof(char *))
  return (VAR_4[VAR_7]);


 if (VAR_6->t_stateflags & VAR_2 &&
     VAR_7 < sizeof VAR_3 / sizeof(char *))
  return (VAR_3[VAR_7]);


 if (VAR_7 < sizeof VAR_5 / sizeof(char *))
  return (VAR_5[VAR_7]);

 return (((void*)0));
}
