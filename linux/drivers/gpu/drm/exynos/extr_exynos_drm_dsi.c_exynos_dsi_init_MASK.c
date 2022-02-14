
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi_driver_data {scalar_t__* reg_values; scalar_t__ wait_for_reset; } ;
struct exynos_dsi {int lanes; struct exynos_dsi_driver_data* driver_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct exynos_dsi*) ;
 int FUNC_2 (struct exynos_dsi*) ;
 int FUNC_3 (struct exynos_dsi*,scalar_t__) ;
 int FUNC_4 (struct exynos_dsi*) ;
 int FUNC_5 (struct exynos_dsi*) ;
 int FUNC_6 (struct exynos_dsi*) ;
 int FUNC_7 (struct exynos_dsi*) ;

__attribute__((used)) static int FUNC_8(struct exynos_dsi *VAR_2)
{
 const struct exynos_dsi_driver_data *VAR_3 = VAR_2->driver_data;

 FUNC_5(VAR_2);
 FUNC_2(VAR_2);

 if (VAR_3->reg_values[VAR_1] == VAR_0)
  FUNC_3(VAR_2, FUNC_0(VAR_2->lanes) - 1);

 FUNC_1(VAR_2);
 if (VAR_3->wait_for_reset)
  FUNC_7(VAR_2);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2);

 return 0;
}
