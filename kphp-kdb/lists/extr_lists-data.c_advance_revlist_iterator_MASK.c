
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eof; scalar_t__ cur_pos; scalar_t__ items_num; scalar_t__ metafile_number; scalar_t__ change_metafile; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2 (void) {
  if (VAR_0.eof) {
    return 0;
  }
  VAR_0.cur_pos ++;
  if (VAR_0.cur_pos == VAR_0.items_num) {
    if (!VAR_0.change_metafile) {
      VAR_0.eof = 1;
      return 0;
    } else {
      return FUNC_0 (VAR_0.metafile_number + 1, VAR_0.change_metafile);
    }
  } else {
    if (VAR_1 && VAR_0.change_metafile) {
      FUNC_1 (VAR_0.metafile_number);
    }
    return 1;
  }
}
