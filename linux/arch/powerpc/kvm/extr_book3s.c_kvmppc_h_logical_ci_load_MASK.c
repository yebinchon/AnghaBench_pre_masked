
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int buf ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int srcu; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*,int ,unsigned long,unsigned long,int *) ;
 unsigned long FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

int FUNC_10(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4 = FUNC_6(VAR_3, 4);
 unsigned long VAR_5 = FUNC_6(VAR_3, 5);
 u64 VAR_6;
 int VAR_7;
 int VAR_8;

 if (!FUNC_4(VAR_4) || (VAR_4 > sizeof(VAR_6)))
  return VAR_1;

 VAR_7 = FUNC_8(&VAR_3->kvm->srcu);
 VAR_8 = FUNC_5(VAR_3, VAR_2, VAR_5, VAR_4, &VAR_6);
 FUNC_9(&VAR_3->kvm->srcu, VAR_7);
 if (VAR_8 != 0)
  return VAR_1;

 switch (VAR_4) {
 case 1:
  FUNC_7(VAR_3, 4, *(u8 *)&VAR_6);
  break;

 case 2:
  FUNC_7(VAR_3, 4, FUNC_1(*(__be16 *)&VAR_6));
  break;

 case 4:
  FUNC_7(VAR_3, 4, FUNC_2(*(__be32 *)&VAR_6));
  break;

 case 8:
  FUNC_7(VAR_3, 4, FUNC_3(*(__be64 *)&VAR_6));
  break;

 default:
  FUNC_0();
 }

 return VAR_0;
}
