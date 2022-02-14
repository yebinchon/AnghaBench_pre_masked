
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_segment {int present; int type; int s; int dpl; int avl; int l; int db; int g; scalar_t__ unusable; } ;



__attribute__((used)) static u32 FUNC_0(struct kvm_segment *VAR_0)
{
 u32 VAR_1;

 if (VAR_0->unusable || !VAR_0->present)
  VAR_1 = 1 << 16;
 else {
  VAR_1 = VAR_0->type & 15;
  VAR_1 |= (VAR_0->s & 1) << 4;
  VAR_1 |= (VAR_0->dpl & 3) << 5;
  VAR_1 |= (VAR_0->present & 1) << 7;
  VAR_1 |= (VAR_0->avl & 1) << 12;
  VAR_1 |= (VAR_0->l & 1) << 13;
  VAR_1 |= (VAR_0->db & 1) << 14;
  VAR_1 |= (VAR_0->g & 1) << 15;
 }

 return VAR_1;
}
