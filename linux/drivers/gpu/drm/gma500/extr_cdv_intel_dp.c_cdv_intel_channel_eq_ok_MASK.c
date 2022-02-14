
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int lane_count; int link_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static bool
FUNC_2(struct gma_encoder *VAR_3)
{
 struct cdv_intel_dp *VAR_4 = VAR_3->dev_priv;
 uint8_t VAR_5;
 uint8_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4->link_status,
       VAR_2);
 if ((VAR_5 & VAR_1) == 0)
  return 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->lane_count; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4->link_status, VAR_7);
  if ((VAR_6 & VAR_0) != VAR_0)
   return 0;
 }
 return 1;
}
