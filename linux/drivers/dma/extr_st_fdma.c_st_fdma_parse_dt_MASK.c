
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_fdma_driverdata {char* name; int id; } ;
struct st_fdma_dev {int nr_channels; int fw_name; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1,
   const struct st_fdma_driverdata *VAR_2,
   struct st_fdma_dev *VAR_3)
{
 FUNC_1(VAR_3->fw_name, VAR_0, "fdma_%s_%d.elf",
  VAR_2->name, VAR_2->id);

 return FUNC_0(VAR_1->dev.of_node, "dma-channels",
        &VAR_3->nr_channels);
}
