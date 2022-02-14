
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_guc {int fw; } ;
struct intel_gt {struct intel_uncore* uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_uncore*) ;
 struct intel_gt* FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (struct intel_uncore*) ;
 int FUNC_3 (int *,struct intel_uncore*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct intel_gt*,int,int ) ;

int FUNC_6(struct intel_guc *VAR_3)
{
 struct intel_gt *VAR_4 = FUNC_1(VAR_3);
 struct intel_uncore *VAR_5 = VAR_4->uncore;
 int VAR_6;

 FUNC_0(VAR_5);






 FUNC_3(&VAR_3->fw, VAR_5);





 VAR_6 = FUNC_5(&VAR_3->fw, VAR_4, 0x2000, VAR_2);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto out;

 FUNC_4(&VAR_3->fw, VAR_1);
 return 0;

out:
 FUNC_4(&VAR_3->fw, VAR_0);
 return VAR_6;
}
