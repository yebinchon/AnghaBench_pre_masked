
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_stateflags; } ;
typedef TYPE_1__ teken_t ;
typedef char teken_char_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static teken_char_t
FUNC_0(const teken_t *VAR_3, teken_char_t VAR_4)
{


 if (VAR_4 >= '`' && VAR_4 <= '~')
  return (VAR_3->t_stateflags & VAR_0 ?
      VAR_1[VAR_4 - '`'] :
      VAR_2[VAR_4 - '`']);
 return (VAR_4);
}
