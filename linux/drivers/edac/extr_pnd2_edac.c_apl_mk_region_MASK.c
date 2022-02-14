
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {int dummy; } ;
struct b_cr_asym_mem_region0_mchbar {int slice0_asym_limit; int slice0_asym_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,struct region*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, struct region *VAR_2, void *VAR_3)
{
 struct b_cr_asym_mem_region0_mchbar *VAR_4 = VAR_3;

 FUNC_2(VAR_1, VAR_2,
     FUNC_1(VAR_4->slice0_asym_base, VAR_0),
     FUNC_1(VAR_4->slice0_asym_limit, VAR_0) +
     FUNC_0(VAR_0 - 1, 0));
}
