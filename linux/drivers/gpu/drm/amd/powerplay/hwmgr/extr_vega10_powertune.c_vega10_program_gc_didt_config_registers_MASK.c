
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vega10_didt_config_reg {int offset; int mask; int value; int shift; } ;
struct pp_hwmgr {int device; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0, const struct vega10_didt_config_reg *VAR_1)
{
 uint32_t VAR_2;

 while (VAR_1->offset != 0xFFFFFFFF) {
  VAR_2 = FUNC_0(VAR_0->device, VAR_1->offset);
  VAR_2 &= ~VAR_1->mask;
  VAR_2 |= ((VAR_1->value << VAR_1->shift) & VAR_1->mask);
  FUNC_1(VAR_0->device, VAR_1->offset, VAR_2);
  VAR_1++;
 }

 return 0;
}
