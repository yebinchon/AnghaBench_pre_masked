
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {int regs; scalar_t__ te_sync; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
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


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct mcde *VAR_32, enum mcde_channel VAR_33,
       enum mcde_fifo VAR_34,
       const struct drm_display_mode *VAR_35)
{
 u32 VAR_36;
 u32 VAR_37;
 u32 VAR_38;
 u32 VAR_39;
 u32 VAR_40;
 u32 VAR_41;

 switch (VAR_33) {
 case 133:
  VAR_37 = VAR_1;
  VAR_38 = VAR_4;
  VAR_39 = VAR_3;
  VAR_40 = VAR_0;
  VAR_41 = VAR_2;
  break;
 case 132:
  VAR_37 = VAR_6;
  VAR_38 = VAR_9;
  VAR_39 = VAR_8;
  VAR_40 = VAR_5;
  VAR_41 = VAR_7;
  break;
 case 131:
  VAR_37 = VAR_11;
  VAR_38 = VAR_14;
  VAR_39 = VAR_13;
  VAR_40 = VAR_10;
  VAR_41 = VAR_12;
  break;
 case 130:
  VAR_37 = VAR_16;
  VAR_38 = VAR_19;
  VAR_39 = VAR_18;
  VAR_40 = VAR_15;
  VAR_41 = VAR_17;
  return;
 }


 if (VAR_32->te_sync) {



  VAR_36 = VAR_29
   << VAR_30;
  VAR_36 |= VAR_28
   << VAR_27;
 } else {




  VAR_36 = VAR_31
   << VAR_30;
  VAR_36 |= VAR_26
   << VAR_27;
 }
 FUNC_0(VAR_36, VAR_32->regs + VAR_38);


 VAR_36 = (VAR_35->hdisplay - 1) << VAR_21;
 VAR_36 |= (VAR_35->vdisplay - 1) << VAR_20;
 FUNC_0(VAR_36, VAR_32->regs + VAR_37);





 VAR_36 = VAR_24 |
  VAR_25;
 FUNC_0(VAR_36, VAR_32->regs + VAR_39);
 FUNC_0(0, VAR_32->regs + VAR_40);


 switch (VAR_34) {
 case 129:
  FUNC_0(VAR_22,
         VAR_32->regs + VAR_41);
  break;
 case 128:
  FUNC_0(VAR_23,
         VAR_32->regs + VAR_41);
  break;
 }
}
