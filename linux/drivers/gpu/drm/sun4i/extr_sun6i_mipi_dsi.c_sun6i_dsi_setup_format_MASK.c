
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sun6i_dsi {int regs; struct mipi_dsi_device* device; } ;
struct mipi_dsi_device {int format; int channel; } ;
struct drm_display_mode {int hdisplay; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct sun6i_dsi *VAR_9,
       struct drm_display_mode *VAR_10)
{
 struct mipi_dsi_device *VAR_11 = VAR_9->device;
 u32 VAR_12 = FUNC_6(VAR_11->channel);
 u8 VAR_13, VAR_14;
 u16 VAR_15;





 switch (VAR_11->format) {
 case 128:
  VAR_13 = VAR_2;
  VAR_14 = 8;
  break;
 case 130:
  VAR_13 = VAR_3;
  VAR_14 = 9;
  break;
 case 129:
  VAR_13 = VAR_1;
  VAR_14 = 10;
  break;
 case 131:
  VAR_13 = VAR_0;
  VAR_14 = 11;
  break;
 default:
  return;
 }
 VAR_12 |= FUNC_4(VAR_13);

 VAR_15 = VAR_10->hdisplay * FUNC_8(VAR_11->format) / 8;
 VAR_12 |= FUNC_7(VAR_15);
 VAR_12 |= FUNC_5(FUNC_10(VAR_12));

 FUNC_9(VAR_9->regs, VAR_8, VAR_12);

 FUNC_9(VAR_9->regs, VAR_6,
       FUNC_1(0xffff));

 FUNC_9(VAR_9->regs, VAR_7,
       FUNC_2(0xffff) |
       FUNC_3(0xffff));

 FUNC_9(VAR_9->regs, VAR_5,
       VAR_4 |
       FUNC_0(VAR_14));
}
