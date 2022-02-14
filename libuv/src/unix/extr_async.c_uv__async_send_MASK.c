
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int async_wfd; TYPE_1__ async_io_watcher; } ;
typedef TYPE_2__ uv_loop_t ;
typedef int uint64_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,void const*,int) ;

__attribute__((used)) static void FUNC_2(uv_loop_t* VAR_4) {
  const void* VAR_5;
  ssize_t VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_5 = "";
  VAR_6 = 1;
  VAR_7 = VAR_4->async_wfd;


  if (VAR_7 == -1) {
    static const uint64_t VAR_9 = 1;
    VAR_5 = &VAR_9;
    VAR_6 = sizeof(VAR_9);
    VAR_7 = VAR_4->async_io_watcher.fd;
  }


  do
    VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);
  while (VAR_8 == -1 && VAR_3 == VAR_1);

  if (VAR_8 == VAR_6)
    return;

  if (VAR_8 == -1)
    if (VAR_3 == VAR_0 || VAR_3 == VAR_2)
      return;

  FUNC_0();
}
