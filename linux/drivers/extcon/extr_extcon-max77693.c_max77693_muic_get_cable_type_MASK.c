
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_muic_info {int* status; int prev_cable_type; int prev_cable_type_gnd; int prev_chg_type; int dev; } ;
typedef enum max77693_muic_cable_group { ____Placeholder_max77693_muic_cable_group } max77693_muic_cable_group ;


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
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct max77693_muic_info *VAR_13,
  enum max77693_muic_cable_group VAR_14, bool *VAR_15)
{
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 switch (VAR_14) {
 case 131:




  VAR_17 = VAR_13->status[0] & VAR_7;
  VAR_17 >>= VAR_8;






  if (VAR_17 == VAR_2) {
   *VAR_15 = 0;

   VAR_16 = VAR_13->prev_cable_type;
   VAR_13->prev_cable_type = VAR_2;
  } else {
   *VAR_15 = 1;

   VAR_16 = VAR_13->prev_cable_type = VAR_17;
  }
  break;
 case 130:




  VAR_17 = VAR_13->status[0] & VAR_7;
  VAR_17 >>= VAR_8;






  if (VAR_17 == VAR_2) {
   *VAR_15 = 0;

   VAR_16 = VAR_13->prev_cable_type_gnd;
   VAR_13->prev_cable_type_gnd = VAR_2;
  } else {
   *VAR_15 = 1;

   VAR_19 = VAR_13->status[0] & VAR_5;
   VAR_19 >>= VAR_6;
   VAR_18 = VAR_13->status[0] & VAR_3;
   VAR_18 >>= VAR_4;

   VAR_20 = VAR_13->status[1] & VAR_11;
   VAR_20 >>= VAR_12;
   VAR_16 = ((0x1 << 8)
     | (VAR_20 << 2)
     | (VAR_19 << 1)
     | VAR_18);

   VAR_13->prev_cable_type = VAR_17;
   VAR_13->prev_cable_type_gnd = VAR_16;
  }

  break;
 case 129:




  VAR_21 = VAR_13->status[1] & VAR_9;
  VAR_21 >>= VAR_10;

  if (VAR_21 == VAR_1) {
   *VAR_15 = 0;

   VAR_16 = VAR_13->prev_chg_type;
   VAR_13->prev_chg_type = VAR_1;
  } else {
   *VAR_15 = 1;






   VAR_16 = VAR_13->prev_chg_type = VAR_21;
  }

  break;
 case 128:




  VAR_17 = VAR_13->status[0] & VAR_7;
  VAR_17 >>= VAR_8;
  VAR_21 = VAR_13->status[1] & VAR_9;
  VAR_21 >>= VAR_10;

  if (VAR_17 == VAR_2
    && VAR_21 == VAR_1)
   *VAR_15 = 0;
  else
   *VAR_15 = 1;





  VAR_20 = VAR_13->status[1] & VAR_11;
  VAR_20 >>= VAR_12;

  VAR_16 = VAR_20;
  break;
 default:
  FUNC_0(VAR_13->dev, "Unknown cable group (%d)\n", VAR_14);
  VAR_16 = -VAR_0;
  break;
 }

 return VAR_16;
}
