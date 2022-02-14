
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mipi_dsi_device {int host; } ;
struct mcde_dsi {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct mcde_dsi* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct mipi_dsi_device *VAR_20)
{
 struct mcde_dsi *VAR_21;
 u32 VAR_22;

 VAR_21 = FUNC_0(VAR_20->host);


 VAR_22 = VAR_11;
 VAR_22 |= 0 << VAR_9;
 VAR_22 |= 2 << VAR_12;
 VAR_22 |= VAR_10;
 VAR_22 |= VAR_7 <<
  VAR_8;
 FUNC_2(VAR_22, VAR_21->regs + VAR_6);


 FUNC_2(VAR_16 |
        VAR_15,
        VAR_21->regs + VAR_14);
 VAR_22 = FUNC_1(VAR_21->regs + VAR_17);
 VAR_22 |= VAR_19;
 VAR_22 |= VAR_18;
 FUNC_2(VAR_22, VAR_21->regs + VAR_17);


 FUNC_2(VAR_1 |
        VAR_2,
        VAR_21->regs + VAR_0);
 VAR_22 = FUNC_1(VAR_21->regs + VAR_3);
 VAR_22 |= VAR_4;
 VAR_22 |= VAR_5;
 FUNC_2(VAR_22, VAR_21->regs + VAR_3);


 FUNC_2(1, VAR_21->regs + VAR_13);
}
