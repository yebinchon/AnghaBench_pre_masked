
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int cr4_fixed0; int cr0_fixed0; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int FUNC_1 (int ,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_2(struct vcpu_vmx *VAR_1, u32 VAR_2, u64 VAR_3)
{
 u64 *VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = &VAR_1->nested.msrs.cr0_fixed0;
  break;
 case 128:
  VAR_4 = &VAR_1->nested.msrs.cr4_fixed0;
  break;
 default:
  FUNC_0();
 }





 if (!FUNC_1(VAR_3, *VAR_4, -1ULL))
  return -VAR_0;

 *VAR_4 = VAR_3;
 return 0;
}
