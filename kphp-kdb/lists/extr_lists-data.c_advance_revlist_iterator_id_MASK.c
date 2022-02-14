
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int object_id_t ;
struct TYPE_2__ {scalar_t__ cur_pos; scalar_t__ items_num; int eof; scalar_t__ change_metafile; scalar_t__ metafile_number; int RData; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2 (object_id_t VAR_1) {
  VAR_0.cur_pos = FUNC_1 (VAR_1, VAR_0.RData, VAR_0.items_num);
  if (VAR_0.cur_pos == VAR_0.items_num && VAR_0.change_metafile) {
    return FUNC_0 (VAR_0.metafile_number + 1, VAR_0.change_metafile);
  } else {
    VAR_0.eof = (VAR_0.cur_pos == VAR_0.items_num);
    return !VAR_0.eof;
  }
}
