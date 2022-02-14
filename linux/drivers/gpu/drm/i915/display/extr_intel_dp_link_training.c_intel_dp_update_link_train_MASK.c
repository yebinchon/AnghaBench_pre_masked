
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int lane_count; int train_set; int aux; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct intel_dp*) ;

__attribute__((used)) static bool
FUNC_2(struct intel_dp *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);

 VAR_2 = FUNC_0(&VAR_1->aux, VAR_0,
    VAR_1->train_set, VAR_1->lane_count);

 return VAR_2 == VAR_1->lane_count;
}
