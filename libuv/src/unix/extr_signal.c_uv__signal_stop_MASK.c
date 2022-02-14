
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ signum; int flags; scalar_t__ caught_signals; scalar_t__ dispatched_signals; } ;
typedef TYPE_1__ uv_signal_t ;
typedef int sigset_t ;


 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(uv_signal_t* VAR_3) {
  uv_signal_t* VAR_4;
  sigset_t VAR_5;
  uv_signal_t* VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;


  if (VAR_3->signum == 0)
    return;

  FUNC_3(&VAR_5);

  VAR_4 = FUNC_0(VAR_2, &VAR_1, VAR_3);
  FUNC_1(VAR_4 == VAR_3);
  (void) VAR_4;




  VAR_6 = FUNC_4(VAR_3->signum);
  if (VAR_6 == ((void*)0)) {
    FUNC_7(VAR_3->signum);
  } else {
    VAR_7 = VAR_3->flags & VAR_0;
    VAR_8 = VAR_6->flags & VAR_0;
    if (VAR_8 && !VAR_7) {
      VAR_9 = FUNC_5(VAR_3->signum, 1);
      FUNC_1(VAR_9 == 0);
    }
  }

  FUNC_6(&VAR_5);

  VAR_3->signum = 0;
  if (VAR_3->caught_signals == VAR_3->dispatched_signals)
    FUNC_2(VAR_3);
}
