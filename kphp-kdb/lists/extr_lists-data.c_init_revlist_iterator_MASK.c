
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int metafile_number; int cur_pos; int change_metafile; int eof; int items_num; int RData; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*,int,int) ;

int FUNC_6 (int VAR_5, int VAR_6) {
  FUNC_5 (2, "Loading revlist iterator at metafile %d of %d\n", VAR_5, VAR_4);
  if (VAR_5 == -1) {
    VAR_6 = 0;
  }
  VAR_3.metafile_number = VAR_5;
  VAR_3.cur_pos = 0;
  VAR_3.change_metafile = VAR_6;
  if (VAR_5 >= VAR_4) {
    VAR_3.eof = 1;
    return 0;
  }
  if (VAR_5 == -1) {
    VAR_3.RData = VAR_0;
    VAR_3.items_num = VAR_1;
  } else {
    if (!FUNC_1 (VAR_5, -1)) {

      FUNC_0 (FUNC_4 (VAR_5, -1) >= 0);
    }
    VAR_3.RData = FUNC_3 (VAR_5);



    VAR_3.items_num = (FUNC_2 (VAR_5 + 1) - FUNC_2 (VAR_5)) >> 3;

  }
  VAR_3.eof = (VAR_3.items_num <= VAR_3.cur_pos);
  if (VAR_6 && VAR_3.eof) {
    return FUNC_6 (VAR_5 + 1, VAR_6);
  }
  return !VAR_3.eof;
}
