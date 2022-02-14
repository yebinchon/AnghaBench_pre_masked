
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gt {int uncore; int i915; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_gt*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct intel_gt *VAR_3)
{
 u32 VAR_4 =
  FUNC_2(VAR_3->i915) >= 11 ? VAR_1 : VAR_2;
 int VAR_5;

 FUNC_0(!FUNC_1(VAR_3->i915));

 FUNC_4(VAR_3->uncore, VAR_0);
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 FUNC_5(VAR_3->uncore, VAR_0);

 return VAR_5;
}
