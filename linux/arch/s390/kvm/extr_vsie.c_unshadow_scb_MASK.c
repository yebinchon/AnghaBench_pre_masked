
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_s390_sie_block {int icptcode; void* gcr; int fpf; int ihcpu; int pp; int gg15; int gg14; int gpsw; int todpr; int ckc; int cputm; int gbea; int ipb; int ipa; int icptstatus; } ;
struct vsie_page {struct kvm_s390_sie_block* scb_o; struct kvm_s390_sie_block scb_s; } ;
struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;




 int FUNC_0 (void*,void*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, struct vsie_page *VAR_2)
{
 struct kvm_s390_sie_block *VAR_3 = &VAR_2->scb_s;
 struct kvm_s390_sie_block *VAR_4 = VAR_2->scb_o;


 VAR_4->icptcode = VAR_3->icptcode;
 VAR_4->icptstatus = VAR_3->icptstatus;
 VAR_4->ipa = VAR_3->ipa;
 VAR_4->ipb = VAR_3->ipb;
 VAR_4->gbea = VAR_3->gbea;


 VAR_4->cputm = VAR_3->cputm;
 VAR_4->ckc = VAR_3->ckc;
 VAR_4->todpr = VAR_3->todpr;


 VAR_4->gpsw = VAR_3->gpsw;
 VAR_4->gg14 = VAR_3->gg14;
 VAR_4->gg15 = VAR_3->gg15;
 FUNC_0(VAR_4->gcr, VAR_3->gcr, 128);
 VAR_4->pp = VAR_3->pp;


 if (FUNC_1(VAR_1->kvm, 82)) {
  VAR_4->fpf &= ~VAR_0;
  VAR_4->fpf |= VAR_3->fpf & VAR_0;
 }


 switch (VAR_3->icptcode) {
 case 128:
 case 130:
 case 131:
  FUNC_0((void *)((u64)VAR_4 + 0xc0),
         (void *)((u64)VAR_3 + 0xc0), 0xf0 - 0xc0);
  break;
 case 129:

  FUNC_0((void *)((u64)VAR_4 + 0xc0),
         (void *)((u64)VAR_3 + 0xc0), 0xd0 - 0xc0);
  break;
 }

 if (VAR_3->ihcpu != 0xffffU)
  VAR_4->ihcpu = VAR_3->ihcpu;
}
