
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_magazine {int size; int * pfns; } ;
struct iova_domain {int iova_rbtree_lock; } ;
struct iova {int dummy; } ;


 int FUNC_0 (int) ;
 struct iova* FUNC_1 (struct iova_domain*,int ) ;
 int FUNC_2 (struct iova_domain*,struct iova*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct iova_magazine *VAR_0, struct iova_domain *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_0)
  return;

 FUNC_3(&VAR_1->iova_rbtree_lock, VAR_2);

 for (VAR_3 = 0 ; VAR_3 < VAR_0->size; ++VAR_3) {
  struct iova *VAR_4 = FUNC_1(VAR_1, VAR_0->pfns[VAR_3]);

  FUNC_0(!VAR_4);
  FUNC_2(VAR_1, VAR_4);
 }

 FUNC_4(&VAR_1->iova_rbtree_lock, VAR_2);

 VAR_0->size = 0;
}
