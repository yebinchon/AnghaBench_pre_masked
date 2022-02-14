
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__ VAR_15 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_16, void *VAR_17)
{
 if (!FUNC_0(VAR_1))
  return -VAR_2;




 FUNC_2(VAR_11, "n_vbus_en");
 FUNC_1(VAR_11, 1);


 FUNC_5(VAR_3, VAR_4);


 FUNC_2(VAR_10, "smc_reset");
 FUNC_1(VAR_10, 0);


 FUNC_2(VAR_9, "dsp_power");
 FUNC_1(VAR_9, 1);



 FUNC_6(VAR_5, VAR_0);


 FUNC_6(VAR_6, VAR_7);


 FUNC_7(VAR_8);


 FUNC_4(VAR_13 | VAR_14
   | VAR_12);


 VAR_15.dev.parent = &VAR_16->dev;
 FUNC_3(&VAR_15);

 return 0;
}
