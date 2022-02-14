
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_os_sock_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_5__ {int is_server_connection; TYPE_2__ timer_handle; scalar_t__ open_handles; TYPE_3__ poll_handle; scalar_t__ got_disconnect; scalar_t__ sent_fin; scalar_t__ got_fin; scalar_t__ delayed_events; scalar_t__ events; scalar_t__ sent; scalar_t__ read; int sock; } ;
typedef TYPE_1__ connection_context_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static connection_context_t* FUNC_5(
    uv_os_sock_t VAR_0, int VAR_1) {
  int VAR_2;
  connection_context_t* VAR_3;

  VAR_3 = (connection_context_t*) FUNC_1(sizeof *VAR_3);
  FUNC_0(VAR_3 != ((void*)0));

  VAR_3->sock = VAR_0;
  VAR_3->is_server_connection = VAR_1;
  VAR_3->read = 0;
  VAR_3->sent = 0;
  VAR_3->open_handles = 0;
  VAR_3->events = 0;
  VAR_3->delayed_events = 0;
  VAR_3->got_fin = 0;
  VAR_3->sent_fin = 0;
  VAR_3->got_disconnect = 0;

  VAR_2 = FUNC_3(FUNC_2(), &VAR_3->poll_handle, VAR_0);
  VAR_3->open_handles++;
  VAR_3->poll_handle.data = VAR_3;
  FUNC_0(VAR_2 == 0);

  VAR_2 = FUNC_4(FUNC_2(), &VAR_3->timer_handle);
  VAR_3->open_handles++;
  VAR_3->timer_handle.data = VAR_3;
  FUNC_0(VAR_2 == 0);

  return VAR_3;
}
