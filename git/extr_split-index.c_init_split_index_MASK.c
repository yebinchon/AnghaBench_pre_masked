
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_index {int refcount; } ;
struct index_state {struct split_index* split_index; } ;


 struct split_index* FUNC_0 (int,int) ;

struct split_index *FUNC_1(struct index_state *VAR_0)
{
 if (!VAR_0->split_index) {
  VAR_0->split_index = FUNC_0(1, sizeof(*VAR_0->split_index));
  VAR_0->split_index->refcount = 1;
 }
 return VAR_0->split_index;
}
