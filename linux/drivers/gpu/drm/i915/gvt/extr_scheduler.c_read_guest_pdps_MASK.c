
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct intel_vgpu {int dummy; } ;
struct TYPE_2__ {int val; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_vgpu*,scalar_t__,int *,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu *VAR_1,
  u64 VAR_2, u32 VAR_3[8])
{
 u64 VAR_4;
 int VAR_5;

 VAR_4 = VAR_2 + FUNC_0(VAR_0[0].val);

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_1(VAR_1,
    VAR_4 + VAR_5 * 8, &VAR_3[7 - VAR_5], 4);
}
