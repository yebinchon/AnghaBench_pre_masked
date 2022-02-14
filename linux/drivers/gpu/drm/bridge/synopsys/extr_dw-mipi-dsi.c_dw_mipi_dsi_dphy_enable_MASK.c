
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {scalar_t__ base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dw_mipi_dsi*,int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_mipi_dsi *VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 FUNC_1(VAR_9, VAR_0, VAR_3 | VAR_2 |
    VAR_7 | VAR_8);

 VAR_11 = FUNC_2(VAR_9->base + VAR_1, VAR_10,
     VAR_10 & VAR_4, 1000, VAR_5);
 if (VAR_11)
  FUNC_0("failed to wait phy lock state\n");

 VAR_11 = FUNC_2(VAR_9->base + VAR_1,
     VAR_10, VAR_10 & VAR_6, 1000,
     VAR_5);
 if (VAR_11)
  FUNC_0("failed to wait phy clk lane stop state\n");
}
