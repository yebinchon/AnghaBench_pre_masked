
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int poll_cb; int io_watcher; int loop; } ;
typedef TYPE_1__ uv_poll_t ;
typedef int uv_poll_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(uv_poll_t* VAR_8, int VAR_9, uv_poll_cb VAR_10) {
  int VAR_11;

  FUNC_0((VAR_9 & ~(VAR_4 | VAR_5 | VAR_2 |
                      VAR_3)) == 0);
  FUNC_0(!FUNC_3(VAR_8));

  FUNC_4(VAR_8);

  if (VAR_9 == 0)
    return 0;

  VAR_11 = 0;
  if (VAR_9 & VAR_4)
    VAR_11 |= VAR_0;
  if (VAR_9 & VAR_3)
    VAR_11 |= VAR_6;
  if (VAR_9 & VAR_5)
    VAR_11 |= VAR_1;
  if (VAR_9 & VAR_2)
    VAR_11 |= VAR_7;

  FUNC_2(VAR_8->loop, &VAR_8->io_watcher, VAR_11);
  FUNC_1(VAR_8);
  VAR_8->poll_cb = VAR_10;

  return 0;
}
