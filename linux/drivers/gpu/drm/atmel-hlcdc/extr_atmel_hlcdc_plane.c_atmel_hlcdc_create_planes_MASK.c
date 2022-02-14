
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_device {int dev; struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_layer_desc {scalar_t__ type; } ;
struct atmel_hlcdc_dma_channel_dscr {int dummy; } ;
struct atmel_hlcdc_dc {int dscrpool; TYPE_1__* desc; } ;
struct TYPE_2__ {int nlayers; struct atmel_hlcdc_layer_desc* layers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,struct atmel_hlcdc_layer_desc const*) ;
 int FUNC_1 (char*,int ,int,int,int ) ;

int FUNC_2(struct drm_device *VAR_4)
{
 struct atmel_hlcdc_dc *VAR_5 = VAR_4->dev_private;
 const struct atmel_hlcdc_layer_desc *VAR_6 = VAR_5->desc->layers;
 int VAR_7 = VAR_5->desc->nlayers;
 int VAR_8, VAR_9;

 VAR_5->dscrpool = FUNC_1("atmel-hlcdc-dscr", VAR_4->dev,
    sizeof(struct atmel_hlcdc_dma_channel_dscr),
    sizeof(u64), 0);
 if (!VAR_5->dscrpool)
  return -VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6[VAR_8].type != VAR_0 &&
      VAR_6[VAR_8].type != VAR_2 &&
      VAR_6[VAR_8].type != VAR_1)
   continue;

  VAR_9 = FUNC_0(VAR_4, &VAR_6[VAR_8]);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
