
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct adm5120_flash_platform_data* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct map_info {scalar_t__ size; int bankwidth; scalar_t__ phys; int virt; } ;
struct adm5120_flash_platform_data {int nr_parts; int parts; } ;
struct TYPE_5__ {scalar_t__ window_size; struct map_info map; } ;
struct adm5120_flash_info {TYPE_2__* mtd; TYPE_1__ amap; int res; } ;
struct TYPE_6__ {scalar_t__ size; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct map_info*,char*) ;
 int FUNC_1 (struct map_info*,char*,unsigned long,...) ;
 int VAR_4 ;
 int FUNC_2 (struct adm5120_flash_info*) ;
 int FUNC_3 (struct adm5120_flash_info*,struct platform_device*) ;
 int FUNC_4 (struct adm5120_flash_info*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 TYPE_2__* FUNC_7 (char const*,struct map_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct adm5120_flash_info* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_12 (struct platform_device*,struct adm5120_flash_info*) ;
 char** VAR_6 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct adm5120_flash_platform_data *VAR_8;
 struct adm5120_flash_info *VAR_9;
 struct map_info *VAR_10;
 const char **VAR_11;
 int VAR_12;

 VAR_8 = VAR_7->dev.platform_data;
 if (!VAR_8) {
  FUNC_6(&VAR_7->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_3);
 if (VAR_9 == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto err_out;
 }

 FUNC_12(VAR_7, VAR_9);

 VAR_12 = FUNC_3(VAR_9, VAR_7);
 if (VAR_12)
  goto err_out;

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12)
  goto err_out;

 VAR_10 = &VAR_9->amap.map;
 for (VAR_11 = VAR_6; VAR_9->mtd == ((void*)0) && *VAR_11 != ((void*)0);
  VAR_11++)
  VAR_9->mtd = FUNC_7(*VAR_11, VAR_10);

 if (VAR_9->mtd == ((void*)0)) {
  FUNC_0(VAR_10, "map_probe failed\n");
  VAR_12 = -VAR_2;
  goto err_out;
 }

 FUNC_2(VAR_9);

 if (VAR_9->mtd->size < VAR_9->amap.window_size) {

  FUNC_8(VAR_10->virt);
  FUNC_13(VAR_9->res);
  FUNC_9(VAR_9->res);

  VAR_9->amap.window_size = VAR_9->mtd->size;
  VAR_10->size = VAR_9->mtd->size;
  FUNC_1(VAR_10, "reducing map size to %ldKiB\n",
   (unsigned long)VAR_10->size >> 10);
  VAR_12 = FUNC_4(VAR_9);
  if (VAR_12)
   goto err_out;
 }

 FUNC_1(VAR_10, "found at 0x%lX, size:%ldKiB, width:%d bits\n",
  (unsigned long)VAR_10->phys, (unsigned long)VAR_9->mtd->size >> 10,
  VAR_10->bankwidth*8);

 VAR_9->mtd->owner = VAR_4;

 VAR_12 = FUNC_11(VAR_9->mtd, VAR_5, 0,
       VAR_8->parts, VAR_8->nr_parts);
 if (VAR_12)
  goto err_out;

 return 0;

err_out:
 FUNC_5(VAR_7);
 return VAR_12;
}
