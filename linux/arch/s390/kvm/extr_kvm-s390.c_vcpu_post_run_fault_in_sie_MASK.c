
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct kvm_s390_pgm_info {int flags; int code; } ;
struct TYPE_6__ {struct kvm_s390_pgm_info pgm; TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_s390_pgm_info*) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int*,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct kvm_s390_pgm_info VAR_3 = {
  .code = VAR_1,
 };
 u8 VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, 3, "%s", "fault in sie instruction");
 FUNC_5(VAR_2);
 VAR_6 = FUNC_4(VAR_2, VAR_2->arch.sie_block->gpsw.addr, &VAR_4, 1);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_6 < 0) {
  return VAR_6;
 } else if (VAR_6) {




  VAR_3 = VAR_2->arch.pgm;
  VAR_5 = 4;
 }
 VAR_3.flags = VAR_5 | VAR_0;
 FUNC_2(VAR_2, VAR_5);
 return FUNC_3(VAR_2, &VAR_3);
}
