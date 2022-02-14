
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; } ;
struct TYPE_6__ {int async_wfd; TYPE_3__ async_io_watcher; } ;
typedef TYPE_1__ uv_loop_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(uv_loop_t* VAR_5) {
  int VAR_6[2];
  int VAR_7;

  if (VAR_5->async_io_watcher.fd != -1)
    return 0;

  VAR_7 = FUNC_1();
  if (VAR_7 >= 0) {
    VAR_6[0] = VAR_7;
    VAR_6[1] = -1;
  }
  else if (VAR_7 == VAR_2) {
    VAR_7 = FUNC_5(VAR_6, VAR_3);





    if (VAR_7 == 0) {
      char VAR_8[32];
      int VAR_9;

      FUNC_0(VAR_8, sizeof(VAR_8), "/proc/self/fd/%d", VAR_6[0]);
      VAR_9 = FUNC_6(VAR_8, VAR_0);
      if (VAR_9 >= 0) {
        FUNC_2(VAR_6[0]);
        FUNC_2(VAR_6[1]);
        VAR_6[0] = VAR_9;
        VAR_6[1] = VAR_9;
      }
    }

  }

  if (VAR_7 < 0)
    return VAR_7;

  FUNC_3(&VAR_5->async_io_watcher, VAR_4, VAR_6[0]);
  FUNC_4(VAR_5, &VAR_5->async_io_watcher, VAR_1);
  VAR_5->async_wfd = VAR_6[1];

  return 0;
}
