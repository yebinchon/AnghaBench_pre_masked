
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_tcon {int regs; } ;
struct TYPE_2__ {int bpc; int num_bus_formats; int* bus_formats; } ;
struct drm_connector {TYPE_1__ display_info; } ;





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
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct sun4i_tcon *VAR_14,
        const struct drm_connector *VAR_15)
{
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;


 if (!VAR_15)
  return;







 FUNC_0(VAR_14->regs, VAR_8, 0x11111111);
 FUNC_0(VAR_14->regs, VAR_7, 0x11111111);
 FUNC_0(VAR_14->regs, VAR_6, 0x11111111);
 FUNC_0(VAR_14->regs, VAR_5, 0x11111111);
 FUNC_0(VAR_14->regs, VAR_4, 0x11111111);
 FUNC_0(VAR_14->regs, VAR_3, 0x11111111);
 FUNC_0(VAR_14->regs, VAR_9, 0x01010000);
 FUNC_0(VAR_14->regs, VAR_10, 0x15151111);
 FUNC_0(VAR_14->regs, VAR_11, 0x57575555);
 FUNC_0(VAR_14->regs, VAR_12, 0x7f7f7777);


 if (VAR_15->display_info.bpc == 6)
  VAR_17 |= VAR_0;

 if (VAR_15->display_info.num_bus_formats == 1)
  VAR_16 = VAR_15->display_info.bus_formats[0];


 switch (VAR_16) {
 case 130:

  VAR_17 |= VAR_2;
  VAR_17 |= VAR_1;

 case 129:
 case 128:

  VAR_17 |= VAR_0;
  break;
 }


 FUNC_0(VAR_14->regs, VAR_13, VAR_17);
}
