
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int* status; int prev_cable_type; int prev_chg_type; int dev; } ;
typedef enum max8997_muic_cable_group { ____Placeholder_max8997_muic_cable_group } max8997_muic_cable_group ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct max8997_muic_info *VAR_7,
  enum max8997_muic_cable_group VAR_8, bool *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 switch (VAR_8) {
 case 129:




  VAR_11 = VAR_7->status[0] & VAR_3;
  VAR_11 >>= VAR_4;






  if (VAR_11 == VAR_2) {
   *VAR_9 = 0;

   VAR_10 = VAR_7->prev_cable_type;
   VAR_7->prev_cable_type = VAR_2;
  } else {
   *VAR_9 = 1;

   VAR_10 = VAR_7->prev_cable_type = VAR_11;
  }
  break;
 case 128:




  VAR_12 = VAR_7->status[1] & VAR_5;
  VAR_12 >>= VAR_6;

  if (VAR_12 == VAR_1) {
   *VAR_9 = 0;

   VAR_10 = VAR_7->prev_chg_type;
   VAR_7->prev_chg_type = VAR_1;
  } else {
   *VAR_9 = 1;






   VAR_10 = VAR_7->prev_chg_type = VAR_12;
  }

  break;
 default:
  FUNC_0(VAR_7->dev, "Unknown cable group (%d)\n", VAR_8);
  VAR_10 = -VAR_0;
  break;
 }

 return VAR_10;
}
