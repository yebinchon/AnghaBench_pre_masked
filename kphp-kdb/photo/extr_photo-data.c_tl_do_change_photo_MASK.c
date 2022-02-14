
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int local_id; } ;
typedef TYPE_3__ user ;
struct tl_change_photo {scalar_t__ changes_len; int photo_id; int user_id; int changes; int mask; } ;
struct tl_act_extra {scalar_t__ extra; } ;
struct TYPE_10__ {int photo_len; int photo; int orig_album_id; int orig_owner_id; int server_id2; int server_id; } ;
struct TYPE_9__ {int secret; int extra; int local_id; int volume_id; int rotate; int size; } ;
struct TYPE_12__ {scalar_t__ v_fid; TYPE_2__ location_old; TYPE_1__ location_engine; scalar_t__ is_location_engine; } ;
typedef TYPE_4__ location ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_7 (int ,int ,int ,scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;

int FUNC_11 (struct tl_act_extra *VAR_11) {
  struct tl_change_photo *VAR_12 = (struct tl_change_photo *)VAR_11->extra;

  FUNC_0 (FUNC_1 (VAR_12->photo_id) && 0 < VAR_12->changes_len && VAR_12->changes_len < VAR_1);

  user *VAR_13 = FUNC_2 (VAR_12->user_id);
  FUNC_0 (VAR_13 != ((void*)0));

  FUNC_6 (VAR_13, VAR_13->local_id, VAR_2);
  if (!FUNC_10 (VAR_13)) {
    return -2;
  }

  if (FUNC_7 (VAR_3, VAR_12->mask, VAR_12->changes, VAR_12->changes_len) < 0) {
    FUNC_8 (VAR_6, "Can't parse changes");
    return -1;
  }

  int VAR_14 = 1;
  if (VAR_7 != 0) {
    VAR_14 &= FUNC_5 (VAR_12->user_id, VAR_12->photo_id, VAR_0);
  }
  int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
    location *VAR_16 = &VAR_8[VAR_15];
    if (VAR_16->is_location_engine) {
      VAR_14 &= FUNC_4 (
               VAR_12->user_id,
               VAR_12->photo_id,
               VAR_16->v_fid == VAR_10,
               VAR_16->location_engine.size,
               VAR_16->location_engine.rotate,
               VAR_16->location_engine.volume_id,
               VAR_16->location_engine.local_id,
               VAR_16->location_engine.extra,
               VAR_16->location_engine.secret);
    } else {
      VAR_14 &= FUNC_3 (
               VAR_12->user_id,
               VAR_12->photo_id,
               VAR_16->v_fid == VAR_10,
               VAR_16->location_old.server_id,
               VAR_16->location_old.server_id2,
               VAR_16->location_old.orig_owner_id,
               VAR_16->location_old.orig_album_id,
               VAR_16->location_old.photo,
               VAR_16->location_old.photo_len);
    }
  }

  FUNC_9 (VAR_14 ? VAR_5 : VAR_4);
  return 0;
}
