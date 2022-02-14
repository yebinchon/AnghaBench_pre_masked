
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int lane_count; int * train_set; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct gma_encoder*,int ,int *,int) ;

__attribute__((used)) static bool
FUNC_2(struct gma_encoder *VAR_1,
   uint8_t VAR_2)
{

 int VAR_3;
 struct cdv_intel_dp *VAR_4 = VAR_1->dev_priv;

 VAR_3 = FUNC_1(VAR_1,
     VAR_0,
     VAR_4->train_set,
     VAR_4->lane_count);

 if (VAR_3 != VAR_4->lane_count) {
  FUNC_0("Failure in setting level %d, lane_cnt= %d\n",
    VAR_4->train_set[0], VAR_4->lane_count);
  return 0;
 }
 return 1;
}
