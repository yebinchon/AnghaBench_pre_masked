
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct hdmi_wp_data {int dummy; } ;
struct hdmi_video_format {int packing_mode; } ;
struct hdmi_core_vid_config {int packet_mode; } ;
struct hdmi_core_data {int dummy; } ;
struct TYPE_2__ {int quantization_range; } ;
struct hdmi_config {scalar_t__ hdmi_dvi_mode; TYPE_1__ infoframe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdmi_core_data*) ;
 int FUNC_1 (struct hdmi_core_data*) ;
 int FUNC_2 (struct hdmi_core_data*) ;
 int FUNC_3 (struct hdmi_core_data*) ;
 int FUNC_4 (struct hdmi_core_data*) ;
 int FUNC_5 (struct hdmi_core_data*) ;
 int FUNC_6 (struct hdmi_core_vid_config*,struct hdmi_config*) ;
 int FUNC_7 (struct hdmi_core_data*) ;
 int FUNC_8 (struct hdmi_core_data*,struct hdmi_core_vid_config*) ;
 int FUNC_9 (struct hdmi_core_data*,TYPE_1__*) ;
 int FUNC_10 (struct hdmi_video_format*,struct videomode*,struct hdmi_config*) ;
 int FUNC_11 (struct hdmi_wp_data*,struct hdmi_video_format*) ;
 int FUNC_12 (struct hdmi_wp_data*,struct videomode*) ;
 int FUNC_13 (struct hdmi_wp_data*,struct videomode*) ;

void FUNC_14(struct hdmi_core_data *VAR_4, struct hdmi_wp_data *VAR_5,
  struct hdmi_config *VAR_6)
{
 struct videomode VAR_7;
 struct hdmi_video_format VAR_8;
 struct hdmi_core_vid_config VAR_9;

 FUNC_7(VAR_4);

 FUNC_6(&VAR_9, VAR_6);

 FUNC_10(&VAR_8, &VAR_7, VAR_6);

 FUNC_13(VAR_5, &VAR_7);


 VAR_8.packing_mode = VAR_2;

 FUNC_11(VAR_5, &VAR_8);

 FUNC_12(VAR_5, &VAR_7);


 FUNC_3(VAR_4);
 VAR_6->infoframe.quantization_range = VAR_3;




 VAR_9.packet_mode = VAR_1;

 FUNC_8(VAR_4, &VAR_9);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4);

 if (VAR_6->hdmi_dvi_mode == VAR_0)
  FUNC_9(VAR_4, &VAR_6->infoframe);

 FUNC_5(VAR_4);

 FUNC_4(VAR_4);
}
