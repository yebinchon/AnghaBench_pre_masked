
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_part {int refcnt; scalar_t__ len; scalar_t__ offset; struct msg_buffer* part; scalar_t__ next; } ;
struct msg_buffer {int dummy; } ;


 struct msg_part* FUNC_0 () ;
 int FUNC_1 (struct msg_part*) ;
 int VAR_0 ;

struct msg_part *FUNC_2 (struct msg_part *VAR_1, struct msg_buffer *VAR_2) {
  struct msg_part *VAR_3 = FUNC_0 ();
  VAR_0 ++;
  FUNC_1 (VAR_3);
  VAR_3->refcnt = 1;
  VAR_3->next = 0;
  VAR_3->part = VAR_2;
  VAR_3->offset = 0;
  VAR_3->len = 0;
  return VAR_3;
}
