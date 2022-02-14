
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_common {scalar_t__ reg; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct ccu_common *VAR_0, u32 VAR_1)
{
 if (!VAR_1)
  return 1;

 return FUNC_0(VAR_0->base + VAR_0->reg) & VAR_1;
}
