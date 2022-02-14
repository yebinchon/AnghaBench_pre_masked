
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct exynos_dsi_driver_data {unsigned int* reg_values; scalar_t__ has_freqband; } ;
struct exynos_dsi {struct exynos_dsi_driver_data* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (struct exynos_dsi*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct exynos_dsi *VAR_16)
{
 const struct exynos_dsi_driver_data *VAR_17 = VAR_16->driver_data;
 const unsigned int *VAR_18 = VAR_17->reg_values;
 u32 VAR_19;

 if (VAR_17->has_freqband)
  return;


 VAR_19 = VAR_18[VAR_5] | VAR_18[VAR_6] |
  VAR_18[VAR_4];
 FUNC_0(VAR_16, VAR_0, VAR_19);






 VAR_19 = VAR_18[VAR_15] | VAR_18[VAR_11];
 FUNC_0(VAR_16, VAR_3, VAR_19);
 VAR_19 = VAR_18[VAR_8] |
  VAR_18[VAR_10] |
  VAR_18[VAR_7] |
  VAR_18[VAR_9];

 FUNC_0(VAR_16, VAR_1, VAR_19);
 VAR_19 = VAR_18[VAR_12] | VAR_18[VAR_14] |
  VAR_18[VAR_13];
 FUNC_0(VAR_16, VAR_2, VAR_19);
}
