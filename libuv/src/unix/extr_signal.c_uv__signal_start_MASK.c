
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int signum; int flags; void* signal_cb; } ;
typedef TYPE_1__ uv_signal_t ;
typedef void* uv_signal_cb ;
typedef int sigset_t ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(uv_signal_t* VAR_4,
                            uv_signal_cb VAR_5,
                            int VAR_6,
                            int VAR_7) {
  sigset_t VAR_8;
  int VAR_9;
  uv_signal_t* VAR_10;

  FUNC_1(!FUNC_3(VAR_4));





  if (VAR_6 == 0)
    return VAR_0;






  if (VAR_6 == VAR_4->signum) {
    VAR_4->signal_cb = VAR_5;
    return 0;
  }


  if (VAR_4->signum != 0) {
    FUNC_7(VAR_4);
  }

  FUNC_4(&VAR_8);





  VAR_10 = FUNC_5(VAR_6);
  if (VAR_10 == ((void*)0) ||
      (!VAR_7 && (VAR_10->flags & VAR_1))) {
    VAR_9 = FUNC_6(VAR_6, VAR_7);
    if (VAR_9) {

      FUNC_8(&VAR_8);
      return VAR_9;
    }
  }

  VAR_4->signum = VAR_6;
  if (VAR_7)
    VAR_4->flags |= VAR_1;

  FUNC_0(VAR_3, &VAR_2, VAR_4);

  FUNC_8(&VAR_8);

  VAR_4->signal_cb = VAR_5;
  FUNC_2(VAR_4);

  return 0;
}
