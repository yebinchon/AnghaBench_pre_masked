
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int rbroot; int iova_rbtree_lock; } ;
struct iova {int node; } ;


 int FUNC_0 (struct iova_domain*,struct iova*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iova*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct iova_domain *VAR_0, struct iova *VAR_1)
{
 FUNC_1(&VAR_0->iova_rbtree_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_1->node, &VAR_0->rbroot);
 FUNC_2(VAR_1);
}
