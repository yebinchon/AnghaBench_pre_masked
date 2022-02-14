
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; } ;
typedef int intel_engine_mask_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct intel_uncore*,int ,int,int ,int,int ,int *) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct intel_gt *VAR_4,
        intel_engine_mask_t VAR_5,
        unsigned int VAR_6)
{
 struct intel_uncore *VAR_7 = VAR_4->uncore;
 int VAR_8;

 FUNC_3(VAR_7, VAR_0,
         VAR_2 | VAR_3);
 VAR_8 = FUNC_1(VAR_7, VAR_0,
        VAR_3, 0,
        5000, 0,
        ((void*)0));
 if (VAR_8) {
  FUNC_0("Wait for render reset failed\n");
  goto out;
 }

 FUNC_3(VAR_7, VAR_0,
         VAR_1 | VAR_3);
 VAR_8 = FUNC_1(VAR_7, VAR_0,
        VAR_3, 0,
        5000, 0,
        ((void*)0));
 if (VAR_8) {
  FUNC_0("Wait for media reset failed\n");
  goto out;
 }

out:
 FUNC_3(VAR_7, VAR_0, 0);
 FUNC_2(VAR_7, VAR_0);
 return VAR_8;
}
