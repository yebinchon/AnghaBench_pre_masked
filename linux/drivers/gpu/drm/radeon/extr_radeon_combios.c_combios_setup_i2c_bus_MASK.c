
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct radeon_i2c_bus_rec {int mask_clk_reg; int mask_data_reg; int a_clk_reg; int a_data_reg; int en_clk_reg; int en_data_reg; int y_clk_reg; int y_data_reg; int mask_clk_mask; int mask_data_mask; int a_clk_mask; int a_data_mask; int en_clk_mask; int en_data_mask; int y_clk_mask; int y_data_mask; int hw_capable; int mm_i2c; int i2c_id; int valid; int hpd; } ;
struct radeon_device {int family; } ;
typedef enum radeon_combios_ddc { ____Placeholder_radeon_combios_ddc } radeon_combios_ddc ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static struct radeon_i2c_bus_rec FUNC_0(struct radeon_device *VAR_17,
             enum radeon_combios_ddc VAR_18,
             u32 VAR_19,
             u32 VAR_20)
{
 struct radeon_i2c_bus_rec VAR_21;
 int VAR_22 = 0;
 switch (VAR_18) {
 case 133:
 default:
  VAR_22 = 0;
  break;
 case 137:
  VAR_22 = 130;
  break;
 case 132:
  VAR_22 = 128;
  break;
 case 135:
  VAR_22 = VAR_2;
  break;
 case 136:
  VAR_22 = VAR_15;
  break;
 case 134:
  if (VAR_17->family == 147 ||
      VAR_17->family == 146 ||
      VAR_17->family == 145)
   VAR_22 = VAR_2;
  else if (VAR_17->family == 151 ||
    VAR_17->family == 150) {
   VAR_22 = 130;
   VAR_18 = 137;
  } else
   VAR_22 = 129;
  break;
 case 138:
  if (VAR_17->family == 152 ||
      VAR_17->family == 151 ||
      VAR_17->family == 150) {
   VAR_22 = 130;
   VAR_18 = 137;
  } else if (VAR_17->family == 147 ||
      VAR_17->family == 146 ||
      VAR_17->family == 145)
   VAR_22 = 129;
  else if (VAR_17->family >= 140) {
   VAR_22 = 129;
   VAR_18 = 134;
  } else
   VAR_22 = 131;
  break;
 }

 if (VAR_22 == VAR_2) {
  VAR_21.mask_clk_reg = VAR_2;
  VAR_21.mask_data_reg = VAR_2;
  VAR_21.a_clk_reg = VAR_0;
  VAR_21.a_data_reg = VAR_0;
  VAR_21.en_clk_reg = VAR_1;
  VAR_21.en_data_reg = VAR_1;
  VAR_21.y_clk_reg = VAR_3;
  VAR_21.y_data_reg = VAR_3;
 } else if (VAR_22 == VAR_15) {
  VAR_21.mask_clk_reg = VAR_15;
  VAR_21.mask_data_reg = VAR_15;
  VAR_21.a_clk_reg = VAR_13;
  VAR_21.a_data_reg = VAR_13;
  VAR_21.en_clk_reg = VAR_14;
  VAR_21.en_data_reg = VAR_14;
  VAR_21.y_clk_reg = VAR_16;
  VAR_21.y_data_reg = VAR_16;
 } else {
  VAR_21.mask_clk_reg = VAR_22;
  VAR_21.mask_data_reg = VAR_22;
  VAR_21.a_clk_reg = VAR_22;
  VAR_21.a_data_reg = VAR_22;
  VAR_21.en_clk_reg = VAR_22;
  VAR_21.en_data_reg = VAR_22;
  VAR_21.y_clk_reg = VAR_22;
  VAR_21.y_data_reg = VAR_22;
 }

 if (VAR_19 && VAR_20) {

  VAR_21.mask_clk_mask = VAR_19;
  VAR_21.mask_data_mask = VAR_20;
  VAR_21.a_clk_mask = VAR_19;
  VAR_21.a_data_mask = VAR_20;
  VAR_21.en_clk_mask = VAR_19;
  VAR_21.en_data_mask = VAR_20;
  VAR_21.y_clk_mask = VAR_19;
  VAR_21.y_data_mask = VAR_20;
 } else if ((VAR_22 == VAR_2) ||
     (VAR_22 == VAR_15)) {

  VAR_21.mask_clk_mask = (0x20 << 8);
  VAR_21.mask_data_mask = 0x80;
  VAR_21.a_clk_mask = (0x20 << 8);
  VAR_21.a_data_mask = 0x80;
  VAR_21.en_clk_mask = (0x20 << 8);
  VAR_21.en_data_mask = 0x80;
  VAR_21.y_clk_mask = (0x20 << 8);
  VAR_21.y_data_mask = 0x80;
 } else {

  VAR_21.mask_clk_mask = VAR_9;
  VAR_21.mask_data_mask = VAR_8;
  VAR_21.a_clk_mask = VAR_5;
  VAR_21.a_data_mask = VAR_4;
  VAR_21.en_clk_mask = VAR_7;
  VAR_21.en_data_mask = VAR_6;
  VAR_21.y_clk_mask = VAR_11;
  VAR_21.y_data_mask = VAR_10;
 }

 switch (VAR_17->family) {
 case 153:
 case 144:
 case 149:
 case 143:
 case 148:
 case 147:
  switch (VAR_22) {
  case 130:
   VAR_21.hw_capable = 1;
   break;
  default:
   VAR_21.hw_capable = 0;
   break;
  }
  break;
 case 152:
  switch (VAR_22) {
  case 130:
  case 129:
   VAR_21.hw_capable = 1;
   break;
  default:
   VAR_21.hw_capable = 0;
   break;
  }
  break;
 case 142:
 case 141:
  switch (VAR_22) {
  case 128:
  case 130:
  case 131:
   VAR_21.hw_capable = 1;
   break;
  default:
   VAR_21.hw_capable = 0;
   break;
  }
  break;
 case 151:
 case 150:
  switch (VAR_22) {
  case 128:
  case 130:
   VAR_21.hw_capable = 1;
   break;
  default:
   VAR_21.hw_capable = 0;
   break;
  }
  break;
 case 140:
 case 139:
 case 146:
 case 145:
  switch (VAR_22) {
  case 128:
  case 130:
   VAR_21.hw_capable = 1;
   break;
  case 129:



   VAR_21.hw_capable = 0;
   break;
  default:
   VAR_21.hw_capable = 0;
   break;
  }
  break;
 default:
  VAR_21.hw_capable = 0;
  break;
 }
 VAR_21.mm_i2c = 0;

 VAR_21.i2c_id = VAR_18;
 VAR_21.hpd = VAR_12;

 if (VAR_22)
  VAR_21.valid = 1;
 else
  VAR_21.valid = 0;

 return VAR_21;
}
