
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
typedef TYPE_1__ teken_pos_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(void)
{
 teken_pos_t VAR_2;

 for (VAR_2.tp_row = 0; VAR_2.tp_row < VAR_1; VAR_2.tp_row++)
  for (VAR_2.tp_col = 0; VAR_2.tp_col < VAR_0; VAR_2.tp_col++)
   FUNC_0(&VAR_2);

 FUNC_1();
}
