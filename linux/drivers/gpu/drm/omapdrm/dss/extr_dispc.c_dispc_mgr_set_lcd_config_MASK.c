
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_lcd_mgr_config {int lcden_sig_polarity; int video_port_width; int clock_info; int fifohandcheck; int stallmode; int io_pad_mode; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (struct dispc_device*,int ) ;
 int FUNC_1 (struct dispc_device*,int,int ) ;
 int FUNC_2 (struct dispc_device*,int,int ) ;
 int FUNC_3 (struct dispc_device*,int,int *) ;
 int FUNC_4 (struct dispc_device*,int ) ;
 int FUNC_5 (struct dispc_device*,int) ;
 int FUNC_6 (struct dispc_device*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct dispc_device *VAR_0,
         enum omap_channel VAR_1,
         const struct dss_lcd_mgr_config *VAR_2)
{
 FUNC_4(VAR_0, VAR_2->io_pad_mode);

 FUNC_2(VAR_0, VAR_1, VAR_2->stallmode);
 FUNC_1(VAR_0, VAR_1, VAR_2->fifohandcheck);

 FUNC_3(VAR_0, VAR_1, &VAR_2->clock_info);

 FUNC_6(VAR_0, VAR_1, VAR_2->video_port_width);

 FUNC_0(VAR_0, VAR_2->lcden_sig_polarity);

 FUNC_5(VAR_0, VAR_1);
}
