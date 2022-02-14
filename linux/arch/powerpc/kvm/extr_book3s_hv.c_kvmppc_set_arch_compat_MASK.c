
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_vcore {int arch_compat; unsigned long pcr; int lock; } ;
struct TYPE_2__ {struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_9, u32 VAR_10)
{
 unsigned long VAR_11 = 0, VAR_12 = 0;
 struct kvmppc_vcore *VAR_13 = VAR_9->arch.vcore;


 if (FUNC_0(VAR_2))
  VAR_11 = VAR_7;
 else if (FUNC_0(VAR_1))
  VAR_11 = VAR_6;
 else if (FUNC_0(VAR_0))
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_4;


 VAR_12 = VAR_11;
 if (VAR_10) {
  switch (VAR_10) {
  case 132:
   VAR_12 = VAR_4;
   break;
  case 131:
  case 130:
   VAR_12 = VAR_5;
   break;
  case 129:
   VAR_12 = VAR_6;
   break;
  case 128:
   VAR_12 = VAR_7;
   break;
  default:
   return -VAR_3;
  }
 }


 if (VAR_12 > VAR_11)
  return -VAR_3;

 FUNC_1(&VAR_13->lock);
 VAR_13->arch_compat = VAR_10;




 VAR_13->pcr = (VAR_11 - VAR_12) | VAR_8;
 FUNC_2(&VAR_13->lock);

 return 0;
}
