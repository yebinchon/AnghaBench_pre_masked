
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct kvm_s390_sie_block {int ipa; int icptstatus; TYPE_1__ gpsw; } ;
struct vsie_page {struct kvm_s390_sie_block scb_s; } ;


 int FUNC_0 (TYPE_1__,int) ;
 int FUNC_1 (struct vsie_page*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct vsie_page *VAR_0)
{
 struct kvm_s390_sie_block *VAR_1 = &VAR_0->scb_s;
 int VAR_2 = FUNC_2(VAR_1->ipa >> 8);


 if (VAR_1->icptstatus & 1) {
  VAR_2 = (VAR_1->icptstatus >> 4) & 0x6;
  if (!VAR_2)
   VAR_2 = 4;
 }
 VAR_1->gpsw.addr = FUNC_0(VAR_1->gpsw, VAR_2);
 FUNC_1(VAR_0);
}
