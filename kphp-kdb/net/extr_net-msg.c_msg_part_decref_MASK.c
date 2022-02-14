
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg_part {scalar_t__ refcnt; struct msg_part* next; TYPE_1__* part; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct msg_part*) ;

__attribute__((used)) static int FUNC_3 (struct msg_part *VAR_0) {
  struct msg_part *VAR_1;
  int VAR_2 = 0;
  while (VAR_0) {
    if (--VAR_0->refcnt) {
      FUNC_0 (VAR_0->refcnt > 0);
      break;
    }
    int VAR_3 = --VAR_0->part->refcnt;
    if (!VAR_3) {
      FUNC_1 (VAR_0->part);
      VAR_2++;
    } else {
      FUNC_0 (VAR_3 > 0);
    }
    VAR_1 = VAR_0->next;
    VAR_0->part = 0;
    VAR_0->next = 0;
    FUNC_2 (VAR_0);
    VAR_0 = VAR_1;
  }
  return VAR_2;
}
