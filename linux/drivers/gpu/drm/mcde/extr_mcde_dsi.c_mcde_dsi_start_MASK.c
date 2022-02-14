
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mcde_dsi {int dev; scalar_t__ regs; TYPE_1__* mdsi; int hs_clk; } ;
struct TYPE_2__ {int mode_flags; int lanes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct mcde_dsi *VAR_42)
{
 unsigned long VAR_43;
 u32 VAR_44;
 int VAR_45;


 FUNC_6(0, VAR_42->regs + VAR_12);


 VAR_44 = VAR_16 |
  VAR_14 |
  VAR_17 |
  VAR_18;
 if (VAR_42->mdsi->mode_flags & VAR_41)
  VAR_44 |= VAR_15;
 FUNC_6(VAR_44, VAR_42->regs + VAR_13);


 VAR_44 = 0x3ff << VAR_2;
 FUNC_6(VAR_44, VAR_42->regs + VAR_0);






 VAR_43 = FUNC_0(VAR_42->hs_clk);
 VAR_43 /= 1000000;
 VAR_44 = 4000 / VAR_43;
 FUNC_1(VAR_42->dev, "UI value: %d\n", VAR_44);
 VAR_44 <<= VAR_7;
 VAR_44 &= VAR_6;
 FUNC_6(VAR_44, VAR_42->regs + VAR_5);







 VAR_44 = 0x0f << VAR_31;
 if (VAR_42->mdsi->lanes == 2)
  VAR_44 |= VAR_30;
 if (!(VAR_42->mdsi->mode_flags & VAR_40))
  VAR_44 |= VAR_26;
 VAR_44 |= VAR_27 |
  VAR_28 |
  VAR_29;
 FUNC_6(VAR_44, VAR_42->regs + VAR_25);

 VAR_44 = (1 << VAR_38) |
  (1 << VAR_39);
 FUNC_6(VAR_44, VAR_42->regs + VAR_37);

 FUNC_6(VAR_4,
        VAR_42->regs + VAR_3);


 VAR_44 = (0x0f << VAR_9) |
  (0x3fff << VAR_10) |
  (0x3fff << VAR_11);
 FUNC_6(VAR_44, VAR_42->regs + VAR_8);

 VAR_44 = VAR_24 |
  VAR_20 |
  VAR_21 |
  VAR_23;
 if (VAR_42->mdsi->lanes == 2)
  VAR_44 |= VAR_22;
 FUNC_6(VAR_44, VAR_42->regs + VAR_19);


 VAR_45 = 0;
 VAR_44 = VAR_36 |
  VAR_33 |
  VAR_34;
 if (VAR_42->mdsi->lanes == 2)
  VAR_44 |= VAR_35;
 while ((FUNC_4(VAR_42->regs + VAR_32) & VAR_44) != VAR_44) {

  FUNC_5(1000, 1500);
  if (VAR_45++ == 100) {
   FUNC_3(VAR_42->dev, "DSI lanes did not start up\n");
   return;
  }
 }




 VAR_44 = FUNC_4(VAR_42->regs + VAR_0);





 VAR_44 &= ~VAR_1;
 FUNC_6(VAR_44, VAR_42->regs + VAR_0);


 FUNC_5(100, 200);
 FUNC_2(VAR_42->dev, "DSI link enabled\n");
}
