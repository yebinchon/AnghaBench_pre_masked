
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos_dsi {int completed; TYPE_1__* driver_data; } ;
struct TYPE_2__ {int * reg_values; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct exynos_dsi*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct exynos_dsi *VAR_2)
{
 u32 VAR_3 = VAR_2->driver_data->reg_values[VAR_1];

 FUNC_1(&VAR_2->completed);
 FUNC_0(VAR_2, VAR_0, VAR_3);
}
