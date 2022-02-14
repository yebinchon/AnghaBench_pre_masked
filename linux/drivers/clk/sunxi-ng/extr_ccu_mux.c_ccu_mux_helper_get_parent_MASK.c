
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ccu_mux_internal {int shift; int width; int* table; } ;
struct ccu_common {int hw; scalar_t__ reg; scalar_t__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

u8 FUNC_2(struct ccu_common *VAR_0,
        struct ccu_mux_internal *VAR_1)
{
 u32 VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_1(VAR_0->base + VAR_0->reg);
 VAR_3 = VAR_2 >> VAR_1->shift;
 VAR_3 &= (1 << VAR_1->width) - 1;

 if (VAR_1->table) {
  int VAR_4 = FUNC_0(&VAR_0->hw);
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   if (VAR_1->table[VAR_5] == VAR_3)
    return VAR_5;
 }

 return VAR_3;
}
