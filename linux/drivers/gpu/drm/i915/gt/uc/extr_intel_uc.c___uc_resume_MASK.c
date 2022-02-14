
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int dummy; } ;
struct intel_uc {struct intel_guc guc; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (struct intel_guc*) ;
 int FUNC_5 (struct intel_guc*) ;

__attribute__((used)) static int FUNC_6(struct intel_uc *VAR_0, bool VAR_1)
{
 struct intel_guc *VAR_2 = &VAR_0->guc;
 int VAR_3;

 if (!FUNC_4(VAR_2))
  return 0;


 FUNC_1(VAR_1 == FUNC_2(VAR_2));

 if (VAR_1)
  FUNC_3(VAR_2);

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_0("Failed to resume GuC, err=%d", VAR_3);
  return VAR_3;
 }

 return 0;
}
