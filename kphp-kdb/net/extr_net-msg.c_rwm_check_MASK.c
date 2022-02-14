
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {scalar_t__ magic; int total_bytes; int last_offset; int first_offset; struct msg_part* last; struct msg_part* first; } ;
struct msg_part {int offset; int len; struct msg_part* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1 (struct raw_message *VAR_2) {
  FUNC_0 (VAR_2->magic == VAR_0 || VAR_2->magic == VAR_1);
  if (!VAR_2->first) {
    FUNC_0 (!VAR_2->total_bytes);
  } else {
    int VAR_3 = 0;
    struct msg_part *VAR_4 = VAR_2->first;
    while (VAR_4 != 0) {
      int VAR_5 = (VAR_4 == VAR_2->last ? VAR_2->last_offset : VAR_4->offset + VAR_4->len) - (VAR_4 == VAR_2->first ? VAR_2->first_offset : VAR_4->offset);
      VAR_3 += VAR_5;
      if (VAR_4 == VAR_2->last) { break; }
      VAR_4 = VAR_4->next;
    }
    FUNC_0 (VAR_4 == VAR_2->last);
    FUNC_0 (VAR_3 == VAR_2->total_bytes);
  }
  return 0;
}
