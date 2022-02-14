
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_i2c_bus_rec {int mask_clk_reg; int mask_clk_mask; int mask_data_reg; int mask_data_mask; int a_clk_reg; int a_clk_mask; int a_data_reg; int a_data_mask; int en_clk_reg; int en_clk_mask; int en_data_reg; int en_data_mask; } ;
struct radeon_i2c_chan {struct radeon_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct TYPE_4__ {int mutex; } ;
struct radeon_device {int dc_hw_i2c_mutex; TYPE_2__ pm; } ;
struct i2c_msg {int len; int addr; int flags; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 struct radeon_i2c_chan* FUNC_8 (struct i2c_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct i2c_adapter *VAR_29,
       struct i2c_msg *VAR_30, int VAR_31)
{
 struct radeon_i2c_chan *VAR_32 = FUNC_8(VAR_29);
 struct radeon_device *VAR_33 = VAR_32->dev->dev_private;
 struct radeon_i2c_bus_rec *VAR_34 = &VAR_32->rec;
 struct i2c_msg *VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41 = VAR_31;
 u32 VAR_42;
 u32 VAR_43, VAR_44;
 u32 VAR_45, VAR_46;

 FUNC_9(&VAR_33->dc_hw_i2c_mutex);

 FUNC_9(&VAR_33->pm.mutex);

 VAR_42 = FUNC_11(VAR_33);


 VAR_43 = FUNC_6(VAR_34->mask_clk_reg);
 VAR_43 &= ~VAR_34->mask_clk_mask;
 FUNC_7(VAR_34->mask_clk_reg, VAR_43);
 VAR_43 = FUNC_6(VAR_34->mask_clk_reg);

 VAR_43 = FUNC_6(VAR_34->mask_data_reg);
 VAR_43 &= ~VAR_34->mask_data_mask;
 FUNC_7(VAR_34->mask_data_reg, VAR_43);
 VAR_43 = FUNC_6(VAR_34->mask_data_reg);


 VAR_43 = FUNC_6(VAR_34->a_clk_reg);
 VAR_43 &= ~VAR_34->a_clk_mask;
 FUNC_7(VAR_34->a_clk_reg, VAR_43);
 VAR_43 = FUNC_6(VAR_34->a_clk_reg);

 VAR_43 = FUNC_6(VAR_34->a_data_reg);
 VAR_43 &= ~VAR_34->a_data_mask;
 FUNC_7(VAR_34->a_data_reg, VAR_43);
 VAR_43 = FUNC_6(VAR_34->a_data_reg);


 VAR_43 = FUNC_6(VAR_34->en_clk_reg);
 VAR_43 &= ~VAR_34->en_clk_mask;
 FUNC_7(VAR_34->en_clk_reg, VAR_43);
 VAR_43 = FUNC_6(VAR_34->en_clk_reg);

 VAR_43 = FUNC_6(VAR_34->en_data_reg);
 VAR_43 &= ~VAR_34->en_data_mask;
 FUNC_7(VAR_34->en_data_reg, VAR_43);
 VAR_43 = FUNC_6(VAR_34->en_data_reg);


 VAR_43 = FUNC_6(VAR_28);
 FUNC_7(VAR_28, VAR_43 | VAR_0);
 VAR_45 = FUNC_6(VAR_3);
 VAR_46 = FUNC_6(0x494);
 FUNC_7(0x494, VAR_46 | 0x1);

 FUNC_7(VAR_2, VAR_20);
 for (VAR_36 = 0; VAR_36 < 50; VAR_36++) {
  FUNC_12(1);
  if (FUNC_6(VAR_2) & VAR_18)
   break;
 }
 if (VAR_36 == 50) {
  FUNC_5("failed to get i2c bus\n");
  VAR_41 = -VAR_24;
  goto done;
 }

 VAR_44 = VAR_15 | VAR_17 | VAR_8;
 switch (VAR_34->mask_clk_reg) {
 case 130:
  VAR_44 |= FUNC_2(VAR_21);
  break;
 case 129:
  VAR_44 |= FUNC_2(VAR_22);
  break;
 case 128:
  VAR_44 |= FUNC_2(VAR_23);
  break;
 default:
  FUNC_5("gpio not supported with hw i2c\n");
  VAR_41 = -VAR_25;
  goto done;
 }


