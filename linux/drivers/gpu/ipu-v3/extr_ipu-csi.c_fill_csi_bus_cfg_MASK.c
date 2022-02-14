
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int field; int code; } ;
struct v4l2_mbus_config {int type; int flags; } ;
struct ipu_csi_bus_config {int ext_vsync; int vsync_pol; int hsync_pol; int pixclk_pol; int clk_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;


 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ipu_csi_bus_config*,int ,int) ;
 int FUNC_2 (struct ipu_csi_bus_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipu_csi_bus_config *VAR_8,
       const struct v4l2_mbus_config *VAR_9,
       const struct v4l2_mbus_framefmt *VAR_10)
{
 int VAR_11;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 VAR_11 = FUNC_1(VAR_8, VAR_10->code, VAR_9->type);
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_9->type) {
 case 128:
  VAR_8->ext_vsync = 1;
  VAR_8->vsync_pol = (VAR_9->flags &
         VAR_7) ? 1 : 0;
  VAR_8->hsync_pol = (VAR_9->flags &
         VAR_5) ? 1 : 0;
  VAR_8->pixclk_pol = (VAR_9->flags &
          VAR_6) ? 1 : 0;
  VAR_8->clk_mode = VAR_2;
  break;
 case 130:
  VAR_8->ext_vsync = 0;
  if (FUNC_0(VAR_10->field) ||
      VAR_10->field == VAR_4)
   VAR_8->clk_mode = VAR_0;
  else
   VAR_8->clk_mode = VAR_1;
  break;
 case 129:




  VAR_8->clk_mode = VAR_3;
  break;
 default:

  break;
 }

 return 0;
}
