
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_power_gate {int vcn_gated; } ;
struct smu_power_context {struct smu_power_gate power_gate; } ;
struct smu_context {struct smu_power_context smu_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct smu_context*,int ) ;
 int FUNC_1 (struct smu_context*,int ) ;
 int FUNC_2 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3, bool VAR_4)
{
 struct smu_power_context *VAR_5 = &VAR_3->smu_power;
 struct smu_power_gate *VAR_6 = &VAR_5->power_gate;
 int VAR_7 = 0;

 if (VAR_4) {

  if (FUNC_0(VAR_3, VAR_0)) {
   VAR_7 = FUNC_2(VAR_3, VAR_2, 1);
   if (VAR_7)
    return VAR_7;
  }
  VAR_6->vcn_gated = 0;
 } else {
  if (FUNC_0(VAR_3, VAR_0)) {
   VAR_7 = FUNC_1(VAR_3, VAR_1);
   if (VAR_7)
    return VAR_7;
  }
  VAR_6->vcn_gated = 1;
 }

 return VAR_7;
}
