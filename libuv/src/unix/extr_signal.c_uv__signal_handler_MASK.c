
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int signum; int caught_signals; TYPE_1__* loop; } ;
typedef TYPE_2__ uv_signal_t ;
struct TYPE_11__ {int signum; TYPE_2__* handle; } ;
typedef TYPE_3__ uv__signal_msg_t ;
struct TYPE_9__ {int * signal_pipefd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_6) {
  uv__signal_msg_t VAR_7;
  uv_signal_t* VAR_8;
  int VAR_9;

  VAR_9 = VAR_3;
  FUNC_2(&VAR_7, 0, sizeof VAR_7);

  if (FUNC_4()) {
    VAR_3 = VAR_9;
    return;
  }

  for (VAR_8 = FUNC_3(VAR_6);
       VAR_8 != ((void*)0) && VAR_8->signum == VAR_6;
       VAR_8 = FUNC_0(VAR_5, &VAR_4, VAR_8)) {
    int VAR_10;

    VAR_7.signum = VAR_6;
    VAR_7.handle = VAR_8;





    do {
      VAR_10 = FUNC_6(VAR_8->loop->signal_pipefd[1], &VAR_7, sizeof VAR_7);
    } while (VAR_10 == -1 && VAR_3 == VAR_1);

    FUNC_1(VAR_10 == sizeof VAR_7 ||
           (VAR_10 == -1 && (VAR_3 == VAR_0 || VAR_3 == VAR_2)));

    if (VAR_10 != -1)
      VAR_8->caught_signals++;
  }

  FUNC_5();
  VAR_3 = VAR_9;
}
