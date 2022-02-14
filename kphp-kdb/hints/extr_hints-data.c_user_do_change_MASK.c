
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_13__ {int currId; } ;
struct TYPE_14__ {int object_old_n; char* object_data; int* object_indexes; char** object_names; int pref_table; int object_chg; TYPE_12__ object_table; int changed_objs; int flags; } ;
typedef TYPE_1__ user ;
typedef float rating ;
typedef TYPE_2__* change_list_ptr ;
struct TYPE_15__ {int type; int x; char* s; int val; int cnt; scalar_t__ timestamp; int number; int * next; } ;
typedef TYPE_2__ change_list ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (float) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,char*,int,int,int,...) ;
 int VAR_7 ;
 long long* FUNC_10 (char*) ;
 int FUNC_11 (int *,long long,int) ;
 int FUNC_12 (int *,long long,int) ;
 int FUNC_13 (TYPE_12__*,int ) ;
 int* VAR_8 ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (float*,int,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_1__*,int,int) ;
 char* FUNC_18 (TYPE_1__*,int) ;
 float* FUNC_19 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (TYPE_1__*,int,int) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int *,int) ;
 int VAR_12 ;

void FUNC_24 (user *VAR_13, change_list_ptr VAR_14) {
  int VAR_15 = VAR_14->type;
  int VAR_16;

  if (VAR_14->x == 0) {
    if (VAR_15 == 0) {

      int VAR_17, VAR_18;
      for (VAR_17 = VAR_13->object_old_n + VAR_13->object_table.currId - 1; VAR_17 > 0; VAR_17--) {
        for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
          *FUNC_19 (VAR_13, VAR_17, VAR_18) = 0.0f;
        }
      }
    } else if (VAR_15 == 1 || VAR_15 == 2) {

      VAR_13->flags = FUNC_1(VAR_13->flags, VAR_15 - 1);
    } else {
      FUNC_3 (0);
    }
    return;
  }

  if (VAR_14->x < 0) {
    if (FUNC_0(VAR_13->flags) == 0) {
      return;
    }

    int VAR_19 = VAR_15 / 256;
    int VAR_20 = -VAR_14->x;
    VAR_15 %= 256;
    VAR_16 = FUNC_21 (VAR_13, VAR_15, VAR_20);
    if (VAR_12 > 1) {
      FUNC_9 (VAR_11, "Incrementing object of type %d, object_id = %d, local_id = %d\n", VAR_15, VAR_20, VAR_16);
    }

    if (VAR_16 != 0) {
      if (VAR_19 >= VAR_2) {
        if (VAR_6) {
          *FUNC_19 (VAR_13, VAR_16, VAR_19 - VAR_2) = (rating)(VAR_14->val * FUNC_8 (((rating)(VAR_14->timestamp - VAR_9)) / VAR_4));
        } else {
          rating *VAR_21 = FUNC_19 (VAR_13, VAR_16, VAR_19 - VAR_2);
          *VAR_21 = VAR_14->val;
          if (*VAR_21 < -VAR_1) {
            *VAR_21 = -VAR_1;
          }
          if (*VAR_21 > VAR_1) {
            *VAR_21 = VAR_1;
          }
        }
      } else {
        FUNC_15 (FUNC_19 (VAR_13, VAR_16, VAR_19), VAR_14->cnt, VAR_14->timestamp);
      }
    }
    return;
  }

  if (VAR_15 >= 256) {
    VAR_15 -= 256;
    int VAR_22 = VAR_14->cnt;

    FUNC_3 (0 < VAR_15 && VAR_15 < 256);
    FUNC_3 (0 < VAR_22 && VAR_22 < 256);

    VAR_16 = FUNC_17 (VAR_13, VAR_15, VAR_14->x);

    if (VAR_12 > 1) {
      FUNC_9 (VAR_11, "Changing type of object with type %d, object_id = %d, local_id = %d to type %d\n", VAR_15, VAR_14->x, VAR_16, VAR_22);
    }

    if (FUNC_20 (VAR_13, VAR_16)) {
      change_list VAR_23;
      VAR_23.next = ((void*)0);



      VAR_23.s = ((void*)0);

      VAR_23.x = VAR_14->x;
      VAR_23.type = VAR_22;
      VAR_23.timestamp = VAR_14->timestamp;
      VAR_23.number = VAR_14->number;

      FUNC_24 (VAR_13, &VAR_23);


      int VAR_24 = FUNC_17 (VAR_13, VAR_22, VAR_14->x);
      if (VAR_24 == 0) {
        return;
      }

      int VAR_25;
      for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++) {
        *FUNC_19 (VAR_13, VAR_24, VAR_25) = *FUNC_19 (VAR_13, VAR_16, VAR_25);
      }




      VAR_23.type = -VAR_15;

      FUNC_24 (VAR_13, &VAR_23);
    }

    return;
  }

  int VAR_26;
  if (VAR_15 < 0) {
    VAR_26 = 1;
    VAR_15 = -VAR_15;
  } else {
    VAR_26 = 0;
  }






  if (VAR_26 == 1) {
    FUNC_3 (VAR_14->s == ((void*)0));
    VAR_16 = FUNC_21 (VAR_13, VAR_15, VAR_14->x);

    if (VAR_12 > 1) {
      FUNC_9 (VAR_11, "Deleting object of type %d, object_id = %d, local_id = %d\n", VAR_15, VAR_14->x, VAR_16);
    }

    if (VAR_16 == 0) {
      return;
    }
    FUNC_5 (&VAR_13->object_chg, VAR_16 * 2 + 1);

  } else {



    FUNC_3 (VAR_14->s == ((void*)0));


    VAR_16 = FUNC_17 (VAR_13, VAR_15, VAR_14->x);
    if (VAR_12 > 1) {
      FUNC_9 (VAR_11, "Adding object of type %d, object_id = %d, local_id = %d\n", VAR_15, VAR_14->x, VAR_16);
    }

    if (FUNC_20 (VAR_13, VAR_16)) {
      return;

    } else {
      if (VAR_16 == 0) {
        if (VAR_13->object_old_n + VAR_13->object_table.currId + 1 < VAR_0 - (VAR_8[VAR_15] < VAR_0) * VAR_0 / 10) {
          VAR_16 = FUNC_13 (&VAR_13->object_table, FUNC_2(VAR_15, VAR_14->x)) + VAR_13->object_old_n;

          FUNC_22 (VAR_13);

          if (VAR_6) {
            int VAR_27;

            for (VAR_27 = 0; VAR_27 < VAR_10; VAR_27++) {
              FUNC_15 (FUNC_19 (VAR_13, VAR_16, VAR_27), 1, VAR_14->timestamp);
            }
          }

          if (VAR_15 == 10) {
            VAR_7++;
          }
        } else {
          return;
        }

        if (VAR_12 > 1) {
          FUNC_9 (VAR_11, "Adding object of type %d, object_id = %d, local_id = %d\n", VAR_15, VAR_14->x, VAR_16);
        }
      }
    }




    FUNC_22 (VAR_13);
  }
}
