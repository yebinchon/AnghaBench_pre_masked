
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tp_col; } ;
struct TYPE_6__ {int t_tabstops; TYPE_1__ t_cursor; } ;
typedef TYPE_2__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_1, unsigned int VAR_2)
{

 switch (VAR_2) {
 case 0:
  FUNC_1(VAR_1, VAR_1->t_cursor.tp_col);
  break;
 case 3:
  FUNC_0(VAR_1->t_tabstops, 0, VAR_0 / 8);
  break;
 default:
  break;
 }
}
