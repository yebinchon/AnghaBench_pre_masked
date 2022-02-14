
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_message {int total_bytes; int first_offset; int last_offset; struct msg_part* last; struct msg_part* first; } ;
struct msg_part {int offset; int len; struct msg_part* next; TYPE_1__* part; } ;
struct TYPE_2__ {void const* data; } ;


 int FUNC_0 (int) ;

int FUNC_1 (struct raw_message *VAR_0, int VAR_1, void (*VAR_2)(void *VAR_3, const void *VAR_4, int VAR_5), void *VAR_6) {
  FUNC_0 (VAR_1 >= 0);
  if (VAR_1 > VAR_0->total_bytes) {
    VAR_1 = VAR_0->total_bytes;
  }
  if (!VAR_1) { return 0; }
  int VAR_7 = VAR_1;
  if (VAR_0->first) {
    struct msg_part *VAR_8 = VAR_0->first;
    while (VAR_8) {
      int VAR_9 = (VAR_8 == VAR_0->first) ? VAR_0->first_offset : VAR_8->offset;
      int VAR_10 = (VAR_8 == VAR_0->last) ? VAR_0->last_offset - VAR_9: VAR_8->len + VAR_8->offset - VAR_9;
      if (VAR_10 >= VAR_1) {
        VAR_2 (VAR_6, VAR_8->part->data + VAR_9, VAR_1);
        VAR_1 = 0;
        break;
      }
      VAR_2 (VAR_6, VAR_8->part->data + VAR_9, VAR_10);
      VAR_1 -= VAR_10;
      VAR_8 = VAR_8->next;
    }
    FUNC_0 (!VAR_1);
  }
  return VAR_7;
}
