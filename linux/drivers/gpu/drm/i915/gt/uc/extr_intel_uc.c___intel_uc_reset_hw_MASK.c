
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uc {int dummy; } ;
struct intel_gt {int uncore; int i915; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct intel_gt*) ;
 int FUNC_4 (int ,int ) ;
 struct intel_gt* FUNC_5 (struct intel_uc*) ;

__attribute__((used)) static int FUNC_6(struct intel_uc *VAR_3)
{
 struct intel_gt *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_4->i915, -VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_0("Failed to reset GuC, ret = %d\n", VAR_5);
  return VAR_5;
 }

 VAR_6 = FUNC_4(VAR_4->uncore, VAR_2);
 FUNC_1(!(VAR_6 & VAR_1),
      "GuC status: 0x%x, MIA core expected to be in reset\n",
      VAR_6);

 return VAR_5;
}
