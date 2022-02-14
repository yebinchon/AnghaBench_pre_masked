
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct adp5588_kpad_platform_data {int unlock_key1; int unlock_key2; int gpimapsize; TYPE_1__* gpimap; scalar_t__ en_keylock; int cols; int rows; struct adp5588_gpio_platform_data* gpio_data; } ;
struct adp5588_gpio_platform_data {int pullup_dis_mask; } ;
struct TYPE_2__ {unsigned short pin; } ;


 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_1 (int ) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,scalar_t__,int) ;
 int FUNC_4 (int *,char*) ;
 struct adp5588_kpad_platform_data* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_28)
{
 const struct adp5588_kpad_platform_data *VAR_29 =
   FUNC_5(&VAR_28->dev);
 const struct adp5588_gpio_platform_data *VAR_30 = VAR_29->gpio_data;
 int VAR_31, VAR_32;
 unsigned char VAR_33 = 0, VAR_34 = 0, VAR_35 = 0;

 VAR_32 = FUNC_3(VAR_28, VAR_22, FUNC_1(VAR_29->rows));
 VAR_32 |= FUNC_3(VAR_28, VAR_23, FUNC_1(VAR_29->cols) & 0xFF);
 VAR_32 |= FUNC_3(VAR_28, VAR_24, FUNC_1(VAR_29->cols) >> 8);

 if (VAR_29->en_keylock) {
  VAR_32 |= FUNC_3(VAR_28, VAR_26, VAR_29->unlock_key1);
  VAR_32 |= FUNC_3(VAR_28, VAR_27, VAR_29->unlock_key2);
  VAR_32 |= FUNC_3(VAR_28, VAR_21, VAR_6);
 }

 for (VAR_31 = 0; VAR_31 < VAR_20; VAR_31++)
  VAR_32 |= FUNC_2(VAR_28, VAR_25);

 for (VAR_31 = 0; VAR_31 < VAR_29->gpimapsize; VAR_31++) {
  unsigned short VAR_36 = VAR_29->gpimap[VAR_31].pin;

  if (VAR_36 <= VAR_18) {
   VAR_33 |= (1 << (VAR_36 - VAR_17));
  } else {
   VAR_34 |= ((1 << (VAR_36 - VAR_16)) & 0xFF);
   VAR_35 |= ((1 << (VAR_36 - VAR_16)) >> 8);
  }
 }

 if (VAR_29->gpimapsize) {
  VAR_32 |= FUNC_3(VAR_28, VAR_13, VAR_33);
  VAR_32 |= FUNC_3(VAR_28, VAR_14, VAR_34);
  VAR_32 |= FUNC_3(VAR_28, VAR_15, VAR_35);
 }

 if (VAR_30) {
  for (VAR_31 = 0; VAR_31 <= FUNC_0(VAR_8); VAR_31++) {
   int VAR_37 = VAR_30->pullup_dis_mask;

   VAR_32 |= FUNC_3(VAR_28, VAR_12 + VAR_31,
    (VAR_37 >> (8 * VAR_31)) & 0xFF);
  }
 }

 VAR_32 |= FUNC_3(VAR_28, VAR_19,
    VAR_1 | VAR_0 |
    VAR_10 | VAR_7 |
    VAR_2 | VAR_5);

 VAR_32 |= FUNC_3(VAR_28, VAR_11, VAR_3 |
       VAR_9 |
       VAR_4);

 if (VAR_32 < 0) {
  FUNC_4(&VAR_28->dev, "Write Error\n");
  return VAR_32;
 }

 return 0;
}
