
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_async {int list; struct regmap* map; } ;
struct regmap {int async_ret; int async_waitq; int async_lock; int async_list; int async_free; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct regmap_async *VAR_0, int VAR_1)
{
 struct regmap *VAR_2 = VAR_0->map;
 bool VAR_3;

 FUNC_4(VAR_2);

 FUNC_2(&VAR_2->async_lock);
 FUNC_1(&VAR_0->list, &VAR_2->async_free);
 VAR_3 = FUNC_0(&VAR_2->async_list);

 if (VAR_1 != 0)
  VAR_2->async_ret = VAR_1;

 FUNC_3(&VAR_2->async_lock);

 if (VAR_3)
  FUNC_5(&VAR_2->async_waitq);
}
