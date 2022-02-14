
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct news_gather_extra {int mask; int st_time; int end_time; int request_tag; int user_mode; int user_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,...) ;

int FUNC_2 (char *VAR_2, char *VAR_3, int VAR_4, void *VAR_5) {
  struct news_gather_extra *VAR_6 = VAR_5;
  int VAR_7 = 0;

  if ((VAR_1 || VAR_0)) {
    VAR_7 = FUNC_1 (VAR_2, "%%raw_updates%d[%d,%d]:%d", VAR_6->mask, VAR_6->st_time, VAR_6->end_time, VAR_6->request_tag);
  } else {
    if (!VAR_6->user_mode) {
      VAR_7 = FUNC_1 (VAR_2, "%%raw_comm_updates[%d,%d]:%d", VAR_6->st_time, VAR_6->end_time, VAR_6->request_tag);
    } else if (VAR_6->user_mode == 1) {
      VAR_7 = FUNC_1 (VAR_2, "%%raw_user_comm_updates[%d,%d]:%d,%d", VAR_6->st_time, VAR_6->end_time, VAR_6->user_id, VAR_6->mask);
    } else if (VAR_6->user_mode == 2) {
      VAR_7 = FUNC_1 (VAR_2, "%%raw_user_comm_bookmarks%d,%d", VAR_6->user_id, VAR_6->mask);
    } else {
      FUNC_0 (0);
    }
  }
  return VAR_7;
}
