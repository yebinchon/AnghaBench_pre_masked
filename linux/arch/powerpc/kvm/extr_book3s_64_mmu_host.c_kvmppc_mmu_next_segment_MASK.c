
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct kvmppc_book3s_shadow_vcpu {int slb_max; TYPE_1__* slb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int esid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_2 ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvmppc_book3s_shadow_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_3, ulong VAR_4)
{
 struct kvmppc_book3s_shadow_vcpu *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 int VAR_7 = 64;
 int VAR_8 = -1;
 int VAR_9;


 for (VAR_6 = 0; VAR_6 < VAR_5->slb_max; VAR_6++) {
  if (!(VAR_5->slb[VAR_6].esid & VAR_1))
   VAR_8 = VAR_6;
  else if ((VAR_5->slb[VAR_6].esid & VAR_0) == VAR_4) {
   VAR_9 = VAR_6;
   goto out;
  }
 }


 if (VAR_8 >= 0) {
  VAR_9 = VAR_8;
  goto out;
 }



 if (VAR_2 < 64)
  VAR_7 = VAR_2;


 if ((VAR_5->slb_max) == VAR_7)
  FUNC_0(VAR_3);

 VAR_9 = VAR_5->slb_max;
 VAR_5->slb_max++;

out:
 FUNC_2(VAR_5);
 return VAR_9;
}
