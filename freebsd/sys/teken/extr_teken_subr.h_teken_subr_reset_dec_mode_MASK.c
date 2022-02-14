
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int tp_col; int tp_row; } ;
struct TYPE_10__ {int tp_row; } ;
struct TYPE_9__ {int ts_end; int ts_begin; } ;
struct TYPE_12__ {int t_stateflags; TYPE_3__ t_cursor; TYPE_2__ t_winsize; TYPE_1__ t_originreg; } ;
typedef TYPE_4__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_4(teken_t *VAR_8, unsigned int VAR_9)
{

 switch (VAR_9) {
 case 1:
  VAR_8->t_stateflags &= ~VAR_5;
  break;
 case 2:
  FUNC_2("DECRST VT52\n");
  break;
 case 3:
  FUNC_1(VAR_8, VAR_0, 0);
  FUNC_3(VAR_8);
  break;
 case 5:
  FUNC_2("DECRST inverse video\n");
  break;
 case 6:
  VAR_8->t_stateflags &= ~VAR_6;
  VAR_8->t_originreg.ts_begin = 0;
  VAR_8->t_originreg.ts_end = VAR_8->t_winsize.tp_row;
  VAR_8->t_cursor.tp_row = VAR_8->t_cursor.tp_col = 0;
  VAR_8->t_stateflags &= ~VAR_7;
  FUNC_0(VAR_8);
  break;
 case 7:
  VAR_8->t_stateflags &= ~VAR_4;
  break;
 case 8:
  FUNC_1(VAR_8, VAR_1, 0);
  break;
 case 25:
  FUNC_1(VAR_8, VAR_3, 0);
  break;
 case 40:
  FUNC_2("DECRST allow 132\n");
  break;
 case 45:
  FUNC_2("DECRST reverse wraparound\n");
  break;
 case 47:
  FUNC_2("Switch to alternate buffer\n");
  break;
 case 1000:
  FUNC_1(VAR_8, VAR_2, 0);
  break;
 default:
  FUNC_2("Unknown DECRST: %u\n", VAR_9);
 }
}
