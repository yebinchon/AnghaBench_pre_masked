
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct desc_tbl_t {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* tail; struct desc_tbl_t data; } ;
typedef TYPE_1__ IARTN_Q ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1 (IARTN_Q *VAR_2, struct desc_tbl_t VAR_3) {
   IARTN_Q *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
   if (!VAR_4)
      return -VAR_0;
   VAR_4->data = VAR_3;
   VAR_4->next = ((void*)0);
   if (VAR_2->next == ((void*)0))
      VAR_2->next = VAR_2->tail = VAR_4;
   else {
      VAR_2->tail->next = VAR_4;
      VAR_2->tail = VAR_2->tail->next;
   }
   return 1;
}
