
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_device {unsigned int num_channels; int rate; int clk; int mapbase; int * channels; struct platform_device* pdev; int model; int lock; } ;
struct sh_timer_config {int channels_mask; } ;
struct platform_device_id {int driver_data; } ;
struct TYPE_3__ {struct sh_timer_config* platform_data; scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; struct platform_device_id* id_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (unsigned int,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,struct sh_tmu_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned int,int,int,struct sh_tmu_device*) ;
 int FUNC_18 (struct sh_tmu_device*) ;
 int FUNC_19 (struct sh_tmu_device*) ;

__attribute__((used)) static int FUNC_20(struct sh_tmu_device *VAR_4, struct platform_device *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_4->pdev = VAR_5;

 FUNC_16(&VAR_4->lock);

 if (FUNC_0(VAR_0) && VAR_5->dev.of_node) {
  VAR_7 = FUNC_19(VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
 } else if (VAR_5->dev.platform_data) {
  const struct platform_device_id *VAR_8 = VAR_5->id_entry;
  struct sh_timer_config *VAR_9 = VAR_5->dev.platform_data;

  VAR_4->model = VAR_8->driver_data;
  VAR_4->num_channels = FUNC_11(VAR_9->channels_mask);
 } else {
  FUNC_10(&VAR_4->pdev->dev, "missing platform data\n");
  return -VAR_2;
 }


 VAR_4->clk = FUNC_5(&VAR_4->pdev->dev, "fck");
 if (FUNC_1(VAR_4->clk)) {
  FUNC_10(&VAR_4->pdev->dev, "cannot get clock\n");
  return FUNC_2(VAR_4->clk);
 }

 VAR_7 = FUNC_7(VAR_4->clk);
 if (VAR_7 < 0)
  goto err_clk_put;


 VAR_7 = FUNC_4(VAR_4->clk);
 if (VAR_7 < 0)
  goto err_clk_unprepare;

 VAR_4->rate = FUNC_6(VAR_4->clk) / 4;
 FUNC_3(VAR_4->clk);


 VAR_7 = FUNC_18(VAR_4);
 if (VAR_7 < 0) {
  FUNC_10(&VAR_4->pdev->dev, "failed to remap I/O memory\n");
  goto err_clk_unprepare;
 }


 VAR_4->channels = FUNC_13(VAR_4->num_channels, sizeof(*VAR_4->channels),
    VAR_3);
 if (VAR_4->channels == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto err_unmap;
 }





 for (VAR_6 = 0; VAR_6 < VAR_4->num_channels; ++VAR_6) {
  VAR_7 = FUNC_17(&VAR_4->channels[VAR_6], VAR_6,
        VAR_6 == 0, VAR_6 == 1, VAR_4);
  if (VAR_7 < 0)
   goto err_unmap;
 }

 FUNC_15(VAR_5, VAR_4);

 return 0;

err_unmap:
 FUNC_14(VAR_4->channels);
 FUNC_12(VAR_4->mapbase);
err_clk_unprepare:
 FUNC_9(VAR_4->clk);
err_clk_put:
 FUNC_8(VAR_4->clk);
 return VAR_7;
}
