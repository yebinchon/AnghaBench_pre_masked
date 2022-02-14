
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max16065_data {int num_adc; int have_current; int curr_gain; int ** groups; int * range; int ** limit; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {size_t driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct device*) ;
 struct device* FUNC_5 (struct device*,int ,struct max16065_data*,int **) ;
 struct max16065_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct i2c_adapter*,int) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_20,
     const struct i2c_device_id *VAR_21)
{
 struct i2c_adapter *VAR_22 = VAR_20->adapter;
 struct max16065_data *VAR_23;
 struct device *VAR_24 = &VAR_20->dev;
 struct device *VAR_25;
 int VAR_26, VAR_27, VAR_28;
 bool VAR_29;
 bool VAR_30 = 0;
 int VAR_31 = 0;

 if (!FUNC_7(VAR_22, VAR_3
         | VAR_4))
  return -VAR_0;

 VAR_23 = FUNC_6(VAR_24, sizeof(*VAR_23), VAR_2);
 if (FUNC_10(!VAR_23))
  return -VAR_1;

 VAR_23->client = VAR_20;
 FUNC_9(&VAR_23->update_lock);

 VAR_23->num_adc = VAR_19[VAR_21->driver_data];
 VAR_23->have_current = VAR_15[VAR_21->driver_data];
 VAR_29 = VAR_16[VAR_21->driver_data];

 if (VAR_29) {
  VAR_28 = FUNC_8(VAR_20, VAR_9);
  if (FUNC_10(VAR_28 < 0))
   return VAR_28;
  VAR_30 = VAR_28 & VAR_10;
 }


 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_23->num_adc, 4); VAR_26++) {
  VAR_28 = FUNC_8(VAR_20, FUNC_3(VAR_26));
  if (FUNC_10(VAR_28 < 0))
   return VAR_28;
  for (VAR_27 = 0; VAR_27 < 4 && VAR_26 * 4 + VAR_27 < VAR_23->num_adc; VAR_27++) {
   VAR_23->range[VAR_26 * 4 + VAR_27] =
     VAR_11[(VAR_28 >> (VAR_27 * 2)) & 0x3];
  }
 }


 for (VAR_26 = 0; VAR_26 < VAR_8; VAR_26++) {
  if (VAR_26 == 0 && !VAR_29)
   continue;

  for (VAR_27 = 0; VAR_27 < VAR_23->num_adc; VAR_27++) {
   VAR_28 = FUNC_8(VAR_20,
             FUNC_2(VAR_26, VAR_27));
   if (FUNC_10(VAR_28 < 0))
    return VAR_28;
   VAR_23->limit[VAR_26][VAR_27] = FUNC_1(VAR_28, VAR_23->range[VAR_27]);
  }
 }


 VAR_23->groups[VAR_31++] = &VAR_12;
 if (VAR_29)
  VAR_23->groups[VAR_31++] = VAR_30 ?
   &VAR_17 : &VAR_18;

 if (VAR_23->have_current) {
  VAR_28 = FUNC_8(VAR_20, VAR_5);
  if (FUNC_10(VAR_28 < 0))
   return VAR_28;
  if (VAR_28 & VAR_6) {




   VAR_23->curr_gain = 6 << ((VAR_28 >> 2) & 0x03);
   VAR_23->range[VAR_7]
     = VAR_13[(VAR_28 >> 1) & 0x01];
   VAR_23->groups[VAR_31++] = &VAR_14;
  } else {
   VAR_23->have_current = 0;
  }
 }

 VAR_25 = FUNC_5(VAR_24, VAR_20->name,
          VAR_23, VAR_23->groups);
 return FUNC_4(VAR_25);
}
