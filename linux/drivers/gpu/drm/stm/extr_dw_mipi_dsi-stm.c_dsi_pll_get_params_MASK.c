
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi_stm {int lane_min_kbps; int lane_max_kbps; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dw_mipi_dsi_stm *VAR_7,
         int VAR_8, int VAR_9,
         int *VAR_10, int *VAR_11, int *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;


 if (VAR_8 <= 0 || VAR_9 <= 0)
  return -VAR_0;

 VAR_18 = VAR_7->lane_min_kbps * 2 * VAR_5;
 VAR_19 = VAR_7->lane_max_kbps * 2 * VAR_6;

 VAR_21 = 1000000;

 for (VAR_13 = VAR_2; VAR_13 <= VAR_1; VAR_13++) {

  VAR_16 = ((VAR_18 * VAR_13) / (2 * VAR_8)) + 1;
  VAR_17 = (VAR_19 * VAR_13) / (2 * VAR_8);


  if (VAR_16 >= VAR_3)
   break;


  if (VAR_16 < VAR_4)
   VAR_16 = VAR_4;
  if (VAR_17 > VAR_3)
   VAR_17 = VAR_3;

  for (VAR_14 = VAR_6; VAR_14 <= VAR_5; VAR_14 *= 2) {
   VAR_15 = FUNC_0(VAR_13 * VAR_14 * VAR_9, VAR_8);

   if (VAR_15 < VAR_16 || VAR_15 > VAR_17)
    continue;

   VAR_20 = FUNC_1(VAR_8, VAR_13, VAR_15, VAR_14) -
    VAR_9;
   if (VAR_20 < 0)
    VAR_20 = -VAR_20;
   if (VAR_20 < VAR_21) {
    *VAR_10 = VAR_13;
    *VAR_11 = VAR_15;
    *VAR_12 = VAR_14;
    VAR_21 = VAR_20;
   }

   if (!VAR_20)
    return 0;
  }
 }

 return 0;
}
