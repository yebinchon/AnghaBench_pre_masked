
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; scalar_t__ send_queue_size; int send_queue_count; } ;
typedef TYPE_3__ uv_udp_t ;
struct TYPE_13__ {scalar_t__ queued_bytes; } ;
struct TYPE_14__ {TYPE_1__ io; } ;
struct TYPE_16__ {int (* cb ) (TYPE_4__*,int ) ;TYPE_2__ u; } ;
typedef TYPE_4__ uv_udp_send_t ;
typedef int uv_loop_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int) ;

void FUNC_7(uv_loop_t* VAR_1, uv_udp_t* VAR_2,
    uv_udp_send_t* VAR_3) {
  int VAR_4;

  FUNC_4(VAR_2->type == VAR_0);

  FUNC_4(VAR_2->send_queue_size >= VAR_3->u.io.queued_bytes);
  FUNC_4(VAR_2->send_queue_count >= 1);
  VAR_2->send_queue_size -= VAR_3->u.io.queued_bytes;
  VAR_2->send_queue_count--;

  FUNC_3(VAR_1, VAR_2, VAR_3);

  if (VAR_3->cb) {
    VAR_4 = 0;
    if (!FUNC_2(VAR_3)) {
      VAR_4 = FUNC_1(VAR_3);
    }
    VAR_3->cb(VAR_3, FUNC_6(VAR_4));
  }

  FUNC_0(VAR_2);
}
