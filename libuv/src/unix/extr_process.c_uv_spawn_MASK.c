
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int pid; int exit_cb; int queue; int status; } ;
typedef TYPE_1__ uv_process_t ;
struct TYPE_14__ {int flags; int stdio_count; TYPE_7__* stdio; int exit_cb; int * file; } ;
typedef TYPE_2__ uv_process_options_t ;
struct TYPE_15__ {int process_handles; int cloexec_lock; int child_watcher; } ;
typedef TYPE_3__ uv_loop_t ;
typedef int uv_handle_t ;
typedef int ssize_t ;
typedef int pid_t ;
typedef int exec_errorno ;
struct TYPE_16__ {int flags; } ;


 scalar_t__ FUNC_0 (int**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int*,int) ;
 int VAR_16 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int**) ;
 int FUNC_11 (TYPE_3__*,int *,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int*,int ) ;
 int** FUNC_14 (int) ;
 int FUNC_15 (TYPE_2__ const*,int,int**,int) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*,int*) ;
 int FUNC_18 (TYPE_7__*,int*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int,int*,int ) ;

int FUNC_23(uv_loop_t* VAR_17,
             uv_process_t* VAR_18,
             const uv_process_options_t* VAR_19) {




  int VAR_20[2] = { -1, -1 };
  int VAR_21[8][2];
  int (*VAR_22)[2];
  int VAR_23;
  ssize_t VAR_24;
  pid_t VAR_25;
  int VAR_26;
  int VAR_27;
  int VAR_28;
  int VAR_29;

  FUNC_5(VAR_19->file != ((void*)0));
  FUNC_5(!(VAR_19->flags & ~(VAR_8 |
                              VAR_9 |
                              VAR_10 |
                              VAR_11 |
                              VAR_12 |
                              VAR_13 |
                              VAR_14)));

  FUNC_11(VAR_17, (uv_handle_t*)VAR_18, VAR_7);
  FUNC_1(&VAR_18->queue);

  VAR_23 = VAR_19->stdio_count;
  if (VAR_23 < 3)
    VAR_23 = 3;

  VAR_26 = VAR_3;
  VAR_22 = VAR_21;
  if (VAR_23 > (int) FUNC_0(VAR_21))
    VAR_22 = FUNC_14(VAR_23 * sizeof(*VAR_22));

  if (VAR_22 == ((void*)0))
    goto error;

  for (VAR_28 = 0; VAR_28 < VAR_23; VAR_28++) {
    VAR_22[VAR_28][0] = -1;
    VAR_22[VAR_28][1] = -1;
  }

  for (VAR_28 = 0; VAR_28 < VAR_19->stdio_count; VAR_28++) {
    VAR_26 = FUNC_17(VAR_19->stdio + VAR_28, VAR_22[VAR_28]);
    if (VAR_26)
      goto error;
  }
  VAR_26 = FUNC_13(VAR_20, 0);
  if (VAR_26)
    goto error;

  FUNC_21(&VAR_17->child_watcher, VAR_16, VAR_2);


  FUNC_19(&VAR_17->cloexec_lock);
  VAR_25 = FUNC_6();

  if (VAR_25 == -1) {
    VAR_26 = FUNC_3(VAR_15);
    FUNC_20(&VAR_17->cloexec_lock);
    FUNC_8(VAR_20[0]);
    FUNC_8(VAR_20[1]);
    goto error;
  }

  if (VAR_25 == 0) {
    FUNC_15(VAR_19, VAR_23, VAR_22, VAR_20[1]);
    FUNC_4();
  }


  FUNC_20(&VAR_17->cloexec_lock);
  FUNC_8(VAR_20[1]);

  VAR_18->status = 0;
  VAR_27 = 0;
  do
    VAR_24 = FUNC_7(VAR_20[0], &VAR_27, sizeof(VAR_27));
  while (VAR_24 == -1 && VAR_15 == VAR_0);

  if (VAR_24 == 0)
    ;
  else if (VAR_24 == sizeof(VAR_27)) {
    do
      VAR_26 = FUNC_22(VAR_25, &VAR_29, 0);
    while (VAR_26 == -1 && VAR_15 == VAR_0);
    FUNC_5(VAR_26 == VAR_25);
  } else if (VAR_24 == -1 && VAR_15 == VAR_1) {
    do
      VAR_26 = FUNC_22(VAR_25, &VAR_29, 0);
    while (VAR_26 == -1 && VAR_15 == VAR_0);
    FUNC_5(VAR_26 == VAR_25);
  } else
    FUNC_4();

  FUNC_9(VAR_20[0]);

  for (VAR_28 = 0; VAR_28 < VAR_19->stdio_count; VAR_28++) {
    VAR_26 = FUNC_18(VAR_19->stdio + VAR_28, VAR_22[VAR_28]);
    if (VAR_26 == 0)
      continue;

    while (VAR_28--)
      FUNC_16(VAR_19->stdio + VAR_28);

    goto error;
  }


  if (VAR_27 == 0) {
    FUNC_2(&VAR_17->process_handles, &VAR_18->queue);
    FUNC_12(VAR_18);
  }

  VAR_18->pid = VAR_25;
  VAR_18->exit_cb = VAR_19->exit_cb;

  if (VAR_22 != VAR_21)
    FUNC_10(VAR_22);

  return VAR_27;

error:
  if (VAR_22 != ((void*)0)) {
    for (VAR_28 = 0; VAR_28 < VAR_23; VAR_28++) {
      if (VAR_28 < VAR_19->stdio_count)
        if (VAR_19->stdio[VAR_28].flags & (VAR_5 | VAR_6))
          continue;
      if (VAR_22[VAR_28][0] != -1)
        FUNC_9(VAR_22[VAR_28][0]);
      if (VAR_22[VAR_28][1] != -1)
        FUNC_9(VAR_22[VAR_28][1]);
    }

    if (VAR_22 != VAR_21)
      FUNC_10(VAR_22);
  }

  return VAR_26;

}
