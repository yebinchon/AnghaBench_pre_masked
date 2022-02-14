
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_i2c_bus_rec {int mask_clk_reg; scalar_t__ mm_i2c; } ;
struct radeon_i2c_chan {struct radeon_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct TYPE_4__ {int mutex; } ;
struct radeon_device {int family; int dc_hw_i2c_mutex; TYPE_2__ pm; scalar_t__ is_atom_bios; } ;
struct i2c_msg {int len; int addr; int flags; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 struct radeon_i2c_chan* FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_29,
       struct i2c_msg *VAR_30, int VAR_31)
{
 struct radeon_i2c_chan *VAR_32 = FUNC_5(VAR_29);
 struct radeon_device *VAR_33 = VAR_32->dev->dev_private;
 struct radeon_i2c_bus_rec *VAR_34 = &VAR_32->rec;
 struct i2c_msg *VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39 = VAR_31;
 u32 VAR_40;
 u32 VAR_41, VAR_42, VAR_43;
 u32 VAR_44, VAR_45;

 FUNC_6(&VAR_33->dc_hw_i2c_mutex);

 FUNC_6(&VAR_33->pm.mutex);

 VAR_40 = FUNC_8(VAR_33);

 VAR_45 = ((VAR_40 << VAR_23) |
        VAR_18 |
        VAR_26 |
        VAR_27 |
        VAR_20);

 if (VAR_33->is_atom_bios) {
  VAR_44 = FUNC_3(VAR_7);
  FUNC_4(VAR_7, VAR_44 | VAR_0);
 }

 if (VAR_34->mm_i2c) {
  VAR_41 = VAR_13;
  VAR_42 = VAR_14;
  VAR_43 = VAR_15;
 } else {
  VAR_41 = VAR_8;
  VAR_42 = VAR_9;
  VAR_43 = VAR_10;

  switch (VAR_33->family) {
  case 149:
  case 138:
  case 143:
  case 137:
  case 142:
  case 141:
   switch (VAR_34->mask_clk_reg) {
   case 130:

    break;
   default:
    FUNC_1("gpio not supported with hw i2c\n");
    VAR_39 = -VAR_1;
    goto done;
   }
   break;
  case 148:

   switch (VAR_34->mask_clk_reg) {
   case 130:
    VAR_45 |= FUNC_2(VAR_4);
    break;
   case 129:
    VAR_45 |= FUNC_2(VAR_6);
    break;
   default:
    FUNC_1("gpio not supported with hw i2c\n");
    VAR_39 = -VAR_1;
    goto done;
   }
   break;
  case 136:
  case 135:

   switch (VAR_34->mask_clk_reg) {
   case 130:
    VAR_45 |= FUNC_2(VAR_4);
    break;
   case 128:
    VAR_45 |= FUNC_2(VAR_5);
    break;
   case 131:
    VAR_45 |= FUNC_2(VAR_6);
    break;
   default:
    FUNC_1("gpio not supported with hw i2c\n");
    VAR_39 = -VAR_1;
    goto done;
   }
   break;
  case 147:
  case 146:

   switch (VAR_34->mask_clk_reg) {
   case 128:
    VAR_45 |= FUNC_2(VAR_4);
    break;
   case 130:
    VAR_45 |= FUNC_2(VAR_6);
    break;
   default:
    FUNC_1("gpio not supported with hw i2c\n");
    VAR_39 = -VAR_1;
    goto done;
   }
   break;
  case 134:
  case 133:
  case 145:
  case 144:
  case 132:
  case 140:
  case 139:

   switch (VAR_34->mask_clk_reg) {
   case 128:
    VAR_45 |= FUNC_2(VAR_4);
    break;
   case 130:
    VAR_45 |= FUNC_2(VAR_5);
    break;
   case 129:
    VAR_45 |= FUNC_2(VAR_6);
    break;
   default:
    FUNC_1("gpio not supported with hw i2c\n");
    VAR_39 = -VAR_1;
    goto done;
   }
   break;
  default:
   FUNC_1("unsupported asic\n");
   VAR_39 = -VAR_1;
   goto done;
   break;
  }
 }


