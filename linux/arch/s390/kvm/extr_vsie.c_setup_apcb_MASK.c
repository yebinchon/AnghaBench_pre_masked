
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_s390_crypto_cb {int apcb0; int apcb1; } ;





 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long*,unsigned long,unsigned long*) ;
 int FUNC_1 (struct kvm_vcpu*,int *,unsigned long,int *) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long*,unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_3, struct kvm_s390_crypto_cb *VAR_4,
        const u32 VAR_5,
        struct kvm_s390_crypto_cb *VAR_6,
        int VAR_7, int VAR_8)
{
 struct kvm_s390_crypto_cb *VAR_9;

 VAR_9 = (struct kvm_s390_crypto_cb *) (unsigned long)VAR_5;

 switch (VAR_7) {
 case 128:
  if ((VAR_5 & VAR_2) != ((VAR_5 + 256) & VAR_2))
   return -VAR_0;
  if (VAR_8 != 128)
   return -VAR_1;
  return FUNC_2(VAR_3, (unsigned long *)&VAR_4->apcb1,
        (unsigned long) &VAR_9->apcb1,
        (unsigned long *)&VAR_6->apcb1);
 case 129:
  switch (VAR_8) {
  case 128:
   return FUNC_1(VAR_3, &VAR_4->apcb1,
         (unsigned long) &VAR_9->apcb0,
         &VAR_6->apcb1);
  case 129:
   return FUNC_0(VAR_3,
         (unsigned long *) &VAR_4->apcb0,
         (unsigned long) &VAR_9->apcb0,
         (unsigned long *) &VAR_6->apcb0);
  }
  break;
 case 130:
  if ((VAR_5 & VAR_2) != ((VAR_5 + 32) & VAR_2))
   return -VAR_0;

  switch (VAR_8) {
  case 128:
   return FUNC_1(VAR_3, &VAR_4->apcb1,
         (unsigned long) &VAR_9->apcb0,
         &VAR_6->apcb1);
  case 129:
  case 130:
   return FUNC_0(VAR_3,
         (unsigned long *) &VAR_4->apcb0,
         (unsigned long) &VAR_9->apcb0,
         (unsigned long *) &VAR_6->apcb0);
  }
 }
 return -VAR_1;
}
