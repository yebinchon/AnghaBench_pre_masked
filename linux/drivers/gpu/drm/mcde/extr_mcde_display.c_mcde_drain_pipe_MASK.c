
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {int regs; int dev; } ;
typedef enum mcde_fifo { ____Placeholder_mcde_fifo } mcde_fifo ;
typedef enum mcde_channel { ____Placeholder_mcde_channel } mcde_channel ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mcde*,int,int) ;
 int FUNC_2 (struct mcde*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct mcde *VAR_8, enum mcde_fifo VAR_9,
       enum mcde_channel VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 switch (VAR_9) {
 case 129:
  VAR_12 = VAR_5;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 }

 switch (VAR_10) {
 case 133:
  VAR_13 = VAR_0;
  break;
 case 132:
  VAR_13 = VAR_1;
  break;
 case 131:
  VAR_13 = VAR_2;
  break;
 case 130:
  VAR_13 = VAR_3;
  return;
 }

 VAR_11 = FUNC_3(VAR_8->regs + VAR_12);
 if (!(VAR_11 & VAR_7)) {
  FUNC_0(VAR_8->dev, "Channel A FIFO not empty (handover)\n");

  FUNC_2(VAR_8, VAR_9);

  FUNC_4(VAR_4, VAR_8->regs + VAR_13);

  FUNC_1(VAR_8, VAR_9, 1);
 }
}
