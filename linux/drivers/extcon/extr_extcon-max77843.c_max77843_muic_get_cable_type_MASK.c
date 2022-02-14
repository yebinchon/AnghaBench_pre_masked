
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77843_muic_info {int* status; int prev_cable_type; int prev_chg_type; int prev_gnd_type; int dev; } ;
typedef enum max77843_muic_cable_group { ____Placeholder_max77843_muic_cable_group } max77843_muic_cable_group ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct max77843_muic_info *VAR_16,
  enum max77843_muic_cable_group VAR_17, bool *VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_19 = VAR_16->status[VAR_8] &
   VAR_10;
 VAR_19 >>= VAR_11;

 switch (VAR_17) {
 case 130:
  if (VAR_19 == VAR_2) {
   *VAR_18 = 0;
   VAR_21 = VAR_16->prev_cable_type;
   VAR_16->prev_cable_type = VAR_2;
  } else {
   *VAR_18 = 1;
   VAR_21 = VAR_16->prev_cable_type = VAR_19;
  }
  break;
 case 128:
  VAR_20 = VAR_16->status[VAR_12] &
    VAR_13;


  if (VAR_19 == VAR_1) {
   if (VAR_20 == VAR_6) {





    *VAR_18 = 0;
    VAR_21 = VAR_16->prev_chg_type;
    VAR_16->prev_chg_type = VAR_6;
   } else {





    *VAR_18 = 1;
    VAR_21 = VAR_5;
    VAR_16->prev_chg_type = VAR_5;
   }
   break;
  }

  if (VAR_19 == VAR_3) {
   if (VAR_20 == VAR_6) {
    *VAR_18 = 0;
    VAR_21 = VAR_16->prev_chg_type;
    VAR_16->prev_chg_type = VAR_6;
   } else {
    *VAR_18 = 1;
    VAR_21 = VAR_4;
    VAR_16->prev_chg_type = VAR_4;
   }
   break;
  }

  if (VAR_20 == VAR_6) {
   *VAR_18 = 0;
   VAR_21 = VAR_16->prev_chg_type;
   VAR_16->prev_chg_type = VAR_6;
  } else {
   *VAR_18 = 1;
   VAR_21 = VAR_16->prev_chg_type = VAR_20;
  }
  break;
 case 129:
  if (VAR_19 == VAR_2) {
   *VAR_18 = 0;
   VAR_21 = VAR_16->prev_gnd_type;
   VAR_16->prev_gnd_type = VAR_2;
  } else {
   *VAR_18 = 1;
   VAR_22 = (VAR_16->status[VAR_8] &
     VAR_9);


   VAR_22 |= (VAR_16->status[VAR_12] &
     VAR_14);
   VAR_22 >>= VAR_15;


   VAR_22 |= VAR_7;
   VAR_21 = VAR_16->prev_gnd_type = VAR_22;
  }
  break;
 default:
  FUNC_0(VAR_16->dev, "Unknown cable group (%d)\n", VAR_17);
  VAR_21 = -VAR_0;
  break;
 }

 return VAR_21;
}
