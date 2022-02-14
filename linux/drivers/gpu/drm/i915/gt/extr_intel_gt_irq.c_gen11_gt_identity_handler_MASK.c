
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct intel_gt {int dummy; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 scalar_t__ const VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__ const,scalar_t__ const,int const) ;
 void FUNC_4 (struct intel_gt*,scalar_t__ const,scalar_t__ const,int const) ;
 void FUNC_5 (struct intel_gt*,scalar_t__ const,int const) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct intel_gt *VAR_2, const u32 VAR_3)
{
 const u8 VAR_4 = FUNC_0(VAR_3);
 const u8 VAR_5 = FUNC_1(VAR_3);
 const u16 VAR_6 = FUNC_2(VAR_3);

 if (FUNC_6(!VAR_6))
  return;

 if (VAR_4 <= VAR_0)
  return FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6);

 if (VAR_4 == VAR_1)
  return FUNC_5(VAR_2, VAR_5, VAR_6);

 FUNC_3(1, "unknown interrupt class=0x%x, instance=0x%x, intr=0x%x\n",
    VAR_4, VAR_5, VAR_6);
}
