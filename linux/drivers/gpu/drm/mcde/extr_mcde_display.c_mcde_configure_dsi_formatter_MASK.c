
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mcde {int regs; int dev; TYPE_1__* mdsi; } ;
typedef enum mcde_dsi_formatter { ____Placeholder_mcde_dsi_formatter } mcde_dsi_formatter ;
struct TYPE_2__ {int mode_flags; int format; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;



 int VAR_31 ;
 int VAR_32 ;




 int VAR_33 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct mcde *VAR_34,
      enum mcde_dsi_formatter VAR_35,
      u32 VAR_36,
      int VAR_37)
{
 u32 VAR_38;
 u32 VAR_39;
 u32 VAR_40;
 u32 VAR_41;
 u32 VAR_42;
 u32 VAR_43;
 u32 VAR_44, VAR_45;

 switch (VAR_35) {
 case 134:
  VAR_39 = VAR_9;
  VAR_40 = VAR_12;
  VAR_41 = VAR_13;
  VAR_42 = VAR_14;
  VAR_43 = VAR_8;
  VAR_44 = VAR_10;
  VAR_45 = VAR_11;
  break;
 case 133:
  VAR_39 = VAR_16;
  VAR_40 = VAR_19;
  VAR_41 = VAR_20;
  VAR_42 = VAR_21;
  VAR_43 = VAR_15;
  VAR_44 = VAR_17;
  VAR_45 = VAR_18;
  break;
 case 132:
  VAR_39 = VAR_23;
  VAR_40 = VAR_26;
  VAR_41 = VAR_27;
  VAR_42 = VAR_28;
  VAR_43 = VAR_22;
  VAR_44 = VAR_24;
  VAR_45 = VAR_25;
  break;
 }





 VAR_38 = VAR_0 | VAR_1;
 if (VAR_34->mdsi->mode_flags & VAR_33)
  VAR_38 |= VAR_7;
 switch (VAR_34->mdsi->format) {
 case 128:
  VAR_38 |= VAR_5 <<
   VAR_6;
  break;
 case 130:
  VAR_38 |= VAR_3 <<
   VAR_6;
  break;
 case 129:
  VAR_38 |= VAR_4 <<
   VAR_6;
  break;
 case 131:
  VAR_38 |= VAR_2 <<
   VAR_6;
  break;
 default:
  FUNC_0(VAR_34->dev, "unknown DSI format\n");
  return;
 }
 FUNC_1(VAR_38, VAR_34->regs + VAR_39);

 FUNC_1(VAR_36, VAR_34->regs + VAR_40);
 FUNC_1(VAR_37, VAR_34->regs + VAR_41);
 FUNC_1(0, VAR_34->regs + VAR_42);

 VAR_38 = VAR_31 <<
  VAR_29;
 VAR_38 |= VAR_32 <<
  VAR_30;
 FUNC_1(VAR_38, VAR_34->regs + VAR_43);





 FUNC_1(0, VAR_34->regs + VAR_44);
 FUNC_1(0, VAR_34->regs + VAR_45);
}
