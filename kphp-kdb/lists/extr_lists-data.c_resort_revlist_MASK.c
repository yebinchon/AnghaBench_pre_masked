
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int object_id_t ;
struct TYPE_2__ {long cur_pos; int RData; int eof; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,long,int) ;
 int VAR_3 ;

void FUNC_4 (void) {
  int VAR_4;
  if (VAR_2) {
    VAR_4 = 0;;
  } else {
    VAR_4 = -1;
  }
  object_id_t VAR_5;
  while (VAR_4 < VAR_3) {
    FUNC_1 (VAR_4, 0);
    long VAR_6 = 0;
    while (!VAR_1.eof) {
      VAR_5 = VAR_0;
      VAR_6 = VAR_1.cur_pos;
      while (!VAR_1.eof && FUNC_0 ()) {
        if (!FUNC_2 (VAR_5, VAR_0)) {
          break;
        }
      }
      FUNC_3 (VAR_1.RData, VAR_6, VAR_1.cur_pos - 1);
    }
    VAR_4 ++;
  }





}
