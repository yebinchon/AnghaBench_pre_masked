
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmcb_seg {int limit; int attrib; int selector; int base; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int limit; int type; int s; int dpl; int present; int avl; int l; int db; int g; int unusable; int selector; int base; } ;
struct TYPE_6__ {TYPE_2__* vmcb; } ;
struct TYPE_4__ {int cpl; } ;
struct TYPE_5__ {TYPE_1__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 struct vmcb_seg* FUNC_0 (struct kvm_vcpu*,int) ;
 TYPE_3__* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_7,
       struct kvm_segment *VAR_8, int VAR_9)
{
 struct vmcb_seg *VAR_10 = FUNC_0(VAR_7, VAR_9);

 VAR_8->base = VAR_10->base;
 VAR_8->limit = VAR_10->limit;
 VAR_8->selector = VAR_10->selector;
 VAR_8->type = VAR_10->attrib & VAR_6;
 VAR_8->s = (VAR_10->attrib >> VAR_5) & 1;
 VAR_8->dpl = (VAR_10->attrib >> VAR_2) & 3;
 VAR_8->present = (VAR_10->attrib >> VAR_4) & 1;
 VAR_8->avl = (VAR_10->attrib >> VAR_0) & 1;
 VAR_8->l = (VAR_10->attrib >> VAR_3) & 1;
 VAR_8->db = (VAR_10->attrib >> VAR_1) & 1;
 VAR_8->g = VAR_10->limit > 0xfffff;





 VAR_8->unusable = !VAR_8->present;

 switch (VAR_9) {
 case 128:




  VAR_8->type |= 0x2;
  break;
 case 133:
 case 132:
 case 131:
 case 130:







  if (!VAR_8->unusable)
   VAR_8->type |= 0x1;
  break;
 case 129:






  if (VAR_8->unusable)
   VAR_8->db = 0;

  VAR_8->dpl = FUNC_1(VAR_7)->vmcb->save.cpl;
  break;
 }
}
