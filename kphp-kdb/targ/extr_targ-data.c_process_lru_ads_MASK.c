
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct advert {scalar_t__ disabled_since; int flags; scalar_t__ userlist_computed_at; scalar_t__ user_list; scalar_t__ users; int ad_id; } ;
struct TYPE_4__ {struct advert* first; TYPE_1__* last; } ;
struct TYPE_3__ {int ad_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct advert*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*,int ,struct advert*,...) ;

int FUNC_4 (void) {
  int VAR_6 = 0;
  FUNC_3 (3, "process_lru_ads() first=%d last=%d\n", VAR_2.first->ad_id, VAR_2.last->ad_id);
  while (VAR_2.first != (struct advert *) &VAR_2 && VAR_2.first->disabled_since <= VAR_3 - VAR_1) {
    struct advert *VAR_7 = VAR_2.first;
    FUNC_3 (3, "first ad in lru queue: ad #%d (%p), disabled_since=%d, log_last_ts=%d\n", VAR_7->ad_id, VAR_7, VAR_7->disabled_since, VAR_3);
    FUNC_2 (VAR_7);
    FUNC_0 (!(VAR_7->flags & VAR_0));
    if (VAR_7->user_list) {
      VAR_4--;
      VAR_5 -= VAR_7->users;
      FUNC_1 (VAR_7->user_list);
      VAR_7->user_list = 0;
      VAR_7->userlist_computed_at = 0;
    }
    ++VAR_6;
  }
  return VAR_6;
}
