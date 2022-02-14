
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ window_size; scalar_t__ switch_bank; struct map_info map; } ;
struct adm5120_flash_info {TYPE_1__ amap; TYPE_2__* mtd; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct map_info*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct adm5120_flash_info *VAR_1)
{
 struct map_info *VAR_2 = &VAR_1->amap.map;

 if (VAR_1->mtd->size <= VAR_0)

  return;

 if (VAR_1->amap.switch_bank) {
  VAR_1->amap.window_size = VAR_1->mtd->size;
  return;
 }

 FUNC_0(VAR_2, "reduce visibility from %ldKiB to %ldKiB\n",
  (unsigned long)VAR_2->size >> 10,
  (unsigned long)VAR_1->mtd->size >> 10);

 VAR_1->mtd->size = VAR_1->amap.window_size;
}
