
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qib_devdata {struct diag_observer_list_elt* diag_observer_list; } ;
struct diag_observer_list_elt {struct diag_observer_list_elt* next; struct diag_observer* op; } ;
struct diag_observer {scalar_t__ bottom; scalar_t__ top; } ;



__attribute__((used)) static const struct diag_observer *FUNC_0(struct qib_devdata *VAR_0,
           u32 VAR_1)
{
 struct diag_observer_list_elt *VAR_2;
 const struct diag_observer *VAR_3 = ((void*)0);

 VAR_2 = VAR_0->diag_observer_list;
 while (VAR_2) {
  VAR_3 = VAR_2->op;
  if (VAR_1 >= VAR_3->bottom && VAR_1 <= VAR_3->top)
   break;
  VAR_2 = VAR_2->next;
 }
 if (!VAR_2)
  VAR_3 = ((void*)0);

 return VAR_3;
}
