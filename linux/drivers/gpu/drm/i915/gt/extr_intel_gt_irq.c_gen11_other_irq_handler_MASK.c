
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int guc; } ;
struct intel_gt {TYPE_1__ uc; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__ const,int const) ;
 void FUNC_1 (struct intel_gt*,int const) ;
 void FUNC_2 (int *,int const) ;

__attribute__((used)) static void
FUNC_3(struct intel_gt *VAR_2, const u8 VAR_3,
   const u16 VAR_4)
{
 if (VAR_3 == VAR_1)
  return FUNC_2(&VAR_2->uc.guc, VAR_4);

 if (VAR_3 == VAR_0)
  return FUNC_1(VAR_2, VAR_4);

 FUNC_0(1, "unhandled other interrupt instance=0x%x, iir=0x%x\n",
    VAR_3, VAR_4);
}
