
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi_stm {scalar_t__ base; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dw_mipi_dsi_stm*,int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_9)
{
 struct dw_mipi_dsi_stm *VAR_10 = VAR_9;
 u32 VAR_11;
 int VAR_12;


 FUNC_1(VAR_10, VAR_1, VAR_8 | VAR_6);
 VAR_12 = FUNC_2(VAR_10->base + VAR_0, VAR_11, VAR_11 & VAR_5,
     VAR_2, VAR_3);
 if (VAR_12)
  FUNC_0("!TIMEOUT! waiting REGU, let's continue\n");


 FUNC_1(VAR_10, VAR_1, VAR_7);
 VAR_12 = FUNC_2(VAR_10->base + VAR_0, VAR_11, VAR_11 & VAR_4,
     VAR_2, VAR_3);
 if (VAR_12)
  FUNC_0("!TIMEOUT! waiting PLL, let's continue\n");

 return 0;
}
