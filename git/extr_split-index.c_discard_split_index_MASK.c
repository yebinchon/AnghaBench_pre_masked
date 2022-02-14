
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_index {struct split_index* base; scalar_t__ refcount; } ;
struct index_state {struct split_index* split_index; } ;


 int FUNC_0 (struct split_index*) ;
 int FUNC_1 (struct split_index*) ;

void FUNC_2(struct index_state *VAR_0)
{
 struct split_index *VAR_1 = VAR_0->split_index;
 if (!VAR_1)
  return;
 VAR_0->split_index = ((void*)0);
 VAR_1->refcount--;
 if (VAR_1->refcount)
  return;
 if (VAR_1->base) {
  FUNC_0(VAR_1->base);
  FUNC_1(VAR_1->base);
 }
 FUNC_1(VAR_1);
}
