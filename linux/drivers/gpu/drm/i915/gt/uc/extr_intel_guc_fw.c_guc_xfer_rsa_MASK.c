
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_uc_fw {int dummy; } ;
typedef int rsa ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 size_t FUNC_2 (struct intel_uc_fw*,int *,int) ;
 int FUNC_3 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct intel_uc_fw *VAR_1,
    struct intel_uncore *VAR_2)
{
 u32 VAR_3[VAR_0];
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_4 < sizeof(VAR_3));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_3(VAR_2, FUNC_1(VAR_5), VAR_3[VAR_5]);
}
