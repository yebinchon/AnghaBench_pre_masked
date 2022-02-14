
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_s390_sie_block {int scaol; int itdba; int gvrd; int riccbd; int sdnxo; scalar_t__ scaoh; } ;
struct vsie_page {scalar_t__ sdnx_gpa; scalar_t__ riccbd_gpa; scalar_t__ gvrd_gpa; scalar_t__ itdba_gpa; scalar_t__ sca_gpa; struct kvm_s390_sie_block scb_s; } ;
struct kvm_vcpu {int kvm; } ;
typedef int hpa_t ;


 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0, struct vsie_page *VAR_1)
{
 struct kvm_s390_sie_block *VAR_2 = &VAR_1->scb_s;
 hpa_t VAR_3;

 VAR_3 = (u64) VAR_2->scaoh << 32 | VAR_2->scaol;
 if (VAR_3) {
  FUNC_0(VAR_0->kvm, VAR_1->sca_gpa, VAR_3);
  VAR_1->sca_gpa = 0;
  VAR_2->scaol = 0;
  VAR_2->scaoh = 0;
 }

 VAR_3 = VAR_2->itdba;
 if (VAR_3) {
  FUNC_0(VAR_0->kvm, VAR_1->itdba_gpa, VAR_3);
  VAR_1->itdba_gpa = 0;
  VAR_2->itdba = 0;
 }

 VAR_3 = VAR_2->gvrd;
 if (VAR_3) {
  FUNC_0(VAR_0->kvm, VAR_1->gvrd_gpa, VAR_3);
  VAR_1->gvrd_gpa = 0;
  VAR_2->gvrd = 0;
 }

 VAR_3 = VAR_2->riccbd;
 if (VAR_3) {
  FUNC_0(VAR_0->kvm, VAR_1->riccbd_gpa, VAR_3);
  VAR_1->riccbd_gpa = 0;
  VAR_2->riccbd = 0;
 }

 VAR_3 = VAR_2->sdnxo;
 if (VAR_3) {
  FUNC_0(VAR_0->kvm, VAR_1->sdnx_gpa, VAR_3);
  VAR_1->sdnx_gpa = 0;
  VAR_2->sdnxo = 0;
 }
}
