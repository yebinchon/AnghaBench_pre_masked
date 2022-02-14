
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int async_ret; int async_lock; int async_waitq; TYPE_1__* bus; } ;
struct TYPE_2__ {int async_write; } ;


 int FUNC_0 (struct regmap*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct regmap *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;


 if (!VAR_0->bus || !VAR_0->bus->async_write)
  return 0;

 FUNC_4(VAR_0);

 FUNC_5(VAR_0->async_waitq, FUNC_0(VAR_0));

 FUNC_1(&VAR_0->async_lock, VAR_1);
 VAR_2 = VAR_0->async_ret;
 VAR_0->async_ret = 0;
 FUNC_2(&VAR_0->async_lock, VAR_1);

 FUNC_3(VAR_0);

 return VAR_2;
}
