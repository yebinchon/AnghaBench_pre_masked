
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct x86_emulate_ctxt {int dummy; } ;
struct kvm_segment {int limit; int base; scalar_t__ g; int db; int l; int avl; int present; int dpl; int s; int type; scalar_t__ unusable; int selector; } ;
struct desc_struct {scalar_t__ g; int d; int l; int avl; int p; int dpl; int s; int type; } ;


 int FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (int ,struct kvm_segment*,int) ;
 int FUNC_2 (struct desc_struct*,int ,int) ;
 int FUNC_3 (struct desc_struct*,unsigned long) ;
 int FUNC_4 (struct desc_struct*,int) ;

__attribute__((used)) static bool FUNC_5(struct x86_emulate_ctxt *VAR_0, u16 *VAR_1,
     struct desc_struct *VAR_2, u32 *VAR_3,
     int VAR_4)
{
 struct kvm_segment VAR_5;

 FUNC_1(FUNC_0(VAR_0), &VAR_5, VAR_4);
 *VAR_1 = VAR_5.selector;

 if (VAR_5.unusable) {
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
  if (VAR_3)
   *VAR_3 = 0;
  return 0;
 }

 if (VAR_5.g)
  VAR_5.limit >>= 12;
 FUNC_4(VAR_2, VAR_5.limit);
 FUNC_3(VAR_2, (unsigned long)VAR_5.base);




 VAR_2->type = VAR_5.type;
 VAR_2->s = VAR_5.s;
 VAR_2->dpl = VAR_5.dpl;
 VAR_2->p = VAR_5.present;
 VAR_2->avl = VAR_5.avl;
 VAR_2->l = VAR_5.l;
 VAR_2->d = VAR_5.db;
 VAR_2->g = VAR_5.g;

 return 1;
}
