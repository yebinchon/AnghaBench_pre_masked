
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_dp_aux_msg {int* buffer; int size; int request; int reply; int address; } ;
struct analogix_dp_device {scalar_t__ reg_base; int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

 int VAR_23 ;
 int VAR_24 ;


 int VAR_25 ;
 int VAR_26 ;

 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct analogix_dp_device*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int (*) (scalar_t__),scalar_t__,int,int,int,int) ;
 int FUNC_10 (int,scalar_t__) ;

ssize_t FUNC_11(struct analogix_dp_device *VAR_32,
        struct drm_dp_aux_msg *VAR_33)
{
 u32 VAR_34;
 u32 VAR_35;
 u8 *VAR_36 = VAR_33->buffer;
 unsigned int VAR_37;
 int VAR_38 = 0;
 int VAR_39;


 if (FUNC_4(VAR_33->size > 16))
  return -VAR_27;


 VAR_34 = VAR_21;
 FUNC_10(VAR_34, VAR_32->reg_base + VAR_8);

 switch (VAR_33->request & ~VAR_22) {
 case 130:
  VAR_34 = VAR_20 | VAR_17;
  if (VAR_33->request & VAR_22)
   VAR_34 |= VAR_18;
  break;

 case 131:
  VAR_34 = VAR_19 | VAR_17;
  if (VAR_33->request & VAR_22)
   VAR_34 |= VAR_18;
  break;

 case 128:
  VAR_34 = VAR_20 | VAR_16;
  break;

 case 129:
  VAR_34 = VAR_19 | VAR_16;
  break;

 default:
  return -VAR_29;
 }

 VAR_34 |= FUNC_3(VAR_33->size);
 FUNC_10(VAR_34, VAR_32->reg_base + VAR_4);


 VAR_34 = FUNC_2(VAR_33->address);
 FUNC_10(VAR_34, VAR_32->reg_base + VAR_3);
 VAR_34 = FUNC_0(VAR_33->address);
 FUNC_10(VAR_34, VAR_32->reg_base + VAR_1);
 VAR_34 = FUNC_1(VAR_33->address);
 FUNC_10(VAR_34, VAR_32->reg_base + VAR_2);

 if (!(VAR_33->request & 131)) {
  for (VAR_37 = 0; VAR_37 < VAR_33->size; VAR_37++) {
   VAR_34 = VAR_36[VAR_37];
   FUNC_10(VAR_34, VAR_32->reg_base + VAR_9 +
          4 * VAR_37);
   VAR_38++;
  }
 }


 VAR_34 = VAR_11;


 if (VAR_33->size < 1)
  VAR_34 |= VAR_0;

 FUNC_10(VAR_34, VAR_32->reg_base + VAR_5);

 VAR_39 = FUNC_9(FUNC_8, VAR_32->reg_base + VAR_5,
     VAR_34, !(VAR_34 & VAR_11), 25, 500 * 1000);
 if (VAR_39) {
  FUNC_6(VAR_32->dev, "AUX CH enable timeout!\n");
  goto aux_error;
 }



 VAR_39 = FUNC_9(FUNC_8, VAR_32->reg_base + VAR_10,
     VAR_34, VAR_34 & VAR_31, 10, 20 * 1000);
 if (VAR_39) {
  FUNC_6(VAR_32->dev, "AUX CH cmd reply timeout!\n");
  goto aux_error;
 }


 FUNC_10(VAR_31, VAR_32->reg_base + VAR_10);


 VAR_34 = FUNC_8(VAR_32->reg_base + VAR_10);
 VAR_35 = FUNC_8(VAR_32->reg_base + VAR_6);
 if ((VAR_34 & VAR_12) || (VAR_35 & VAR_15)) {
  FUNC_10(VAR_12, VAR_32->reg_base + VAR_10);

  FUNC_7(VAR_32->dev, "AUX CH error happened: %#x (%d)\n",
    VAR_35 & VAR_15, !!(VAR_34 & VAR_12));
  goto aux_error;
 }

 if (VAR_33->request & 131) {
  for (VAR_37 = 0; VAR_37 < VAR_33->size; VAR_37++) {
   VAR_34 = FUNC_8(VAR_32->reg_base + VAR_9 +
        4 * VAR_37);
   VAR_36[VAR_37] = (unsigned char)VAR_34;
   VAR_38++;
  }
 }


 VAR_34 = FUNC_8(VAR_32->reg_base + VAR_7);
 if (VAR_34 == VAR_13)
  VAR_33->reply = VAR_26;
 else if (VAR_34 == VAR_14)
  VAR_33->reply = VAR_24;
 else if ((VAR_33->request & ~VAR_22) == 130 ||
   (VAR_33->request & ~VAR_22) == 131)
  VAR_33->reply = VAR_23;
 else if ((VAR_33->request & ~VAR_22) == 128 ||
   (VAR_33->request & ~VAR_22) == 129)
  VAR_33->reply = VAR_25;

 return VAR_38 > 0 ? VAR_38 : -VAR_28;

aux_error:

 FUNC_5(VAR_32);

 return -VAR_30;
}
