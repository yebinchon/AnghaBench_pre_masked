
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct i2c_client {int dev; } ;
struct elan_tp_data {unsigned int max_x; unsigned int max_y; unsigned int width_x; unsigned int width_y; unsigned int x_res; unsigned int y_res; int clickpad; int middle_button; struct i2c_client* client; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_max ) (struct i2c_client*,unsigned int*,unsigned int*) ;int (* get_num_traces ) (struct i2c_client*,unsigned int*,unsigned int*) ;int (* get_resolution ) (struct i2c_client*,int *,int *) ;} ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*,unsigned int*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct i2c_client*,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct i2c_client*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct elan_tp_data *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 unsigned int VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 u8 VAR_6, VAR_7;
 int VAR_8;

 if (FUNC_1(&VAR_1->dev,
         "touchscreen-size-x", &VAR_0->max_x) ||
     FUNC_1(&VAR_1->dev,
         "touchscreen-size-y", &VAR_0->max_y)) {
  VAR_8 = VAR_0->ops->get_max(VAR_0->client,
        &VAR_0->max_x,
        &VAR_0->max_y);
  if (VAR_8)
   return VAR_8;
 } else {

  --VAR_0->max_x;
  --VAR_0->max_y;
 }

 if (FUNC_1(&VAR_1->dev,
         "elan,x_traces",
         &VAR_2) ||
     FUNC_1(&VAR_1->dev,
         "elan,y_traces",
         &VAR_3)) {
  VAR_8 = VAR_0->ops->get_num_traces(VAR_0->client,
        &VAR_2, &VAR_3);
  if (VAR_8)
   return VAR_8;
 }
 VAR_0->width_x = VAR_0->max_x / VAR_2;
 VAR_0->width_y = VAR_0->max_y / VAR_3;

 if (FUNC_1(&VAR_1->dev,
         "touchscreen-x-mm", &VAR_4) ||
     FUNC_1(&VAR_1->dev,
         "touchscreen-y-mm", &VAR_5)) {
  VAR_8 = VAR_0->ops->get_resolution(VAR_0->client,
        &VAR_6, &VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_0->x_res = FUNC_2(VAR_6);
  VAR_0->y_res = FUNC_2(VAR_7);
 } else {
  VAR_0->x_res = (VAR_0->max_x + 1) / VAR_4;
  VAR_0->y_res = (VAR_0->max_y + 1) / VAR_5;
 }

 if (FUNC_0(&VAR_1->dev, "elan,clickpad"))
  VAR_0->clickpad = 1;

 if (FUNC_0(&VAR_1->dev, "elan,middle-button"))
  VAR_0->middle_button = 1;

 return 0;
}
