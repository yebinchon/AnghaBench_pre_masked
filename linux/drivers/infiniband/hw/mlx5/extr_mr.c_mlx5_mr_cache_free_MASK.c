
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_mr_cache {int wq; struct mlx5_cache_ent* ent; } ;
struct mlx5_ib_mr {int allocated_from_cache; int list; int order; } ;
struct mlx5_ib_dev {struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {int cur; int limit; int work; int lock; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;

void FUNC_8(struct mlx5_ib_dev *VAR_1, struct mlx5_ib_mr *VAR_2)
{
 struct mlx5_mr_cache *VAR_3 = &VAR_1->cache;
 struct mlx5_cache_ent *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_2->allocated_from_cache)
  return;

 VAR_6 = FUNC_3(VAR_1, VAR_2->order);
 FUNC_0(VAR_6 < 0 || VAR_6 >= VAR_0);

 if (FUNC_7(VAR_1, VAR_2)) {
  VAR_2->allocated_from_cache = 0;
  FUNC_1(VAR_1, VAR_2);
  VAR_4 = &VAR_3->ent[VAR_6];
  if (VAR_4->cur < VAR_4->limit)
   FUNC_4(VAR_3->wq, &VAR_4->work);
  return;
 }

 VAR_4 = &VAR_3->ent[VAR_6];
 FUNC_5(&VAR_4->lock);
 FUNC_2(&VAR_2->list, &VAR_4->head);
 VAR_4->cur++;
 if (VAR_4->cur > 2 * VAR_4->limit)
  VAR_5 = 1;
 FUNC_6(&VAR_4->lock);

 if (VAR_5)
  FUNC_4(VAR_3->wq, &VAR_4->work);
}
