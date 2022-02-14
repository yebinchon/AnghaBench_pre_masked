
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {size_t* msrpm; } ;
struct TYPE_4__ {size_t* msrpm; TYPE_1__ nested; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (int,unsigned long*) ;
 TYPE_2__* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_1, unsigned VAR_2)
{
 u8 VAR_3;
 unsigned long VAR_4;
 u32 VAR_5;
 u32 *VAR_6;

 VAR_6 = FUNC_1(VAR_1) ? FUNC_4(VAR_1)->nested.msrpm:
          FUNC_4(VAR_1)->msrpm;

 VAR_5 = FUNC_2(VAR_2);
 VAR_3 = 2 * (VAR_2 & 0x0f) + 1;
 VAR_4 = VAR_6[VAR_5];

 FUNC_0(VAR_5 == VAR_0);

 return !!FUNC_3(VAR_3, &VAR_4);
}
