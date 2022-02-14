
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_frac_internal {int enable; } ;
struct ccu_common {int features; scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(struct ccu_common *VAR_1,
    struct ccu_frac_internal *VAR_2)
{
 if (!(VAR_1->features & VAR_0))
  return 0;

 return !(FUNC_0(VAR_1->base + VAR_1->reg) & VAR_2->enable);
}
