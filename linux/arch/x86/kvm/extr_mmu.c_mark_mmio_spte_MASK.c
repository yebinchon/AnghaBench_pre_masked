
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {unsigned int generation; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (unsigned int*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_6, u64 *VAR_7, u64 VAR_8,
      unsigned VAR_9)
{
 u64 VAR_10 = FUNC_1(VAR_6)->generation & VAR_0;
 u64 VAR_11 = FUNC_0(VAR_10);
 u64 VAR_12 = VAR_8 << VAR_1;

 VAR_9 &= VAR_2;
 VAR_11 |= VAR_3 | VAR_9;
 VAR_11 |= VAR_12 | VAR_4;
 VAR_11 |= (VAR_12 & VAR_4)
  << VAR_5;

 FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_2(VAR_7, VAR_11);
}
