
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tp_col; int tp_row; } ;
struct TYPE_8__ {int ts_begin; } ;
struct TYPE_10__ {int t_stateflags; TYPE_2__ t_cursor; TYPE_1__ t_scrollreg; TYPE_1__ t_originreg; } ;
typedef TYPE_3__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(teken_t *VAR_8, unsigned int VAR_9)
{

 switch (VAR_9) {
 case 1:
  VAR_8->t_stateflags |= VAR_5;
  break;
 case 2:
  FUNC_2("DECSET VT52\n");
  break;
 case 3:
  FUNC_1(VAR_8, VAR_0, 1);
  FUNC_3(VAR_8);
  break;
 case 5:
  FUNC_2("DECSET inverse video\n");
  break;
 case 6:
  VAR_8->t_stateflags |= VAR_6;
  VAR_8->t_originreg = VAR_8->t_scrollreg;
  VAR_8->t_cursor.tp_row = VAR_8->t_scrollreg.ts_begin;
  VAR_8->t_cursor.tp_col = 0;
  VAR_8->t_stateflags &= ~VAR_7;
  FUNC_0(VAR_8);
  break;
 case 7:
  VAR_8->t_stateflags |= VAR_4;
  break;
 case 8:
  FUNC_1(VAR_8, VAR_1, 1);
  break;
 case 25:
  FUNC_1(VAR_8, VAR_3, 1);
  break;
 case 40:
  FUNC_2("DECSET allow 132\n");
  break;
 case 45:
  FUNC_2("DECSET reverse wraparound\n");
  break;
 case 47:
  FUNC_2("Switch away from alternate buffer\n");
  break;
 case 1000:
  FUNC_1(VAR_8, VAR_2, 1);
  break;
 default:
  FUNC_2("Unknown DECSET: %u\n", VAR_9);
 }
}
