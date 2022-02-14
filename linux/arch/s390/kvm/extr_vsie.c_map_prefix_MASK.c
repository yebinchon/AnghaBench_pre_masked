
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_s390_sie_block {int prefix; int mso; int ecb; } ;
struct vsie_page {int gmap; struct kvm_s390_sie_block scb_s; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int) ;
 scalar_t__ FUNC_1 (struct vsie_page*) ;
 int FUNC_2 (struct vsie_page*) ;
 int FUNC_3 (struct vsie_page*) ;
 int FUNC_4 (struct kvm_s390_sie_block*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_4, struct vsie_page *VAR_5)
{
 struct kvm_s390_sie_block *VAR_6 = &VAR_5->scb_s;
 u64 VAR_7 = VAR_6->prefix << VAR_2;
 int VAR_8;

 if (FUNC_1(VAR_5))
  return 0;


 FUNC_2(VAR_5);


 VAR_7 += VAR_6->mso;

 VAR_8 = FUNC_0(VAR_4, VAR_5->gmap, VAR_7);
 if (!VAR_8 && (VAR_6->ecb & VAR_0))
  VAR_8 = FUNC_0(VAR_4, VAR_5->gmap,
        VAR_7 + VAR_3);




 if (VAR_8)
  FUNC_3(VAR_5);
 if (VAR_8 > 0 || VAR_8 == -VAR_1)
  VAR_8 = FUNC_4(VAR_6, 0x0037U);
 return VAR_8;
}
