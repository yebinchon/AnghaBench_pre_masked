
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {int driver_data; } ;
struct device {int coherent_dma_mask; } ;
struct spi_device {int max_speed_hz; struct device dev; } ;
struct TYPE_2__ {int min_width; int max_width; int min_height; int max_height; int * funcs; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct repaper_epd {int stage_time; int bytes_per_scan; int middle_scan; int pre_border_byte; int width; int height; int factored_stage_time; int connector; int pipe; void* current_frame; void* line_buffer; struct drm_display_mode const* mode; void* border_byte; int channel_select; void* border; void* thermal; void* busy; void* reset; void* discharge; void* panel_on; struct spi_device* spi; struct drm_device drm; } ;
struct of_device_id {scalar_t__ data; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
typedef enum repaper_model { ____Placeholder_repaper_model } repaper_model ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,char const**) ;
 int FUNC_8 (struct device*,struct drm_device*,int *) ;
 void* FUNC_9 (struct device*,char*,int ) ;
 void* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct drm_device*,int *,int *,int ) ;
 int FUNC_14 (struct drm_device*,int ) ;
 int FUNC_15 (struct drm_device*,int ) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct drm_device*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_19 (struct repaper_epd*) ;
 struct repaper_epd* FUNC_20 (int,int ) ;
 struct of_device_id* FUNC_21 (int ,struct device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct drm_display_mode VAR_14 ;
 int VAR_15 ;
 struct drm_display_mode VAR_16 ;
 int VAR_17 ;
 struct drm_display_mode VAR_18 ;
 int VAR_19 ;
 struct drm_display_mode VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct spi_device_id* FUNC_22 (struct spi_device*) ;
 int FUNC_23 (struct spi_device*,struct drm_device*) ;
 void* FUNC_24 (char const*) ;

__attribute__((used)) static int FUNC_25(struct spi_device *VAR_25)
{
 const struct drm_display_mode *VAR_26;
 const struct spi_device_id *VAR_27;
 const struct of_device_id *VAR_28;
 struct device *VAR_29 = &VAR_25->dev;
 enum repaper_model VAR_30;
 const char *VAR_31;
 struct repaper_epd *VAR_32;
 size_t VAR_33;
 struct drm_device *VAR_34;
 int VAR_35;

 VAR_28 = FUNC_21(VAR_23, VAR_29);
 if (VAR_28) {
  VAR_30 = (enum repaper_model)VAR_28->data;
 } else {
  VAR_27 = FUNC_22(VAR_25);
  VAR_30 = VAR_27->driver_data;
 }


 if (!VAR_29->coherent_dma_mask) {
  VAR_35 = FUNC_11(VAR_29, FUNC_1(32));
  if (VAR_35) {
   FUNC_6(VAR_29, "Failed to set dma mask %d\n", VAR_35);
   return VAR_35;
  }
 }

 VAR_32 = FUNC_20(sizeof(*VAR_32), VAR_4);
 if (!VAR_32)
  return -VAR_2;

 VAR_34 = &VAR_32->drm;

 VAR_35 = FUNC_8(VAR_29, VAR_34, &VAR_12);
 if (VAR_35) {
  FUNC_19(VAR_32);
  return VAR_35;
 }

 FUNC_16(VAR_34);
 VAR_34->mode_config.funcs = &VAR_22;

 VAR_32->spi = VAR_25;

 VAR_32->panel_on = FUNC_9(VAR_29, "panel-on", VAR_6);
 if (FUNC_4(VAR_32->panel_on)) {
  VAR_35 = FUNC_5(VAR_32->panel_on);
  if (VAR_35 != -VAR_3)
   FUNC_3(VAR_29, "Failed to get gpio 'panel-on'\n");
  return VAR_35;
 }

 VAR_32->discharge = FUNC_9(VAR_29, "discharge", VAR_6);
 if (FUNC_4(VAR_32->discharge)) {
  VAR_35 = FUNC_5(VAR_32->discharge);
  if (VAR_35 != -VAR_3)
   FUNC_3(VAR_29, "Failed to get gpio 'discharge'\n");
  return VAR_35;
 }

 VAR_32->reset = FUNC_9(VAR_29, "reset", VAR_6);
 if (FUNC_4(VAR_32->reset)) {
  VAR_35 = FUNC_5(VAR_32->reset);
  if (VAR_35 != -VAR_3)
   FUNC_3(VAR_29, "Failed to get gpio 'reset'\n");
  return VAR_35;
 }

 VAR_32->busy = FUNC_9(VAR_29, "busy", VAR_5);
 if (FUNC_4(VAR_32->busy)) {
  VAR_35 = FUNC_5(VAR_32->busy);
  if (VAR_35 != -VAR_3)
   FUNC_3(VAR_29, "Failed to get gpio 'busy'\n");
  return VAR_35;
 }

 if (!FUNC_7(VAR_29, "pervasive,thermal-zone",
      &VAR_31)) {
  VAR_32->thermal = FUNC_24(VAR_31);
  if (FUNC_4(VAR_32->thermal)) {
   FUNC_3(VAR_29, "Failed to get thermal zone: %s\n", VAR_31);
   return FUNC_5(VAR_32->thermal);
  }
 }

 switch (VAR_30) {
 case 131:
  VAR_26 = &VAR_14;
  VAR_32->channel_select = VAR_13;
  VAR_32->stage_time = 480;
  VAR_32->bytes_per_scan = 96 / 4;
  VAR_32->middle_scan = 1;
  VAR_32->pre_border_byte = 0;
  VAR_32->border_byte = VAR_9;
  break;

 case 130:
  VAR_26 = &VAR_16;
  VAR_32->channel_select = VAR_15;
  VAR_32->stage_time = 480;
  VAR_32->bytes_per_scan = 128 / 4 / 2;
  VAR_32->middle_scan = 0;
  VAR_32->pre_border_byte = 0;
  VAR_32->border_byte = VAR_8;
  break;

 case 129:
  VAR_26 = &VAR_18;
  VAR_32->channel_select = VAR_17;
  VAR_32->stage_time = 480;
  VAR_32->bytes_per_scan = 96 / 4;
  VAR_32->middle_scan = 1;
  VAR_32->pre_border_byte = 1;
  VAR_32->border_byte = VAR_7;
  break;

 case 128:
  VAR_32->border = FUNC_9(VAR_29, "border", VAR_6);
  if (FUNC_4(VAR_32->border)) {
   VAR_35 = FUNC_5(VAR_32->border);
   if (VAR_35 != -VAR_3)
    FUNC_3(VAR_29, "Failed to get gpio 'border'\n");
   return VAR_35;
  }

  VAR_26 = &VAR_20;
  VAR_32->channel_select = VAR_19;
  VAR_32->stage_time = 630;
  VAR_32->bytes_per_scan = 176 / 4;
  VAR_32->middle_scan = 1;
  VAR_32->pre_border_byte = 1;
  VAR_32->border_byte = VAR_7;
  break;

 default:
  return -VAR_1;
 }

 VAR_32->mode = VAR_26;
 VAR_32->width = VAR_26->hdisplay;
 VAR_32->height = VAR_26->vdisplay;
 VAR_32->factored_stage_time = VAR_32->stage_time;

 VAR_33 = 2 * VAR_32->width / 8 + VAR_32->bytes_per_scan + 2;
 VAR_32->line_buffer = FUNC_10(VAR_29, VAR_33, VAR_4);
 if (!VAR_32->line_buffer)
  return -VAR_2;

 VAR_32->current_frame = FUNC_10(VAR_29, VAR_32->width * VAR_32->height / 8,
       VAR_4);
 if (!VAR_32->current_frame)
  return -VAR_2;

 VAR_34->mode_config.min_width = VAR_26->hdisplay;
 VAR_34->mode_config.max_width = VAR_26->hdisplay;
 VAR_34->mode_config.min_height = VAR_26->vdisplay;
 VAR_34->mode_config.max_height = VAR_26->vdisplay;

 FUNC_12(&VAR_32->connector, &VAR_11);
 VAR_35 = FUNC_13(VAR_34, &VAR_32->connector, &VAR_10,
     VAR_0);
 if (VAR_35)
  return VAR_35;

 VAR_35 = FUNC_18(VAR_34, &VAR_32->pipe, &VAR_24,
        VAR_21, FUNC_0(VAR_21),
        ((void*)0), &VAR_32->connector);
 if (VAR_35)
  return VAR_35;

 FUNC_17(VAR_34);

 VAR_35 = FUNC_14(VAR_34, 0);
 if (VAR_35)
  return VAR_35;

 FUNC_23(VAR_25, VAR_34);

 FUNC_2("SPI speed: %uMHz\n", VAR_25->max_speed_hz / 1000000);

 FUNC_15(VAR_34, 0);

 return 0;
}
