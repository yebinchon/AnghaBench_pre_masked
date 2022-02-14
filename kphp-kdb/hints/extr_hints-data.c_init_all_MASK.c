
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user ;
typedef int rating ;
typedef int kfs_file_handle_t ;
struct TYPE_8__ {int user_cnt; TYPE_1__* user_index; int log_pos1_crc32; int log_pos1; int log_timestamp; int created_at; } ;
struct TYPE_7__ {struct TYPE_7__* prev_used; struct TYPE_7__* next_used; int flags; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_5 (int *,int *) ;
 void* VAR_7 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int) ;
 void** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,char*,long) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 TYPE_4__ VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_9 (int ) ;
 int VAR_23 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_12 () ;
 void* VAR_34 ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_35 ;
 TYPE_2__* VAR_36 ;
 int VAR_37 ;
 void* VAR_38 ;
 scalar_t__ VAR_39 ;

int FUNC_14 (kfs_file_handle_t VAR_40) {
  int VAR_41;

  if (VAR_37 > 3) {
    FUNC_8 (VAR_33, "sizeof (user) = %ld\n", (long)sizeof (user));
  }

  VAR_23 = 1;

  VAR_5 = FUNC_6 ((VAR_1 + 1) * sizeof (int));

  if (VAR_17) {
    if (200ll * VAR_1 < 2000000000ll) {
      VAR_4 = 200 * VAR_1;
    } else {
      VAR_4 = 2000000000;
    }

    VAR_6 = FUNC_6 (VAR_4);
    VAR_25 = FUNC_6 (VAR_4);
    VAR_34 = FUNC_6 ((VAR_1 + 1) * sizeof (long long));
    VAR_28 = FUNC_6 ((VAR_1 + 1) * sizeof (rating) * VAR_3);
    VAR_29 = FUNC_6 ((VAR_1 + 1) * sizeof (rating));
    VAR_13 = FUNC_6 (VAR_4);







  } else {
    int VAR_42;
    for (VAR_42 = 0; VAR_42 <= VAR_2; VAR_42++) {
      VAR_8[VAR_42] = FUNC_6 ((VAR_1 + 1) * sizeof (rating));
    }
    VAR_7 = FUNC_6 ((VAR_1 + 1) * sizeof (rating));
    VAR_38 = FUNC_6 (VAR_1 * sizeof (rating));

    VAR_15 = FUNC_6 ((VAR_1 + 1) * sizeof (int));
    VAR_31 = FUNC_6 (VAR_1 * sizeof (long long));
    VAR_30 = FUNC_6 (VAR_1 * sizeof (int));




    VAR_10 = FUNC_7 ((VAR_1 + 1) * sizeof (int));

  }

  FUNC_5 (&VAR_12, &VAR_11);
  FUNC_10 (&VAR_35);

  int VAR_43 = FUNC_9 (VAR_40);

  VAR_32 = VAR_14.created_at;

  VAR_22 = VAR_14.log_timestamp;
  VAR_21 = VAR_14.log_pos1;
  VAR_20 = VAR_14.log_pos1_crc32;

  int VAR_44 = VAR_18 = VAR_14.user_cnt;

  if (VAR_44 < VAR_9) {
    VAR_44 = VAR_9;
  }

  FUNC_4 (VAR_44 >= VAR_9);

  VAR_44 *= 1.1;
  while (VAR_44 % 2 == 0 || VAR_44 % 5 == 0) {
    VAR_44++;
  }

  if (VAR_39) {
    VAR_44 = 3;
  }

  FUNC_11 (&VAR_35, VAR_44);

  VAR_36 = FUNC_6 (sizeof (user) * VAR_44);
  for (VAR_41 = 0; VAR_41 < VAR_44; VAR_41++) {
    FUNC_13 (&VAR_36[VAR_41]);
  }

  for (VAR_41 = 1; VAR_41 <= VAR_14.user_cnt; VAR_41++) {
    VAR_36[VAR_41].flags = FUNC_2 (VAR_36[VAR_41].flags, FUNC_0 (VAR_14.user_index[VAR_41].flags));
    VAR_36[VAR_41].flags = FUNC_3 (VAR_36[VAR_41].flags, FUNC_1 (VAR_14.user_index[VAR_41].flags));
  }

  VAR_0 = VAR_36;
  VAR_0->next_used = VAR_0->prev_used = VAR_0;

  if (VAR_43) {
    FUNC_12();
  }

  return VAR_43;
}
