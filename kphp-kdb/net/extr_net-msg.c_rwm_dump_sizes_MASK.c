
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int total_bytes; int last_offset; int first_offset; struct msg_part* last; struct msg_part* first; } ;
struct msg_part {int offset; int len; struct msg_part* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

int FUNC_2 (struct raw_message *VAR_1) {
  if (!VAR_1->first) {
    FUNC_1 (VAR_0, "( ) # %d\n", VAR_1->total_bytes);
    FUNC_0 (!VAR_1->total_bytes);
  } else {
    int VAR_2 = 0;
    struct msg_part *VAR_3 = VAR_1->first;
    FUNC_1 (VAR_0, "(");
    while (VAR_3 != 0) {
      int VAR_4 = (VAR_3 == VAR_1->last ? VAR_1->last_offset : VAR_3->offset + VAR_3->len) - (VAR_3 == VAR_1->first ? VAR_1->first_offset : VAR_3->offset);
      FUNC_1 (VAR_0, " %d", VAR_4);
      VAR_2 += VAR_4;
      if (VAR_3 == VAR_1->last) { break; }
      VAR_3 = VAR_3->next;
    }
    FUNC_0 (VAR_3 == VAR_1->last);
    FUNC_1 (VAR_0, " ) # %d\n", VAR_1->total_bytes);
    FUNC_0 (VAR_2 == VAR_1->total_bytes);
  }
  return 0;
}
