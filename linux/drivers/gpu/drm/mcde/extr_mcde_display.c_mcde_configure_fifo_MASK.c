
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {int regs; } ;
typedef enum mcde_fifo { ____Placeholder_mcde_fifo } mcde_fifo ;
typedef enum mcde_dsi_formatter { ____Placeholder_mcde_dsi_formatter } mcde_dsi_formatter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct mcde *VAR_14, enum mcde_fifo VAR_15,
    enum mcde_dsi_formatter VAR_16,
    int VAR_17)
{
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20, VAR_21;

 switch (VAR_15) {
 case 129:
  VAR_19 = VAR_8;
  VAR_20 = VAR_0;
  VAR_21 = VAR_1;
  break;
 case 128:
  VAR_19 = VAR_9;
  VAR_20 = VAR_2;
  VAR_21 = VAR_3;
  break;
 }

 VAR_18 = VAR_17 << VAR_10;

 VAR_18 |= VAR_12 <<
  VAR_13;


 VAR_18 |= VAR_16 << VAR_11;
 FUNC_0(VAR_18, VAR_14->regs + VAR_19);


 VAR_18 = VAR_5 |
  0xff << VAR_4;
 FUNC_0(VAR_18, VAR_14->regs + VAR_20);




 VAR_18 = VAR_6 << VAR_7;


 FUNC_0(VAR_18, VAR_14->regs + VAR_21);
}
