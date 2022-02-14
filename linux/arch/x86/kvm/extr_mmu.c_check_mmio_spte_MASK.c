
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_2)->generation;
 if (FUNC_4(VAR_6 & VAR_0))
  return 0;

 VAR_4 = VAR_6 & VAR_1;
 VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_3, VAR_4, VAR_5);
 return FUNC_2(VAR_4 == VAR_5);
}
