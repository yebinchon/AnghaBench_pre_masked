
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int* dpcd; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct gma_encoder *VAR_2)
{
 struct cdv_intel_dp *VAR_3 = VAR_2->dev_priv;
 int VAR_4 = 4;

 if (VAR_3->dpcd[VAR_0] >= 0x11) {
  VAR_4 = VAR_3->dpcd[VAR_1] & 0x1f;
  switch (VAR_4) {
  case 1: case 2: case 4:
   break;
  default:
   VAR_4 = 4;
  }
 }
 return VAR_4;
}
