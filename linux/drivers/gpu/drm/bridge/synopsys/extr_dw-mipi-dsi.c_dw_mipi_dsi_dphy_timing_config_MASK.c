
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (struct dw_mipi_dsi*,int ) ;
 int FUNC_9 (struct dw_mipi_dsi*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct dw_mipi_dsi *VAR_6)
{
 u32 VAR_7;
 VAR_7 = FUNC_8(VAR_6, VAR_3) & VAR_5;

 if (VAR_7 >= VAR_4) {
  FUNC_9(VAR_6, VAR_0, FUNC_5(0x40) |
     FUNC_7(0x40));
  FUNC_9(VAR_6, VAR_2, FUNC_1(10000));
 } else {
  FUNC_9(VAR_6, VAR_0, FUNC_4(0x40) |
     FUNC_6(0x40) | FUNC_0(10000));
 }

 FUNC_9(VAR_6, VAR_1, FUNC_2(0x40)
    | FUNC_3(0x40));
}
