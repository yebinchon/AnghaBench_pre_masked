
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm87_data {int* in_scale; int channel; int ** attr_groups; int vrm; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int *,int ,struct i2c_client*,int **) ;
 struct lm87_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct lm87_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_13, const struct i2c_device_id *VAR_14)
{
 struct lm87_data *VAR_15;
 struct device *VAR_16;
 int VAR_17;
 unsigned int VAR_18 = 0;

 VAR_15 = FUNC_3(&VAR_13->dev, sizeof(struct lm87_data), VAR_4);
 if (!VAR_15)
  return -VAR_3;

 FUNC_4(VAR_13, VAR_15);
 FUNC_6(&VAR_15->update_lock);


 VAR_17 = FUNC_5(VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_15->in_scale[0] = 2500;
 VAR_15->in_scale[1] = 2700;
 VAR_15->in_scale[2] = (VAR_15->channel & VAR_2) ? 5000 : 3300;
 VAR_15->in_scale[3] = 5000;
 VAR_15->in_scale[4] = 12000;
 VAR_15->in_scale[5] = 2700;
 VAR_15->in_scale[6] = 1875;
 VAR_15->in_scale[7] = 1875;





 VAR_15->attr_groups[VAR_18++] = &VAR_5;
 if (VAR_15->channel & FUNC_0(0))
  VAR_15->attr_groups[VAR_18++] = &VAR_9;
 else
  VAR_15->attr_groups[VAR_18++] = &VAR_6;

 if (VAR_15->channel & FUNC_0(1))
  VAR_15->attr_groups[VAR_18++] = &VAR_10;
 else
  VAR_15->attr_groups[VAR_18++] = &VAR_7;

 if (VAR_15->channel & VAR_1)
  VAR_15->attr_groups[VAR_18++] = &VAR_11;
 else
  VAR_15->attr_groups[VAR_18++] = &VAR_8;

 if (!(VAR_15->channel & VAR_0)) {
  VAR_15->vrm = FUNC_7();
  VAR_15->attr_groups[VAR_18++] = &VAR_12;
 }

 VAR_16 = FUNC_2(
     &VAR_13->dev, VAR_13->name, VAR_13, VAR_15->attr_groups);
 return FUNC_1(VAR_16);
}
