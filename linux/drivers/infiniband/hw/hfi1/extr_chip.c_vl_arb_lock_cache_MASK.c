
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl_arb_cache {int lock; } ;
struct hfi1_pportdata {struct vl_arb_cache* vl_arb_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline struct vl_arb_cache *
FUNC_1(struct hfi1_pportdata *VAR_2, int VAR_3)
{
 if (VAR_3 != VAR_1 && VAR_3 != VAR_0)
  return ((void*)0);
 FUNC_0(&VAR_2->vl_arb_cache[VAR_3].lock);
 return &VAR_2->vl_arb_cache[VAR_3];
}
