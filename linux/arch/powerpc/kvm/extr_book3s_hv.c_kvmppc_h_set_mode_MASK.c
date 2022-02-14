
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ciabr; unsigned long dawr; unsigned long dawrx; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_9, unsigned long VAR_10,
        unsigned long VAR_11, unsigned long VAR_12,
        unsigned long VAR_13)
{
 switch (VAR_11) {
 case 129:
  if (!FUNC_0(VAR_9))
   return VAR_3;
  if (VAR_13)
   return VAR_5;
  if (VAR_10)
   return VAR_8;

  if ((VAR_12 & VAR_0) == VAR_1)
   return VAR_4;
  VAR_9->arch.ciabr = VAR_12;
  return VAR_6;
 case 128:
  if (!FUNC_0(VAR_9))
   return VAR_3;
  if (!FUNC_1())
   return VAR_3;
  if (VAR_10)
   return VAR_8;
  if (VAR_13 & VAR_2)
   return VAR_5;
  VAR_9->arch.dawr = VAR_12;
  VAR_9->arch.dawrx = VAR_13;
  return VAR_6;
 default:
  return VAR_7;
 }
}
