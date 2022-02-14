
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tot_comments; TYPE_2__* last; TYPE_2__* first; } ;
typedef TYPE_1__ place_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ comment_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2 (place_t *VAR_1) {
  FUNC_0 (VAR_0);
  comment_t *VAR_2 = VAR_1->first, *VAR_3;
  while (VAR_2 != (comment_t *) VAR_1) {
    VAR_3 = VAR_2->next;
    VAR_1->tot_comments--;
    FUNC_0 (VAR_1->tot_comments >= 0);
    FUNC_1 (VAR_2);
    VAR_2 = VAR_3;
  }
  FUNC_0 (!VAR_1->tot_comments);
  VAR_1->first = VAR_1->last = (comment_t *) VAR_1;
}
