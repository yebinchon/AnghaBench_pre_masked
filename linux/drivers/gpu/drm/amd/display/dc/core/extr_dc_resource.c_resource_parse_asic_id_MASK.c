
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_asic_id {int chip_family; int hw_internal_rev; } ;
typedef enum dce_version { ____Placeholder_dce_version } dce_version ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
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
 int VAR_13 ;
enum dce_version FUNC_12(struct hw_asic_id VAR_14)
{
 enum dce_version VAR_15 = VAR_9;
 switch (VAR_14.chip_family) {

 case 133:
  VAR_15 = VAR_6;
  break;
 case 131:
  if (FUNC_6(VAR_14.hw_internal_rev) ||
      FUNC_3(VAR_14.hw_internal_rev) ||
      FUNC_5(VAR_14.hw_internal_rev))
   VAR_15 = VAR_8;
  else
   VAR_15 = VAR_7;
  break;
 case 132:
  VAR_15 = VAR_1;
  break;

 case 128:
  if (FUNC_10(VAR_14.hw_internal_rev) ||
    FUNC_4(VAR_14.hw_internal_rev)) {
   VAR_15 = VAR_0;
   break;
  }
  if (FUNC_7(VAR_14.hw_internal_rev) ||
    FUNC_8(VAR_14.hw_internal_rev) ||
    FUNC_9(VAR_14.hw_internal_rev)) {
   VAR_15 = VAR_2;
  }
  if (FUNC_11(VAR_14.hw_internal_rev))
   VAR_15 = VAR_3;
  break;
 case 134:
  if (FUNC_2(VAR_14.hw_internal_rev))
   VAR_15 = VAR_5;
  else
   VAR_15 = VAR_4;
  break;
 default:
  VAR_15 = VAR_9;
  break;
 }
 return VAR_15;
}
