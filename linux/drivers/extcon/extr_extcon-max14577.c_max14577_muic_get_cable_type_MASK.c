
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max14577_muic_info {int* status; int prev_cable_type; int prev_chg_type; int dev; } ;
typedef enum max14577_muic_cable_group { ____Placeholder_max14577_muic_cable_group } max14577_muic_cable_group ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct max14577_muic_info *VAR_9,
  enum max14577_muic_cable_group VAR_10, bool *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 switch (VAR_10) {
 case 129:




  VAR_13 = VAR_9->status[VAR_3] & VAR_5;
  VAR_13 >>= VAR_6;






  if (VAR_13 == VAR_2) {
   *VAR_11 = 0;

   VAR_12 = VAR_9->prev_cable_type;
   VAR_9->prev_cable_type = VAR_2;
  } else {
   *VAR_11 = 1;

   VAR_12 = VAR_9->prev_cable_type = VAR_13;
  }
  break;
 case 128:




  VAR_14 = VAR_9->status[VAR_4] &
   VAR_7;
  VAR_14 >>= VAR_8;

  if (VAR_14 == VAR_1) {
   *VAR_11 = 0;

   VAR_12 = VAR_9->prev_chg_type;
   VAR_9->prev_chg_type = VAR_1;
  } else {
   *VAR_11 = 1;






   VAR_12 = VAR_9->prev_chg_type = VAR_14;
  }

  break;
 default:
  FUNC_0(VAR_9->dev, "Unknown cable group (%d)\n", VAR_10);
  VAR_12 = -VAR_0;
  break;
 }

 return VAR_12;
}
