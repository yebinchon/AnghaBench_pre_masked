
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct kvmppc_sid_map {scalar_t__ guest_vsid; int host_vsid; scalar_t__ valid; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {struct kvmppc_sid_map* sid_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 size_t FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (size_t,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static struct kvmppc_sid_map *FUNC_5(struct kvm_vcpu *VAR_3, u64 VAR_4)
{
 struct kvmppc_sid_map *VAR_5;
 u16 VAR_6;

 if (FUNC_0(VAR_3) & VAR_0)
  VAR_4 |= VAR_2;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 VAR_5 = &FUNC_2(VAR_3)->sid_map[VAR_6];
 if (VAR_5->valid && (VAR_5->guest_vsid == VAR_4)) {
  FUNC_4(VAR_4, VAR_5->host_vsid);
  return VAR_5;
 }

 VAR_5 = &FUNC_2(VAR_3)->sid_map[VAR_1 - VAR_6];
 if (VAR_5->valid && (VAR_5->guest_vsid == VAR_4)) {
  FUNC_4(VAR_4, VAR_5->host_vsid);
  return VAR_5;
 }

 FUNC_3(VAR_6, VAR_4);
 return ((void*)0);
}
