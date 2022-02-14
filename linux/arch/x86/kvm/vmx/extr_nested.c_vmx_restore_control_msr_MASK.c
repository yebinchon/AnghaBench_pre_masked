
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int pinbased_ctls_low; int pinbased_ctls_high; int procbased_ctls_low; int procbased_ctls_high; int exit_ctls_low; int exit_ctls_high; int entry_ctls_low; int entry_ctls_high; int secondary_ctls_low; int secondary_ctls_high; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;





 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct vcpu_vmx *VAR_1, u32 VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 u32 *VAR_5, *VAR_6;

 switch (VAR_2) {
 case 129:
  VAR_5 = &VAR_1->nested.msrs.pinbased_ctls_low;
  VAR_6 = &VAR_1->nested.msrs.pinbased_ctls_high;
  break;
 case 128:
  VAR_5 = &VAR_1->nested.msrs.procbased_ctls_low;
  VAR_6 = &VAR_1->nested.msrs.procbased_ctls_high;
  break;
 case 130:
  VAR_5 = &VAR_1->nested.msrs.exit_ctls_low;
  VAR_6 = &VAR_1->nested.msrs.exit_ctls_high;
  break;
 case 131:
  VAR_5 = &VAR_1->nested.msrs.entry_ctls_low;
  VAR_6 = &VAR_1->nested.msrs.entry_ctls_high;
  break;
 case 132:
  VAR_5 = &VAR_1->nested.msrs.secondary_ctls_low;
  VAR_6 = &VAR_1->nested.msrs.secondary_ctls_high;
  break;
 default:
  FUNC_0();
 }

 VAR_4 = FUNC_3(*VAR_5, *VAR_6);


 if (!FUNC_2(VAR_3, VAR_4, FUNC_1(31, 0)))
  return -VAR_0;


 if (!FUNC_2(VAR_4, VAR_3, FUNC_1(63, 32)))
  return -VAR_0;

 *VAR_5 = VAR_3;
 *VAR_6 = VAR_3 >> 32;
 return 0;
}
