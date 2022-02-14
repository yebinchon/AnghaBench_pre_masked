
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int gmap; TYPE_4__* sie_block; } ;
struct TYPE_11__ {int diagnose_10; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_5__ stat; TYPE_3__* run; } ;
struct TYPE_10__ {int ipa; } ;
struct TYPE_7__ {unsigned long* gprs; } ;
struct TYPE_8__ {TYPE_1__ regs; } ;
struct TYPE_9__ {TYPE_2__ s; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,unsigned long,unsigned long) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6 = FUNC_2(VAR_3);

 VAR_4 = VAR_3->run->s.regs.gprs[(VAR_3->arch.sie_block->ipa & 0xf0) >> 4];
 VAR_5 = VAR_3->run->s.regs.gprs[VAR_3->arch.sie_block->ipa & 0xf] + VAR_1;
 VAR_3->stat.diagnose_10++;

 if (VAR_4 & ~VAR_0 || VAR_5 & ~VAR_0 || VAR_4 >= VAR_5
     || VAR_4 < 2 * VAR_1)
  return FUNC_3(VAR_3, VAR_2);

 FUNC_0(VAR_3, 5, "diag release pages %lX %lX", VAR_4, VAR_5);





 if (VAR_5 <= VAR_6 || VAR_4 >= VAR_6 + 2 * VAR_1) {
  FUNC_1(VAR_3->arch.gmap, VAR_4, VAR_5);
 } else {






  FUNC_1(VAR_3->arch.gmap, VAR_4, VAR_6);
  if (VAR_4 <= VAR_6)
   FUNC_1(VAR_3->arch.gmap, 0, VAR_1);
  if (VAR_5 > VAR_6 + VAR_1)
   FUNC_1(VAR_3->arch.gmap, VAR_1, 2 * VAR_1);
  FUNC_1(VAR_3->arch.gmap, VAR_6 + 2 * VAR_1, VAR_5);
 }
 return 0;
}