 VAR_35 = &VAR_30[0];
 if ((VAR_31 == 1) && (VAR_35->len == 0)) {
  FUNC_7(VAR_16, (VAR_7 |
           VAR_11 |
           VAR_10));
  FUNC_7(VAR_13, VAR_14);
  FUNC_12(1);
  FUNC_7(VAR_13, 0);

  FUNC_7(VAR_6, (VAR_35->addr << 1) & 0xff);
  FUNC_7(VAR_6, 0);

  FUNC_7(VAR_5, FUNC_3(48));
  FUNC_7(VAR_4, (FUNC_0(1) |
            FUNC_1(1) |
            (VAR_42 << 16)));
  FUNC_7(VAR_3, VAR_44);
  FUNC_7(VAR_16, VAR_9);
  for (VAR_37 = 0; VAR_37 < 200; VAR_37++) {
   FUNC_12(50);
   VAR_43 = FUNC_6(VAR_16);
   if (VAR_43 & VAR_9)
    continue;
   VAR_43 = FUNC_6(VAR_16);
   if (VAR_43 & VAR_7)
    break;
   else {
    FUNC_4("i2c write error 0x%08x\n", VAR_43);
    FUNC_7(VAR_13, VAR_1);
    VAR_41 = -VAR_26;
    goto done;
   }
  }
  goto done;
 }

 for (VAR_36 = 0; VAR_36 < VAR_31; VAR_36++) {
  VAR_35 = &VAR_30[VAR_36];
  VAR_38 = VAR_35->len;
  VAR_40 = 0;
  if (VAR_35->flags & VAR_27) {
   while (VAR_38) {
    if (VAR_38 > 15)
     VAR_39 = 15;
    else
     VAR_39 = VAR_38;
    FUNC_7(VAR_16, (VAR_7 |
             VAR_11 |
             VAR_10));
    FUNC_7(VAR_13, VAR_14);
    FUNC_12(1);
    FUNC_7(VAR_13, 0);

    FUNC_7(VAR_6, ((VAR_35->addr << 1) & 0xff) | 0x1);
    FUNC_7(VAR_5, FUNC_3(48));
    FUNC_7(VAR_4, (FUNC_0(1) |
              FUNC_1(VAR_39) |
              (VAR_42 << 16)));
    FUNC_7(VAR_3, VAR_44 | VAR_12);
    FUNC_7(VAR_16, VAR_9);
    for (VAR_37 = 0; VAR_37 < 200; VAR_37++) {
     FUNC_12(50);
     VAR_43 = FUNC_6(VAR_16);
     if (VAR_43 & VAR_9)
      continue;
     VAR_43 = FUNC_6(VAR_16);
     if (VAR_43 & VAR_7)
      break;
     else {
      FUNC_4("i2c read error 0x%08x\n", VAR_43);
      FUNC_7(VAR_13, VAR_1);
      VAR_41 = -VAR_26;
      goto done;
     }
    }
    for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++)
     VAR_35->buf[VAR_40 + VAR_37] = FUNC_6(VAR_6) & 0xff;
    VAR_38 -= VAR_39;
    VAR_40 += VAR_39;
   }
  } else {
   while (VAR_38) {
    if (VAR_38 > 15)
     VAR_39 = 15;
    else
     VAR_39 = VAR_38;
    FUNC_7(VAR_16, (VAR_7 |
             VAR_11 |
             VAR_10));
    FUNC_7(VAR_13, VAR_14);
    FUNC_12(1);
    FUNC_7(VAR_13, 0);

    FUNC_7(VAR_6, (VAR_35->addr << 1) & 0xff);
    for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++)
     FUNC_7(VAR_6, VAR_35->buf[VAR_40 + VAR_37]);

    FUNC_7(VAR_5, FUNC_3(48));
    FUNC_7(VAR_4, (FUNC_0(1) |
              FUNC_1(VAR_39) |
              (VAR_42 << 16)));
    FUNC_7(VAR_3, VAR_44);
    FUNC_7(VAR_16, VAR_9);
    for (VAR_37 = 0; VAR_37 < 200; VAR_37++) {
     FUNC_12(50);
     VAR_43 = FUNC_6(VAR_16);
     if (VAR_43 & VAR_9)
      continue;
     VAR_43 = FUNC_6(VAR_16);
     if (VAR_43 & VAR_7)
      break;
     else {
      FUNC_4("i2c write error 0x%08x\n", VAR_43);
      FUNC_7(VAR_13, VAR_1);
      VAR_41 = -VAR_26;
      goto done;
     }
    }
    VAR_38 -= VAR_39;
    VAR_40 += VAR_39;
   }
  }
 }

done:
 FUNC_7(VAR_16, (VAR_7 |
          VAR_11 |
          VAR_10));
 FUNC_7(VAR_13, VAR_14);
 FUNC_12(1);
 FUNC_7(VAR_13, 0);

 FUNC_7(VAR_2, VAR_19);
 FUNC_7(VAR_3, VAR_45);
 FUNC_7(0x494, VAR_46);
 VAR_43 = FUNC_6(VAR_28);
 VAR_43 &= ~VAR_0;
 FUNC_7(VAR_28, VAR_43);

 FUNC_10(&VAR_33->pm.mutex);
 FUNC_10(&VAR_33->dc_hw_i2c_mutex);

 return VAR_41;
}
