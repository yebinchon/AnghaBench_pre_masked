
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cq {size_t cidx; int * queue; scalar_t__ sw_in_use; } ;


 scalar_t__ FUNC_0 (struct t4_cq*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct t4_cq *VAR_0)
{
 return VAR_0->sw_in_use || FUNC_0(VAR_0, &VAR_0->queue[VAR_0->cidx]);
}
