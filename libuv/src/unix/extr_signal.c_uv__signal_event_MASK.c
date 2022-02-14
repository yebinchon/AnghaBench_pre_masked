
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ signum; int flags; scalar_t__ dispatched_signals; scalar_t__ caught_signals; int (* signal_cb ) (TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ uv_signal_t ;
struct TYPE_9__ {int * signal_pipefd; } ;
typedef TYPE_2__ uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_10__ {scalar_t__ signum; TYPE_1__* handle; } ;
typedef TYPE_3__ uv__signal_msg_t ;
typedef int uv__io_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(uv_loop_t* VAR_6,
                             uv__io_t* VAR_7,
                             unsigned int VAR_8) {
  uv__signal_msg_t* VAR_9;
  uv_signal_t* VAR_10;
  char VAR_11[sizeof(uv__signal_msg_t) * 32];
  size_t VAR_12, VAR_13, VAR_14;
  int VAR_15;

  VAR_12 = 0;
  VAR_13 = 0;

  do {
    VAR_15 = FUNC_3(VAR_6->signal_pipefd[0], VAR_11 + VAR_12, sizeof(VAR_11) - VAR_12);

    if (VAR_15 == -1 && VAR_5 == VAR_1)
      continue;

    if (VAR_15 == -1 && (VAR_5 == VAR_0 || VAR_5 == VAR_2)) {




      if (VAR_12 > 0)
        continue;


      return;
    }


    if (VAR_15 == -1)
      FUNC_0();

    VAR_12 += VAR_15;


    VAR_13 = (VAR_12 / sizeof(uv__signal_msg_t)) * sizeof(uv__signal_msg_t);

    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14 += sizeof(uv__signal_msg_t)) {
      VAR_9 = (uv__signal_msg_t*) (VAR_11 + VAR_14);
      VAR_10 = VAR_9->handle;

      if (VAR_9->signum == VAR_10->signum) {
        FUNC_1(!(VAR_10->flags & VAR_3));
        VAR_10->signal_cb(VAR_10, VAR_10->signum);
      }

      VAR_10->dispatched_signals++;

      if (VAR_10->flags & VAR_4)
        FUNC_7(VAR_10);





      if (VAR_10->caught_signals == VAR_10->dispatched_signals) {
        if (VAR_10->signum == 0)
          FUNC_5(VAR_10);
        if (VAR_10->flags & VAR_3)
          FUNC_6((uv_handle_t*) VAR_10);
      }
    }

    VAR_12 -= VAR_13;




    if (VAR_12) {
      FUNC_2(VAR_11, VAR_11 + VAR_13, VAR_12);
      continue;
    }
  } while (VAR_13 == sizeof VAR_11);
}
