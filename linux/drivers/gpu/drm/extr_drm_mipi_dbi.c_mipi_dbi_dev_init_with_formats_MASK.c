
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int vdisplay; int hdisplay; } ;
struct TYPE_9__ {int plane; } ;
struct TYPE_6__ {int command; } ;
struct TYPE_7__ {int max_height; int min_height; int max_width; int min_width; int * funcs; } ;
struct drm_device {TYPE_2__ mode_config; int dev; } ;
struct mipi_dbi_dev {unsigned int rotation; TYPE_3__ mode; TYPE_4__ pipe; int connector; int tx_buf; TYPE_1__ dbi; struct drm_device drm; } ;
struct drm_simple_display_pipe_funcs {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*,int *,int *,int ) ;
 int FUNC_5 (TYPE_3__*,struct drm_display_mode const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*,TYPE_4__*,struct drm_simple_display_pipe_funcs const*,int const*,unsigned int,int const*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_3__*,unsigned int) ;

int FUNC_9(struct mipi_dbi_dev *VAR_7,
       const struct drm_simple_display_pipe_funcs *VAR_8,
       const uint32_t *VAR_9, unsigned int VAR_10,
       const struct drm_display_mode *VAR_11,
       unsigned int VAR_12, size_t VAR_13)
{
 static const uint64_t VAR_14[] = {
  128,
  129
 };
 struct drm_device *VAR_15 = &VAR_7->drm;
 int VAR_16;

 if (!VAR_7->dbi.command)
  return -VAR_1;

 VAR_7->tx_buf = FUNC_2(VAR_15->dev, VAR_13, VAR_3);
 if (!VAR_7->tx_buf)
  return -VAR_2;

 FUNC_5(&VAR_7->mode, VAR_11);
 VAR_16 = FUNC_8(&VAR_7->mode, VAR_12);
 if (VAR_16) {
  FUNC_1("Illegal rotation value %u\n", VAR_12);
  return -VAR_1;
 }

 FUNC_3(&VAR_7->connector, &VAR_5);
 VAR_16 = FUNC_4(VAR_15, &VAR_7->connector, &VAR_4,
     VAR_0);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_7(VAR_15, &VAR_7->pipe, VAR_8, VAR_9, VAR_10,
        VAR_14, &VAR_7->connector);
 if (VAR_16)
  return VAR_16;

 FUNC_6(&VAR_7->pipe.plane);

 VAR_15->mode_config.funcs = &VAR_6;
 VAR_15->mode_config.min_width = VAR_7->mode.hdisplay;
 VAR_15->mode_config.max_width = VAR_7->mode.hdisplay;
 VAR_15->mode_config.min_height = VAR_7->mode.vdisplay;
 VAR_15->mode_config.max_height = VAR_7->mode.vdisplay;
 VAR_7->rotation = VAR_12;

 FUNC_0("rotation = %u\n", VAR_12);

 return 0;
}
