
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int train_set; } ;


 int FUNC_0 (struct intel_dp*,int ) ;
 int FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_3(struct intel_dp *VAR_0,
   u8 VAR_1)
{
 FUNC_2(VAR_0->train_set, 0, sizeof(VAR_0->train_set));
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0, VAR_1);
}
