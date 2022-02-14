
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u16 ;
struct kvmppc_vcpu_book3s {scalar_t__ proto_vsid_next; scalar_t__ proto_vsid_max; scalar_t__ proto_vsid_first; struct kvmppc_sid_map* sid_map; } ;
struct kvmppc_sid_map {int valid; int host_vsid; int guest_vsid; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 size_t FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvmppc_sid_map*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct kvmppc_vcpu_book3s* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (size_t,int ,int ) ;
 int FUNC_8 (int ,int ,unsigned long) ;

__attribute__((used)) static struct kvmppc_sid_map *FUNC_9(struct kvm_vcpu *VAR_8, u64 VAR_9)
{
 unsigned long VAR_10 = VAR_5;
 struct kvmppc_sid_map *VAR_11;
 struct kvmppc_vcpu_book3s *VAR_12 = FUNC_6(VAR_8);
 u16 VAR_13;
 static int VAR_14 = 0;

 if (FUNC_0(VAR_8) & VAR_1)
  VAR_9 |= VAR_7;




 VAR_13 = FUNC_3(VAR_8, VAR_9);
 if (VAR_14)
  VAR_13 = VAR_2 - VAR_13;

 VAR_11 = &FUNC_6(VAR_8)->sid_map[VAR_13];


 VAR_14 = !VAR_14;


 if (VAR_12->proto_vsid_next == VAR_12->proto_vsid_max) {
  VAR_12->proto_vsid_next = VAR_12->proto_vsid_first;
  FUNC_4(VAR_12->sid_map, 0,
         sizeof(struct kvmppc_sid_map) * VAR_3);
  FUNC_2(VAR_8, 0, 0);
  FUNC_1(VAR_8);
 }

 if (FUNC_5(VAR_0))
  VAR_10 = VAR_4;

 VAR_11->host_vsid = FUNC_8(VAR_12->proto_vsid_next++,
           VAR_6, VAR_10);

 VAR_11->guest_vsid = VAR_9;
 VAR_11->valid = 1;

 FUNC_7(VAR_13, VAR_9, VAR_11->host_vsid);

 return VAR_11;
}
