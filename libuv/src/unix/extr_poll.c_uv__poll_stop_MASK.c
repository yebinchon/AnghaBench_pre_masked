
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {TYPE_3__ io_watcher; int loop; } ;
typedef TYPE_1__ uv_poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(uv_poll_t* VAR_4) {
  FUNC_1(VAR_4->loop,
              &VAR_4->io_watcher,
              VAR_0 | VAR_1 | VAR_3 | VAR_2);
  FUNC_0(VAR_4);
  FUNC_2(VAR_4->loop, VAR_4->io_watcher.fd);
}
