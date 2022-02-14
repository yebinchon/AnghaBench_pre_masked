
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {unsigned long expires; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct timer_list timer; } ;
struct i2c_pnx_algo_data {TYPE_2__ adapter; int timeout; TYPE_1__ mif; } ;


 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (int *,char*,unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct i2c_pnx_algo_data *VAR_1)
{
 struct timer_list *VAR_2 = &VAR_1->mif.timer;
 unsigned long VAR_3 = FUNC_3(VAR_1->timeout);

 if (VAR_3 <= 1)
  VAR_3 = 2;

 FUNC_1(VAR_2);

 FUNC_2(&VAR_1->adapter.dev, "Timer armed at %lu plus %lu jiffies.\n",
  VAR_0, VAR_3);

 VAR_2->expires = VAR_0 + VAR_3;

 FUNC_0(VAR_2);
}
