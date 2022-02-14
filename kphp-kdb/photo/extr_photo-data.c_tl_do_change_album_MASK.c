
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_change_album {scalar_t__ changes_len; int album_id; int user_id; int changes; int mask; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

int FUNC_6 (struct tl_act_extra *VAR_8) {
  struct tl_change_album *VAR_9 = (struct tl_change_album *)VAR_8->extra;

  FUNC_0 (FUNC_1 (VAR_9->album_id) && 0 < VAR_9->changes_len && VAR_9->changes_len < VAR_2);

  if (FUNC_3 (VAR_0, VAR_9->mask, VAR_9->changes, VAR_9->changes_len) < 0) {
    FUNC_4 (VAR_5, "Can't parse changes");
    return -1;
  }

  int VAR_10 = 1;
  if (VAR_6 != 0) {
    VAR_10 &= FUNC_2 (VAR_9->user_id, VAR_9->album_id, VAR_1);
  }
  FUNC_0 (VAR_7 == 0);

  FUNC_5 (VAR_10 ? VAR_4 : VAR_3);
  return 0;
}
