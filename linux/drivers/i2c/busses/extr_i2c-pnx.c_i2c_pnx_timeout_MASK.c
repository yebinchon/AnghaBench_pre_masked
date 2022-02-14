
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int complete; int ret; } ;
struct TYPE_5__ {int dev; } ;
struct i2c_pnx_algo_data {TYPE_1__ mif; TYPE_2__ adapter; } ;
struct TYPE_6__ {int timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (struct i2c_pnx_algo_data*) ;
 struct i2c_pnx_algo_data* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int) ;
 struct i2c_pnx_algo_data* FUNC_4 (int ,struct timer_list*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_7 (struct i2c_pnx_algo_data*) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_8)
{
 struct i2c_pnx_algo_data *VAR_9 = FUNC_4(VAR_9, VAR_8, VAR_7.timer);
 u32 VAR_10;

 FUNC_3(&VAR_9->adapter.dev,
  "Master timed out. stat = %04x, cntrl = %04x. Resetting master...\n",
  FUNC_5(FUNC_1(VAR_9)),
  FUNC_5(FUNC_0(VAR_9)));


 VAR_10 = FUNC_5(FUNC_0(VAR_9));
 VAR_10 &= ~(VAR_2 | VAR_4 | VAR_6 | VAR_3);
 FUNC_6(VAR_10, FUNC_0(VAR_9));

 VAR_10 |= VAR_5;
 FUNC_6(VAR_10, FUNC_0(VAR_9));
 FUNC_7(VAR_9);
 VAR_9->mif.ret = -VAR_0;
 FUNC_2(&VAR_9->mif.complete);
}
