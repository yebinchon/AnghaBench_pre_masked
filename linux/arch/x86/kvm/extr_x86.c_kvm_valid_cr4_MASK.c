
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_16, unsigned long VAR_17)
{
 if (VAR_17 & VAR_0)
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_15) && (VAR_17 & VAR_4))
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_13) && (VAR_17 & VAR_7))
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_12) && (VAR_17 & VAR_6))
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_9) && (VAR_17 & VAR_2))
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_11) && (VAR_17 & VAR_5))
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_10) && (VAR_17 & VAR_3))
  return -VAR_1;

 if (!FUNC_0(VAR_16, VAR_14) && (VAR_17 & VAR_8))
  return -VAR_1;

 return 0;
}
