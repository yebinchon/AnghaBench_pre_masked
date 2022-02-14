
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kvmppc_slb {scalar_t__ esid; scalar_t__ vsid; scalar_t__ tb; scalar_t__ large; scalar_t__ valid; } ;
struct TYPE_2__ {int slb_nr; struct kvmppc_slb* slb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char,char,...) ;

__attribute__((used)) static struct kvmppc_slb *FUNC_3(
    struct kvm_vcpu *VAR_0,
    gva_t VAR_1)
{
 int VAR_2;
 u64 VAR_3 = FUNC_0(VAR_1);
 u64 VAR_4 = FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->arch.slb_nr; VAR_2++) {
  u64 VAR_5 = VAR_3;

  if (!VAR_0->arch.slb[VAR_2].valid)
   continue;

  if (VAR_0->arch.slb[VAR_2].tb)
   VAR_5 = VAR_4;

  if (VAR_0->arch.slb[VAR_2].esid == VAR_5)
   return &VAR_0->arch.slb[VAR_2];
 }

 FUNC_2("KVM: No SLB entry found for 0x%lx [%llx | %llx]\n",
  VAR_1, VAR_3, VAR_4);
 for (VAR_2 = 0; VAR_2 < VAR_0->arch.slb_nr; VAR_2++) {
     if (VAR_0->arch.slb[VAR_2].vsid)
  FUNC_2("  %d: %c%c%c %llx %llx\n", VAR_2,
   VAR_0->arch.slb[VAR_2].valid ? 'v' : ' ',
   VAR_0->arch.slb[VAR_2].large ? 'l' : ' ',
   VAR_0->arch.slb[VAR_2].tb ? 't' : ' ',
   VAR_0->arch.slb[VAR_2].esid,
   VAR_0->arch.slb[VAR_2].vsid);
 }

 return ((void*)0);
}
