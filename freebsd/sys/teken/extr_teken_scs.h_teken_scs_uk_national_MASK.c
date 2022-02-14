
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_stateflags; } ;
typedef TYPE_1__ teken_t ;
typedef char teken_char_t ;


 int VAR_0 ;

__attribute__((used)) static teken_char_t
FUNC_0(const teken_t *VAR_1, teken_char_t VAR_2)
{


 if (VAR_2 == '#')
  return (VAR_1->t_stateflags & VAR_0 ? 0x9c : 0xa3);
 return (VAR_2);
}
