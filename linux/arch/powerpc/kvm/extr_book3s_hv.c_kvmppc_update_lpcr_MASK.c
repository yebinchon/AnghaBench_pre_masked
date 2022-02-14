
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvmppc_vcore {unsigned long lpcr; int lock; } ;
struct TYPE_2__ {unsigned long lpcr; scalar_t__ online_vcores; struct kvmppc_vcore** vcores; } ;
struct kvm {TYPE_1__ arch; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kvm *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 long int VAR_4;
 u32 VAR_5 = 0;

 if ((VAR_1->arch.lpcr & VAR_3) == VAR_2)
  return;

 VAR_1->arch.lpcr = (VAR_1->arch.lpcr & ~VAR_3) | VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct kvmppc_vcore *VAR_6 = VAR_1->arch.vcores[VAR_4];
  if (!VAR_6)
   continue;
  FUNC_0(&VAR_6->lock);
  VAR_6->lpcr = (VAR_6->lpcr & ~VAR_3) | VAR_2;
  FUNC_1(&VAR_6->lock);
  if (++VAR_5 >= VAR_1->arch.online_vcores)
   break;
 }
}
