
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {int lane_mbps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dw_mipi_dsi*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dw_mipi_dsi *VAR_3)
{
 u32 VAR_4 = (VAR_3->lane_mbps >> 3) / 20 + 1;

 FUNC_2(VAR_3, VAR_1, VAR_2);






 FUNC_2(VAR_3, VAR_0, FUNC_0(10) |
    FUNC_1(VAR_4));
}
