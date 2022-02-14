
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t t_curscs; int * t_scs; int t_saved_curscs; int t_curattr; int t_saved_curattr; int t_cursor; int t_saved_cursor; } ;
typedef TYPE_1__ teken_t ;



__attribute__((used)) static void
FUNC_0(teken_t *VAR_0)
{

 VAR_0->t_saved_cursor = VAR_0->t_cursor;
 VAR_0->t_saved_curattr = VAR_0->t_curattr;
 VAR_0->t_saved_curscs = VAR_0->t_scs[VAR_0->t_curscs];
}
