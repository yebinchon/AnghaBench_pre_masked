
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int* dpcd; } ;




 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct gma_encoder *VAR_1)
{
 struct cdv_intel_dp *VAR_2 = VAR_1->dev_priv;
 int VAR_3 = VAR_2->dpcd[VAR_0];

 switch (VAR_3) {
 case 129:
 case 128:
  break;
 default:
  VAR_3 = 129;
  break;
 }
 return VAR_3;
}
