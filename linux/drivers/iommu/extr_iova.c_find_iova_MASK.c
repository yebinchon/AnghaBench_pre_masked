
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int iova_rbtree_lock; } ;
struct iova {int dummy; } ;


 struct iova* FUNC_0 (struct iova_domain*,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct iova *FUNC_3(struct iova_domain *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct iova *VAR_3;


 FUNC_1(&VAR_0->iova_rbtree_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->iova_rbtree_lock, VAR_2);
 return VAR_3;
}
