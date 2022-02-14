
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msg_buffer {int dummy; } ;
struct TYPE_3__ {int buffer_size; } ;


 TYPE_1__* VAR_0 ;
 struct msg_buffer* FUNC_0 (struct msg_buffer*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 () ;

struct msg_buffer *FUNC_2 (struct msg_buffer *VAR_2, int VAR_3) {
  if (!VAR_1) {
    FUNC_1 ();
  }
  int VAR_4 = VAR_1 - 1;
  if (VAR_3 >= 0) {
    while (VAR_4 > 0 && VAR_0[VAR_4-1].buffer_size >= VAR_3) {
      VAR_4--;
    }
  }
  return FUNC_0 (VAR_2, &VAR_0[VAR_4]);
}
