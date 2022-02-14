
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_uncore*,int ,int ,int ,int,int ,int *) ;
 int FUNC_2 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct intel_gt *VAR_1, u32 VAR_2)
{
 struct intel_uncore *VAR_3 = VAR_1->uncore;
 int VAR_4;






 FUNC_2(VAR_3, VAR_0, VAR_2);


 VAR_4 = FUNC_1(VAR_3,
        VAR_0, VAR_2, 0,
        500, 0,
        ((void*)0));
 if (VAR_4)
  FUNC_0("Wait for 0x%08x engines reset failed\n",
     VAR_2);

 return VAR_4;
}
