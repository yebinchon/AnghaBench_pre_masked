
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* dl_t ;
typedef scalar_t__ dl_status ;
typedef TYPE_3__* dl_private_t ;
struct TYPE_8__ {int has_length; size_t body_length; TYPE_1__* in; } ;
struct TYPE_7__ {TYPE_3__* private_state; } ;
struct TYPE_6__ {char* in_head; char* in_tail; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

dl_status FUNC_2(dl_t VAR_1) {
  dl_private_t VAR_2 = VAR_1->private_state;
  dl_status VAR_3;
  const char *VAR_4 = VAR_2->in->in_head;
  const char *VAR_5 = VAR_2->in->in_tail;
  while (1) {
    size_t VAR_6 = VAR_5 - VAR_4;
    if (!VAR_2->has_length && VAR_6 >= 4) {

      size_t VAR_7 = FUNC_1(VAR_4);
      VAR_2->body_length = VAR_7;
      VAR_2->has_length = 1;

    } else if (VAR_2->has_length && VAR_6 >= VAR_2->body_length) {

      VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2->body_length);
      VAR_4 += VAR_2->body_length;
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
