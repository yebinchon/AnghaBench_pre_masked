
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_asic_id {int chip_family; int hw_internal_rev; } ;
typedef enum bw_calcs_version { ____Placeholder_bw_calcs_version } bw_calcs_version ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




__attribute__((used)) static enum bw_calcs_version FUNC_5(struct hw_asic_id VAR_8)
{
 switch (VAR_8.chip_family) {

 case 129:
  if (FUNC_3(VAR_8.hw_internal_rev))
   return VAR_5;
  return VAR_0;

 case 128:
  if (FUNC_2(VAR_8.hw_internal_rev))
   return VAR_4;
  if (FUNC_0(VAR_8.hw_internal_rev))
   return VAR_2;
  if (FUNC_1(VAR_8.hw_internal_rev))
   return VAR_3;
  if (FUNC_4(VAR_8.hw_internal_rev))
   return VAR_7;
  return VAR_1;

 case 130:
  return VAR_6;

 default:
  return VAR_1;
 }
}
