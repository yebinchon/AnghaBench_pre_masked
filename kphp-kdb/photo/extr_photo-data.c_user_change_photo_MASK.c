
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int id; int album_by_photo; } ;
typedef TYPE_1__ user ;
struct TYPE_14__ {int * e; int tp; } ;
typedef TYPE_2__ my_change ;
struct TYPE_15__ {scalar_t__ v_fid; int v_int; } ;
typedef TYPE_3__ field ;
typedef int event ;
typedef int data ;
typedef int change ;
struct TYPE_16__ {int * obj; int dyn; } ;
typedef TYPE_4__ actual_object ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char*,int,int,int) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int *,int,TYPE_3__*,int,int ) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int * FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;

int FUNC_19 (user *VAR_6, int VAR_7, field *VAR_8, int VAR_9) {
  FUNC_10 ("user_change_photo %d: photo_id = %d, field_changes_n = %d\n", VAR_6->id, VAR_7, VAR_9);

  if (VAR_5) {
    return 1;
  }

  FUNC_1 (FUNC_18 (VAR_6));

  int VAR_10 = FUNC_16 (VAR_6, VAR_7);
  if (VAR_10 == 0) {
    return 0;
  }
  data *VAR_11 = FUNC_17 (VAR_6, VAR_10);
  if (VAR_11 == ((void*)0)) {
    return 0;
  }

  if (FUNC_8 (VAR_11, VAR_7) != 0) {
    return 0;
  }

  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
    FUNC_1 (VAR_8[VAR_12].v_fid != VAR_3 && VAR_8[VAR_12].v_fid != VAR_4);


    if (VAR_8[VAR_12].v_fid == VAR_2) {
      int VAR_13 = VAR_8[VAR_12].v_int;
      if (VAR_10 == VAR_13) {
        continue;
      }

      FUNC_10 ("Move (photo_id = %d) to (album_id = %d) (field_changes_n = %d)\n", VAR_7, VAR_8[VAR_12].v_int, VAR_9);

      if (!FUNC_2 (VAR_13)) {
        return 0;
      }

      if (VAR_13 < 0) {
        FUNC_15 (VAR_6, VAR_13);
      }

      data *VAR_14 = FUNC_17 (VAR_6, VAR_13);
      if (VAR_14 == ((void*)0)) {
        return 0;
      }

      if (FUNC_7 (VAR_14) + 1 > FUNC_0 (VAR_13)) {
        return 0;
      }

      actual_object VAR_15;
      int VAR_16 = FUNC_9 (VAR_11, VAR_7);
      FUNC_1 (VAR_16 >= 0);

      FUNC_1 (FUNC_6 (VAR_11, VAR_16, &VAR_15) >= 0);

      event *VAR_17 = FUNC_12 (VAR_15.obj, VAR_15.dyn, VAR_0);
      if (VAR_17 == VAR_15.obj) {
        VAR_17 = FUNC_11 (VAR_17);
      }

      FUNC_5 (VAR_11, VAR_7);

      VAR_16 = FUNC_4 (VAR_14, VAR_7);
      FUNC_1 (VAR_16 >= 0);

      my_change VAR_18;
      VAR_18.tp = VAR_1;
      VAR_18.e = VAR_17;

      FUNC_3 (VAR_14, (change *)&VAR_18, VAR_16);
      FUNC_13 (&VAR_6->album_by_photo, VAR_7, VAR_13);

      VAR_11 = VAR_14;


    }
  }

  return FUNC_14 (VAR_11, VAR_7, VAR_8, VAR_9, 0) > -1;
}
