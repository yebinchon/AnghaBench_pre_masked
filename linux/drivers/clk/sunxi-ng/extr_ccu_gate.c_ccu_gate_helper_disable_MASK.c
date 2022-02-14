
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_common {int lock; scalar_t__ reg; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct ccu_common *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 if (!VAR_1)
  return;

 FUNC_1(VAR_0->lock, VAR_2);

 VAR_3 = FUNC_0(VAR_0->base + VAR_0->reg);
 FUNC_3(VAR_3 & ~VAR_1, VAR_0->base + VAR_0->reg);

 FUNC_2(VAR_0->lock, VAR_2);
}
