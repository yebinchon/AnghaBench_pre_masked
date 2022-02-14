
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ta_format; int ta_bgcolor; int ta_fgcolor; } ;
struct TYPE_5__ {TYPE_1__ t_defattr; } ;
typedef TYPE_2__ teken_t ;


 int VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (int ) ;

void
FUNC_1(const teken_t *VAR_2, int *VAR_3, int *VAR_4)
{

 *VAR_3 = VAR_1[FUNC_0(VAR_2->t_defattr.ta_fgcolor)];
 if (VAR_2->t_defattr.ta_format & VAR_0)
  *VAR_3 += 8;
 *VAR_4 = VAR_1[FUNC_0(VAR_2->t_defattr.ta_bgcolor)];
}
