
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp401_data {size_t kind; int ** groups; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {size_t driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,char const* const) ;
 struct device* FUNC_3 (struct device*,int ,struct tmp401_data*,int **) ;
 struct tmp401_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct tmp401_data*,struct i2c_client*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 static const char * const VAR_11[] = {
  "TMP401", "TMP411", "TMP431", "TMP432", "TMP435", "TMP461"
 };
 struct device *VAR_12 = &VAR_9->dev;
 struct device *VAR_13;
 struct tmp401_data *VAR_14;
 int VAR_15 = 0, VAR_16;

 VAR_14 = FUNC_4(VAR_12, sizeof(struct tmp401_data), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->client = VAR_9;
 FUNC_5(&VAR_14->update_lock);
 VAR_14->kind = VAR_10->driver_data;


 VAR_16 = FUNC_6(VAR_14, VAR_9);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_14->groups[VAR_15++] = &VAR_2;


 if (VAR_14->kind == VAR_3)
  VAR_14->groups[VAR_15++] = &VAR_4;


 if (VAR_14->kind == VAR_5)
  VAR_14->groups[VAR_15++] = &VAR_6;

 if (VAR_14->kind == VAR_7)
  VAR_14->groups[VAR_15++] = &VAR_8;

 VAR_13 = FUNC_3(VAR_12, VAR_9->name,
          VAR_14, VAR_14->groups);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_2(VAR_12, "Detected TI %s chip\n", VAR_11[VAR_14->kind]);

 return 0;
}
