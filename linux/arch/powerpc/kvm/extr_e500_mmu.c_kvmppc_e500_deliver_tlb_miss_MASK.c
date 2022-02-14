
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int * gtlb_nv; } ;
struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
struct TYPE_3__ {int mas4; int mas0; int mas1; int mas2; int mas7_3; int mas6; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 unsigned int FUNC_7 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_9(struct kvm_vcpu *VAR_10,
  gva_t VAR_11, int VAR_12)
{
 struct kvmppc_vcpu_e500 *VAR_13 = FUNC_8(VAR_10);
 unsigned int VAR_14, VAR_15;
 int VAR_16;


 VAR_16 = (VAR_10->arch.shared->mas4 >> 28) & 0x1;
 VAR_14 = (VAR_16 == 0) ? FUNC_7(VAR_13) : 0;
 VAR_15 = (VAR_10->arch.shared->mas4 >> 7) & 0x1f;

 VAR_10->arch.shared->mas0 = FUNC_2(VAR_16) | FUNC_0(VAR_14)
  | FUNC_1(VAR_13->gtlb_nv[VAR_16]);
 VAR_10->arch.shared->mas1 = VAR_1 | (VAR_12 ? VAR_0 : 0)
  | FUNC_3(FUNC_6(VAR_10))
  | FUNC_4(VAR_15);
 VAR_10->arch.shared->mas2 = (VAR_11 & VAR_3)
  | (VAR_10->arch.shared->mas4 & VAR_2);
 VAR_10->arch.shared->mas7_3 &= VAR_4 | VAR_5 | VAR_6 | VAR_7;
 VAR_10->arch.shared->mas6 = (VAR_10->arch.shared->mas6 & VAR_9)
  | (FUNC_5(VAR_10) << 16)
  | (VAR_12 ? VAR_8 : 0);
}
