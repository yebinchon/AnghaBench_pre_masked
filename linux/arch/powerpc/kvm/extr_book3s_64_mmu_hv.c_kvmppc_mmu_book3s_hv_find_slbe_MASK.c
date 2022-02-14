
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_slb {int orige; int origv; } ;
struct TYPE_2__ {int slb_nr; struct kvmppc_slb* slb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct kvmppc_slb *FUNC_0(struct kvm_vcpu *VAR_4,
        gva_t VAR_5)
{
 u64 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->arch.slb_nr; VAR_7++) {
  if (!(VAR_4->arch.slb[VAR_7].orige & VAR_2))
   continue;

  if (VAR_4->arch.slb[VAR_7].origv & VAR_3)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;

  if (((VAR_4->arch.slb[VAR_7].orige ^ VAR_5) & VAR_6) == 0)
   return &VAR_4->arch.slb[VAR_7];
 }
 return ((void*)0);
}
