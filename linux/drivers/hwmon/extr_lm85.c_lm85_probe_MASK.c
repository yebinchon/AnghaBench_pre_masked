
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm85_data {int type; int has_vid5; int ** groups; int vrm; void* freq_map_size; void* freq_map; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct device dev; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;

 void* VAR_3 ;


 struct device* FUNC_2 (struct device*,int ,struct lm85_data*,int **) ;
 struct lm85_data* FUNC_3 (struct device*,int,int ) ;




 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;

 void* VAR_10 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_11, const struct i2c_device_id *VAR_12)
{
 struct device *VAR_13 = &VAR_11->dev;
 struct device *VAR_14;
 struct lm85_data *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_3(VAR_13, sizeof(struct lm85_data), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->client = VAR_11;
 if (VAR_11->dev.of_node)
  VAR_15->type = (enum chips)FUNC_7(&VAR_11->dev);
 else
  VAR_15->type = VAR_12->driver_data;
 FUNC_6(&VAR_15->update_lock);


 switch (VAR_15->type) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_15->freq_map = VAR_3;
  VAR_15->freq_map_size = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_15->freq_map = VAR_10;
  VAR_15->freq_map_size = FUNC_0(VAR_10);
  break;
 default:
  VAR_15->freq_map = VAR_4;
  VAR_15->freq_map_size = FUNC_0(VAR_4);
 }


 VAR_15->vrm = FUNC_8();


 FUNC_4(VAR_11);


 VAR_15->groups[VAR_16++] = &VAR_5;


 if (VAR_15->type != 129) {
  VAR_15->groups[VAR_16++] = &VAR_8;
  VAR_15->groups[VAR_16++] = &VAR_9;
 }





 if (VAR_15->type == 134 || VAR_15->type == 133) {
  u8 VAR_17 = FUNC_5(VAR_11, VAR_2);
  if (VAR_17 & 0x80)
   VAR_15->has_vid5 = 1;
 }

 if (!VAR_15->has_vid5)
  VAR_15->groups[VAR_16++] = &VAR_6;


 if (VAR_15->type == 132)
  VAR_15->groups[VAR_16++] = &VAR_7;

 VAR_14 = FUNC_2(VAR_13, VAR_11->name,
          VAR_15, VAR_15->groups);
 return FUNC_1(VAR_14);
}
