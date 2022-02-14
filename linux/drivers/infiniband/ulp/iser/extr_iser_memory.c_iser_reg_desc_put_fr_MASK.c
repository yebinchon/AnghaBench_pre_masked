
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_fr_pool {int lock; int list; } ;
struct iser_fr_desc {int list; } ;
struct ib_conn {struct iser_fr_pool fr_pool; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct ib_conn *VAR_0,
       struct iser_fr_desc *VAR_1)
{
 struct iser_fr_pool *VAR_2 = &VAR_0->fr_pool;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(&VAR_1->list, &VAR_2->list);
 FUNC_2(&VAR_2->lock, VAR_3);
}
