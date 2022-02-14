
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tp_col; } ;
struct TYPE_7__ {TYPE_1__ t_cursor; } ;
typedef TYPE_2__ teken_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_0, unsigned int VAR_1)
{

 do {

  if (VAR_0->t_cursor.tp_col == 0)
   break;

  VAR_0->t_cursor.tp_col--;


  if (FUNC_1(VAR_0, VAR_0->t_cursor.tp_col))
   VAR_1--;
 } while (VAR_1 > 0);

 FUNC_0(VAR_0);
}
