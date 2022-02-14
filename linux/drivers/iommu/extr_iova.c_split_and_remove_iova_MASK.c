
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int iova_rbtree_lock; int rbroot; } ;
struct iova {unsigned long pfn_lo; unsigned long pfn_hi; int node; } ;


 int FUNC_0 (struct iova_domain*,struct iova*) ;
 struct iova* FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct iova*) ;
 int FUNC_3 (int *,struct iova*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

struct iova *
FUNC_7(struct iova_domain *VAR_0, struct iova *VAR_1,
        unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct iova *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 FUNC_5(&VAR_0->iova_rbtree_lock, VAR_4);
 if (VAR_1->pfn_lo < VAR_2) {
  VAR_5 = FUNC_1(VAR_1->pfn_lo, VAR_2 - 1);
  if (VAR_5 == ((void*)0))
   goto error;
 }
 if (VAR_1->pfn_hi > VAR_3) {
  VAR_6 = FUNC_1(VAR_3 + 1, VAR_1->pfn_hi);
  if (VAR_6 == ((void*)0))
   goto error;
 }

 FUNC_0(VAR_0, VAR_1);
 FUNC_4(&VAR_1->node, &VAR_0->rbroot);

 if (VAR_5) {
  FUNC_3(&VAR_0->rbroot, VAR_5, ((void*)0));
  VAR_1->pfn_lo = VAR_2;
 }
 if (VAR_6) {
  FUNC_3(&VAR_0->rbroot, VAR_6, ((void*)0));
  VAR_1->pfn_hi = VAR_3;
 }
 FUNC_6(&VAR_0->iova_rbtree_lock, VAR_4);

 return VAR_1;

error:
 FUNC_6(&VAR_0->iova_rbtree_lock, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_5);
 return ((void*)0);
}
