
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u16 ;
struct kvmppc_vcpu_book3s {size_t vsid_next; int * vsid_pool; struct kvmppc_sid_map* sid_map; } ;
struct kvmppc_sid_map {int valid; int guest_vsid; int host_vsid; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 size_t FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvmppc_sid_map*,int ,int) ;
 struct kvmppc_vcpu_book3s* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static struct kvmppc_sid_map *FUNC_6(struct kvm_vcpu *VAR_5, u64 VAR_6)
{
 struct kvmppc_sid_map *VAR_7;
 struct kvmppc_vcpu_book3s *VAR_8 = FUNC_5(VAR_5);
 u16 VAR_9;
 static int VAR_10 = 0;

 if (FUNC_0(VAR_5) & VAR_0)
  VAR_6 |= VAR_4;




 VAR_9 = FUNC_3(VAR_5, VAR_6);
 if (VAR_10)
  VAR_9 = VAR_1 - VAR_9;

 VAR_7 = &FUNC_5(VAR_5)->sid_map[VAR_9];


 VAR_10 = !VAR_10;


 if (VAR_8->vsid_next >= VAR_3) {
  VAR_8->vsid_next = 0;
  FUNC_4(VAR_8->sid_map, 0,
         sizeof(struct kvmppc_sid_map) * VAR_2);
  FUNC_2(VAR_5, 0, 0);
  FUNC_1(VAR_5);
 }
 VAR_7->host_vsid = VAR_8->vsid_pool[VAR_8->vsid_next];
 VAR_8->vsid_next++;

 VAR_7->guest_vsid = VAR_6;
 VAR_7->valid = 1;

 return VAR_7;
}
