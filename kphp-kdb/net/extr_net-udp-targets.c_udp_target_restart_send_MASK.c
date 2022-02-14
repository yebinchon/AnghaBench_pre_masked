
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_target {int flags; scalar_t__ window_size; int socket; scalar_t__ window_queue; } ;
struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct udp_message {TYPE_1__ raw; } ;
struct tmp_msg {scalar_t__ value_bytes; struct udp_message* msg; } ;
struct TYPE_4__ {struct tmp_msg x; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct udp_message*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,struct udp_message*) ;

void FUNC_6 (struct udp_target *VAR_6) {

  VAR_6->flags &= ~VAR_1;
  while (VAR_6->window_queue && !(VAR_6->flags & VAR_1)) {
    struct tmp_msg VAR_7 = FUNC_3 (VAR_6->window_queue)->x;
    VAR_6->window_queue = FUNC_2 (VAR_6->window_queue);
    struct udp_message *VAR_8 = VAR_7.msg;
    if (VAR_4 && FUNC_0 () < VAR_4) {

      FUNC_4 (&VAR_8->raw);
      FUNC_1 (VAR_8);
    } else {
      FUNC_5 (VAR_6->socket, VAR_8);
    }
    VAR_5 ++;
    VAR_3 += VAR_8->raw.total_bytes;
    VAR_2 += VAR_7.value_bytes;
    VAR_6->window_size += VAR_7.value_bytes;;
    if (VAR_6->window_size >= VAR_0) {
      VAR_6->flags |= VAR_1;

    }
  }
}
