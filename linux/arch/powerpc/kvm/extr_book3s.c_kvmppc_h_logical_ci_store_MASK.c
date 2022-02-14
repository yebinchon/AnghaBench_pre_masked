
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef int u64 ;
struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int srcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,int ,unsigned long,unsigned long,int *) ;
 unsigned long FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4 = FUNC_4(VAR_3, 4);
 unsigned long VAR_5 = FUNC_4(VAR_3, 5);
 unsigned long VAR_6 = FUNC_4(VAR_3, 6);
 u64 VAR_7;
 int VAR_8;
 int VAR_9;

 switch (VAR_4) {
 case 1:
  *(u8 *)&VAR_7 = VAR_6;
  break;

 case 2:
  *(__be16 *)&VAR_7 = FUNC_0(VAR_6);
  break;

 case 4:
  *(__be32 *)&VAR_7 = FUNC_1(VAR_6);
  break;

 case 8:
  *(__be64 *)&VAR_7 = FUNC_2(VAR_6);
  break;

 default:
  return VAR_1;
 }

 VAR_8 = FUNC_5(&VAR_3->kvm->srcu);
 VAR_9 = FUNC_3(VAR_3, VAR_2, VAR_5, VAR_4, &VAR_7);
 FUNC_6(&VAR_3->kvm->srcu, VAR_8);
 if (VAR_9 != 0)
  return VAR_1;

 return VAR_0;
}
