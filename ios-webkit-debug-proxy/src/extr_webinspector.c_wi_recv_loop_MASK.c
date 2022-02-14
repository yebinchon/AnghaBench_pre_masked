
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* wi_t ;
typedef scalar_t__ wi_status ;
typedef TYPE_3__* wi_private_t ;
struct TYPE_9__ {int has_length; size_t body_length; TYPE_1__* in; } ;
struct TYPE_8__ {scalar_t__ (* recv_packet ) (TYPE_2__*,char const*,int) ;TYPE_3__* private_state; } ;
struct TYPE_7__ {char* in_head; char* in_tail; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char const*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const*,size_t*) ;

wi_status FUNC_2(wi_t VAR_1) {
  wi_private_t VAR_2 = VAR_1->private_state;
  wi_status VAR_3;
  const char *VAR_4 = VAR_2->in->in_head;
  const char *VAR_5 = VAR_2->in->in_tail;
  while (1) {
    size_t VAR_6 = VAR_5 - VAR_4;
    if (!VAR_2->has_length && VAR_6 >= 4) {

      size_t VAR_7;
      VAR_3 = FUNC_1(VAR_1, VAR_4, &VAR_7);
      if (VAR_3) {
        VAR_4 += 4;
        break;
      }
      VAR_2->body_length = VAR_7;
      VAR_2->has_length = 1;

    } else if (VAR_2->has_length && VAR_6 >= VAR_2->body_length + 4) {

      VAR_3 = VAR_1->recv_packet(VAR_1, VAR_4, VAR_2->body_length + 4);
      VAR_4 += VAR_2->body_length + 4;
      VAR_2->has_length = 0;
      VAR_2->body_length = 0;
      if (VAR_3) {
        break;
      }
    } else {

      VAR_3 = VAR_0;
      break;
    }
  }
  VAR_2->in->in_head = VAR_4;
  return VAR_3;
}
