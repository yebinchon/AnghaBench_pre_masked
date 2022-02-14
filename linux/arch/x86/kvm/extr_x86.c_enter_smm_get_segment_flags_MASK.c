
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_segment {int g; int db; int l; int avl; int present; int dpl; int s; int type; } ;



__attribute__((used)) static u32 FUNC_0(struct kvm_segment *VAR_0)
{
 u32 VAR_1 = 0;
 VAR_1 |= VAR_0->g << 23;
 VAR_1 |= VAR_0->db << 22;
 VAR_1 |= VAR_0->l << 21;
 VAR_1 |= VAR_0->avl << 20;
 VAR_1 |= VAR_0->present << 15;
 VAR_1 |= VAR_0->dpl << 13;
 VAR_1 |= VAR_0->s << 12;
 VAR_1 |= VAR_0->type << 8;
 return VAR_1;
}
