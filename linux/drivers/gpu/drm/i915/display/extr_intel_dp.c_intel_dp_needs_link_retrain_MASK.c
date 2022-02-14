
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int lane_count; int link_rate; int link_trained; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct intel_dp*,int *) ;
 int FUNC_2 (struct intel_dp*,int ,int ) ;
 scalar_t__ FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static bool
FUNC_4(struct intel_dp *VAR_1)
{
 u8 VAR_2[VAR_0];

 if (!VAR_1->link_trained)
  return 0;
 if (FUNC_3(VAR_1))
  return 0;

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;





 if (!FUNC_2(VAR_1, VAR_1->link_rate,
     VAR_1->lane_count))
  return 0;


 return !FUNC_0(VAR_2, VAR_1->lane_count);
}
