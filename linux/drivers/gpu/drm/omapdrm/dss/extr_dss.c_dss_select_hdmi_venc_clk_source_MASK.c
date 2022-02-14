
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_device {TYPE_1__* feat; } ;
typedef enum omap_dss_output_id { ____Placeholder_omap_dss_output_id } omap_dss_output_id ;
typedef enum dss_hdmi_venc_clk_source_select { ____Placeholder_dss_hdmi_venc_clk_source_select } dss_hdmi_venc_clk_source_select ;
struct TYPE_2__ {int* outputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dss_device*,int ,int,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct dss_device *VAR_6,
         enum dss_hdmi_venc_clk_source_select VAR_7)
{
 enum omap_dss_output_id VAR_8;

 VAR_8 = VAR_6->feat->outputs[VAR_3];


 FUNC_1((VAR_7 == VAR_2) && !(VAR_8 & VAR_5));
 FUNC_1((VAR_7 == VAR_1) && !(VAR_8 & VAR_4));


 if ((VAR_8 & VAR_5) &&
     (VAR_8 & VAR_4))

  FUNC_0(VAR_6, VAR_0, VAR_7, 15, 15);
}
