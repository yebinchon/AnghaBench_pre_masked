
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct merge_ref_iterator {int * current; void* cb_data; int * select; struct ref_iterator* iter1; struct ref_iterator* iter0; struct ref_iterator base; } ;
typedef int ref_iterator_select_fn ;


 int FUNC_0 (struct ref_iterator*,int *,int) ;
 int VAR_0 ;
 struct merge_ref_iterator* FUNC_1 (int,int) ;

struct ref_iterator *FUNC_2(
  int VAR_1,
  struct ref_iterator *VAR_2, struct ref_iterator *VAR_3,
  ref_iterator_select_fn *VAR_4, void *VAR_5)
{
 struct merge_ref_iterator *VAR_6 = FUNC_1(1, sizeof(*VAR_6));
 struct ref_iterator *VAR_7 = &VAR_6->base;
 FUNC_0(VAR_7, &VAR_0, VAR_1);
 VAR_6->iter0 = VAR_2;
 VAR_6->iter1 = VAR_3;
 VAR_6->select = VAR_4;
 VAR_6->cb_data = VAR_5;
 VAR_6->current = ((void*)0);
 return VAR_7;
}
