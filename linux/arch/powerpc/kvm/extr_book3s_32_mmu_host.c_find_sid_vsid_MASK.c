
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct kvmppc_sid_map {int host_vsid; int guest_vsid; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {struct kvmppc_sid_map* sid_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 size_t FUNC_2 (struct kvm_vcpu*,int ) ;
 TYPE_1__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static struct kvmppc_sid_map *FUNC_4(struct kvm_vcpu *VAR_3, u64 VAR_4)
{
 struct kvmppc_sid_map *VAR_5;
 u16 VAR_6;

 if (FUNC_1(VAR_3) & VAR_0)
  VAR_4 |= VAR_2;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 VAR_5 = &FUNC_3(VAR_3)->sid_map[VAR_6];
 if (VAR_5->guest_vsid == VAR_4) {
  FUNC_0("SR: Searching 0x%llx -> 0x%llx\n",
       VAR_4, VAR_5->host_vsid);
  return VAR_5;
 }

 VAR_5 = &FUNC_3(VAR_3)->sid_map[VAR_1 - VAR_6];
 if (VAR_5->guest_vsid == VAR_4) {
  FUNC_0("SR: Searching 0x%llx -> 0x%llx\n",
       VAR_4, VAR_5->host_vsid);
  return VAR_5;
 }

 FUNC_0("SR: Searching 0x%llx -> not found\n", VAR_4);
 return ((void*)0);
}
