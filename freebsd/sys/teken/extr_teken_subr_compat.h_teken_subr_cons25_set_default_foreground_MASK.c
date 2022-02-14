
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int ta_fgcolor; } ;
struct TYPE_5__ {unsigned int ta_fgcolor; } ;
struct TYPE_7__ {TYPE_2__ t_curattr; TYPE_1__ t_defattr; } ;
typedef TYPE_3__ teken_t ;


 unsigned int* VAR_0 ;

__attribute__((used)) static void
FUNC_0(teken_t *VAR_1, unsigned int VAR_2)
{

 VAR_1->t_defattr.ta_fgcolor = VAR_0[VAR_2 % 8] | (VAR_2 & 8);
 VAR_1->t_curattr.ta_fgcolor = VAR_0[VAR_2 % 8] | (VAR_2 & 8);
}
