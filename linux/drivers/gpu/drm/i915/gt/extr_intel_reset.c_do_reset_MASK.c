
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gt {int dummy; } ;
typedef int intel_engine_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_gt*,int ) ;
 int FUNC_1 (struct intel_gt*,int ) ;
 int FUNC_2 (struct intel_gt*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct intel_gt *VAR_2, intel_engine_mask_t VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_2(VAR_2);

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_1; VAR_5++) {
  FUNC_3(10 * (VAR_5 + 1));
  VAR_4 = FUNC_0(VAR_2, VAR_0);
 }
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, VAR_3);
}