 VAR_35 = &VAR_30[0];
 if ((VAR_31 == 1) && (VAR_35->len == 0)) {
  FUNC_4(VAR_41, (VAR_17 |
        VAR_22 |
        VAR_21 |
        VAR_25));
  FUNC_4(VAR_43, (VAR_35->addr << 1) & 0xff);
  FUNC_4(VAR_43, 0);
  FUNC_4(VAR_42, ((1 << VAR_16) |
        (1 << VAR_12) |
        VAR_19 |
        (48 << VAR_28)));
  FUNC_4(VAR_41, VAR_45);
  for (VAR_38 = 0; VAR_38 < 32; VAR_38++) {
   FUNC_9(10);
   VAR_44 = FUNC_3(VAR_41);
   if (VAR_44 & VAR_20)
    continue;
   VAR_44 = FUNC_3(VAR_41);
   if (VAR_44 & VAR_17)
    break;
   else {
    FUNC_0("i2c write error 0x%08x\n", VAR_44);
    FUNC_4(VAR_41, VAR_44 | VAR_11);
    VAR_39 = -VAR_2;
    goto done;
   }
  }
  goto done;
 }

 for (VAR_36 = 0; VAR_36 < VAR_31; VAR_36++) {
  VAR_35 = &VAR_30[VAR_36];
  for (VAR_37 = 0; VAR_37 < VAR_35->len; VAR_37++) {
   if (VAR_35->flags & VAR_3) {
    FUNC_4(VAR_41, (VAR_17 |
          VAR_22 |
          VAR_21 |
          VAR_25));
    FUNC_4(VAR_43, ((VAR_35->addr << 1) & 0xff) | 0x1);
    FUNC_4(VAR_42, ((1 << VAR_16) |
          (1 << VAR_12) |
          VAR_19 |
          (48 << VAR_28)));
    FUNC_4(VAR_41, VAR_45 | VAR_24);
    for (VAR_38 = 0; VAR_38 < 32; VAR_38++) {
     FUNC_9(10);
     VAR_44 = FUNC_3(VAR_41);
     if (VAR_44 & VAR_20)
      continue;
     VAR_44 = FUNC_3(VAR_41);
     if (VAR_44 & VAR_17)
      break;
     else {
      FUNC_0("i2c read error 0x%08x\n", VAR_44);
      FUNC_4(VAR_41, VAR_44 | VAR_11);
      VAR_39 = -VAR_2;
      goto done;
     }
    }
    VAR_35->buf[VAR_37] = FUNC_3(VAR_43) & 0xff;
   } else {
    FUNC_4(VAR_41, (VAR_17 |
          VAR_22 |
          VAR_21 |
          VAR_25));
    FUNC_4(VAR_43, (VAR_35->addr << 1) & 0xff);
    FUNC_4(VAR_43, VAR_35->buf[VAR_37]);
    FUNC_4(VAR_42, ((1 << VAR_16) |
          (1 << VAR_12) |
          VAR_19 |
          (48 << VAR_28)));
    FUNC_4(VAR_41, VAR_45);
    for (VAR_38 = 0; VAR_38 < 32; VAR_38++) {
     FUNC_9(10);
     VAR_44 = FUNC_3(VAR_41);
     if (VAR_44 & VAR_20)
      continue;
     VAR_44 = FUNC_3(VAR_41);
     if (VAR_44 & VAR_17)
      break;
     else {
      FUNC_0("i2c write error 0x%08x\n", VAR_44);
      FUNC_4(VAR_41, VAR_44 | VAR_11);
      VAR_39 = -VAR_2;
      goto done;
     }
    }
   }
  }
 }

done:
 FUNC_4(VAR_41, 0);
 FUNC_4(VAR_42, 0);
 FUNC_4(VAR_41, (VAR_17 |
       VAR_22 |
       VAR_21 |
       VAR_25));

 if (VAR_33->is_atom_bios) {
  VAR_44 = FUNC_3(VAR_7);
  VAR_44 &= ~VAR_0;
  FUNC_4(VAR_7, VAR_44);
 }

 FUNC_7(&VAR_33->pm.mutex);
 FUNC_7(&VAR_33->dc_hw_i2c_mutex);

 return VAR_39;
}
