
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct kvm_vcpu {int kvm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 (int ,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct kvm_vcpu *VAR_8, unsigned long VAR_9,
          unsigned long VAR_10, unsigned long VAR_11)
{
 u64 VAR_12 = VAR_7;
 u64 VAR_13 = VAR_7 - 1;
 int VAR_14;


 if (VAR_9 & ~(VAR_1 | VAR_2 |
        VAR_6 | VAR_0 | VAR_3))
  return VAR_4;


 if ((VAR_10 & VAR_13) || ((VAR_9 & VAR_0) && (VAR_11 & VAR_13)))
  return VAR_4;


 if (VAR_9 & VAR_0) {
  VAR_14 = FUNC_1(VAR_8->kvm, VAR_10, VAR_11, VAR_12);
  if (VAR_14 < 0)
   return VAR_4;
 } else if (VAR_9 & VAR_6) {
  VAR_14 = FUNC_0(VAR_8->kvm, VAR_10, VAR_12);
  if (VAR_14 < 0)
   return VAR_4;
 }



 return VAR_5;
}
