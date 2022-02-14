
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {int* temp8; int temp_hyst; int* temp11; int flags; scalar_t__ kind; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 struct lm90_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct lm90_data*,int) ;
 scalar_t__ VAR_25 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_26)
{
 struct lm90_data *VAR_27 = FUNC_0(VAR_26);
 struct i2c_client *VAR_28 = VAR_27->client;
 int VAR_29;

 VAR_29 = FUNC_2(VAR_28, VAR_3);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_27->temp8[VAR_12] = VAR_29;

 VAR_29 = FUNC_2(VAR_28, VAR_4);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_27->temp8[VAR_20] = VAR_29;

 VAR_29 = FUNC_2(VAR_28, VAR_11);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_27->temp_hyst = VAR_29;

 VAR_29 = FUNC_2(VAR_28, VAR_7);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_27->temp11[VAR_23] = VAR_29 << 8;

 if (VAR_27->flags & VAR_2) {
  VAR_29 = FUNC_2(VAR_28, VAR_8);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp11[VAR_23] |= VAR_29;
 }

 VAR_29 = FUNC_2(VAR_28, VAR_5);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_27->temp11[VAR_22] = VAR_29 << 8;

 if (VAR_27->flags & VAR_2) {
  VAR_29 = FUNC_2(VAR_28, VAR_6);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp11[VAR_22] |= VAR_29;
 }

 if (VAR_27->flags & VAR_1) {
  VAR_29 = FUNC_1(VAR_28, VAR_9,
      VAR_10);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp11[VAR_24] = VAR_29;
 }

 if (VAR_27->flags & VAR_0) {
  VAR_29 = FUNC_2(VAR_28, VAR_14);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp8[VAR_13] = VAR_29;

  VAR_29 = FUNC_2(VAR_28, VAR_15);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp8[VAR_21] = VAR_29;
 }

 if (VAR_27->kind == VAR_25) {
  VAR_29 = FUNC_3(VAR_27, 1);
  if (VAR_29 < 0)
   return VAR_29;

  VAR_29 = FUNC_2(VAR_28, VAR_4);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp8[VAR_16] = VAR_29;

  VAR_29 = FUNC_2(VAR_28, VAR_15);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp8[VAR_17] = VAR_29;

  VAR_29 = FUNC_2(VAR_28, VAR_7);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp11[VAR_19] = VAR_29 << 8;

  VAR_29 = FUNC_2(VAR_28, VAR_5);
  if (VAR_29 < 0)
   return VAR_29;
  VAR_27->temp11[VAR_18] = VAR_29 << 8;

  FUNC_3(VAR_27, 0);
 }

 return 0;
}
