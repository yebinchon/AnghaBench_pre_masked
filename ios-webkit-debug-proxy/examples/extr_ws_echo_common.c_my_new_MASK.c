
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
struct my_struct {int dummy; } ;
typedef TYPE_2__* my_t ;
struct TYPE_8__ {int fd; int port; TYPE_1__* ws; } ;
struct TYPE_7__ {TYPE_2__* state; int on_frame; int on_upgrade; int on_http_request; int send_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 () ;

my_t FUNC_4(int VAR_4, int VAR_5) {
  my_t VAR_6 = (my_t)FUNC_1(sizeof(struct my_struct));
  ws_t VAR_7 = FUNC_3();
  if (!VAR_7 || !VAR_6) {
    FUNC_0(VAR_7);
    return ((void*)0);
  }
  FUNC_2(VAR_6, 0, sizeof(struct my_struct));
  VAR_6->fd = VAR_4;
  VAR_6->port = VAR_5;
  VAR_6->ws = VAR_7;
  VAR_7->send_data = VAR_3;
  VAR_7->on_http_request = VAR_1;
  VAR_7->on_upgrade = VAR_2;
  VAR_7->on_frame = VAR_0;
  VAR_7->state = VAR_6;
  return VAR_6;
}
