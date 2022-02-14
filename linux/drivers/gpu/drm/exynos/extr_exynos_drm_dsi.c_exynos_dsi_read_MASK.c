
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos_dsi {TYPE_1__* driver_data; scalar_t__ reg_base; } ;
typedef enum reg_idx { ____Placeholder_reg_idx } reg_idx ;
struct TYPE_2__ {scalar_t__* reg_ofs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct exynos_dsi *VAR_0, enum reg_idx VAR_1)
{
 return FUNC_0(VAR_0->reg_base + VAR_0->driver_data->reg_ofs[VAR_1]);
}
