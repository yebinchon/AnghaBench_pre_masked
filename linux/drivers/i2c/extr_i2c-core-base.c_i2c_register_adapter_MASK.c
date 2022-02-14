
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int parent; int * type; int * bus; } ;
struct i2c_adapter {scalar_t__ timeout; scalar_t__ nr; int dev_released; TYPE_1__ dev; int * name; int userspace_clients; int userspace_clients_lock; int mux_lock; int bus_lock; scalar_t__ locked_flags; int * lock_ops; int algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,struct i2c_adapter*,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,char*,int *) ;
 int FUNC_6 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct i2c_adapter*) ;
 int FUNC_11 (struct i2c_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct i2c_adapter*) ;
 int FUNC_13 (struct i2c_adapter*) ;
 int FUNC_14 (struct i2c_adapter*) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int *) ;
 int VAR_11 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct i2c_adapter*) ;
 int FUNC_21 (struct i2c_adapter*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*,int) ;
 int FUNC_25 (char*,int *,...) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct i2c_adapter *VAR_12)
{
 int VAR_13 = -VAR_1;


 if (FUNC_2(!VAR_11)) {
  VAR_13 = -VAR_0;
  goto out_list;
 }


 if (FUNC_1(!VAR_12->name[0], "i2c adapter has no name"))
  goto out_list;

 if (!VAR_12->algo) {
  FUNC_25("adapter '%s': no algo supplied!\n", VAR_12->name);
  goto out_list;
 }

 if (!VAR_12->lock_ops)
  VAR_12->lock_ops = &VAR_8;

 VAR_12->locked_flags = 0;
 FUNC_26(&VAR_12->bus_lock);
 FUNC_26(&VAR_12->mux_lock);
 FUNC_17(&VAR_12->userspace_clients_lock);
 FUNC_0(&VAR_12->userspace_clients);


 if (VAR_12->timeout == 0)
  VAR_12->timeout = VAR_2;


 VAR_13 = FUNC_14(VAR_12);
 if (VAR_13) {
  FUNC_25("adapter '%s': can't create Host Notify IRQs (%d)\n",
         VAR_12->name, VAR_13);
  goto out_list;
 }

 FUNC_6(&VAR_12->dev, "i2c-%d", VAR_12->nr);
 VAR_12->dev.bus = &VAR_10;
 VAR_12->dev.type = &VAR_9;
 VAR_13 = FUNC_8(&VAR_12->dev);
 if (VAR_13) {
  FUNC_25("adapter '%s': can't register device (%d)\n", VAR_12->name, VAR_13);
  goto out_list;
 }

 VAR_13 = FUNC_21(VAR_12);
 if (VAR_13)
  goto out_reg;

 FUNC_5(&VAR_12->dev, "adapter [%s] registered\n", VAR_12->name);

 FUNC_23(&VAR_12->dev);
 FUNC_24(&VAR_12->dev, 1);
 FUNC_22(&VAR_12->dev);
 FUNC_12(VAR_12);


 FUNC_20(VAR_12);
 FUNC_11(VAR_12);
 FUNC_10(VAR_12);

 if (VAR_12->nr < VAR_3)
  FUNC_13(VAR_12);


 FUNC_18(&VAR_5);
 FUNC_3(&VAR_10, ((void*)0), VAR_12, VAR_4);
 FUNC_19(&VAR_5);

 return 0;

out_reg:
 FUNC_16(&VAR_12->dev_released);
 FUNC_9(&VAR_12->dev);
 FUNC_27(&VAR_12->dev_released);
out_list:
 FUNC_18(&VAR_5);
 FUNC_15(&VAR_7, VAR_12->nr);
 FUNC_19(&VAR_5);
 return VAR_13;
}
