
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lev_generic {scalar_t__ a; } ;
struct lev_add_message {scalar_t__ legacy_id; int type; int date; int user_id; int peer_id; } ;
struct TYPE_2__ {scalar_t__ max_legacy_id; scalar_t__ min_legacy_id; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,scalar_t__,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1 (int VAR_7, void *VAR_8) {
  struct lev_generic *VAR_9 = VAR_8;

  if (VAR_7 == VAR_1 && VAR_9->a > VAR_6) {
    VAR_6 = VAR_9->a;




  }

  if (
      (VAR_7 >= VAR_2 && VAR_7 <= VAR_2 + 0xff) ||
      (VAR_7 == VAR_3)
     ) {
    struct lev_add_message *VAR_10 = (struct lev_add_message *)VAR_9;

    if (!VAR_10->legacy_id) {
      FUNC_0 (VAR_5, "warning: binlog message (type=%02x, date=%d/%ld, user_id=%d, peer_id=%d) has zero legacy id, ignored\n", VAR_10->type & 0xff, VAR_10->date, VAR_6, VAR_10->user_id, VAR_10->peer_id);
    }

    if (VAR_10->legacy_id > VAR_0.max_legacy_id) {
      VAR_4 |= 1;
      return 1;
    }
    if (VAR_10->legacy_id < VAR_0.min_legacy_id) {
      VAR_4 |= 2;
      return 2;
    }
  }

  if (VAR_7 == VAR_1) {
    return 1;
  }

  return 0;
}
