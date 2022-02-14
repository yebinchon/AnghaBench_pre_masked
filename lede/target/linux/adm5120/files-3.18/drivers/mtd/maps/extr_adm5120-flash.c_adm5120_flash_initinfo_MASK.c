
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {struct adm5120_flash_platform_data* platform_data; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct map_info {int bankwidth; scalar_t__ phys; int set_vpp; int copy_from; int write; int read; int size; int name; } ;
struct flash_desc {size_t srs_shift; scalar_t__ phys; } ;
struct adm5120_flash_platform_data {scalar_t__ window_size; int switch_bank; int set_vpp; } ;
struct TYPE_3__ {scalar_t__ window_size; int switch_bank; struct map_info map; } ;
struct adm5120_flash_info {TYPE_1__ amap; struct platform_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct map_info*,char*) ;
 int FUNC_1 (struct map_info*,char*,unsigned long,unsigned long,int) ;
 size_t VAR_2 ;
 size_t FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int* VAR_10 ;
 struct flash_desc* VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_5 (struct map_info*) ;

__attribute__((used)) static int FUNC_6(struct adm5120_flash_info *VAR_13,
  struct platform_device *VAR_14)
{
 struct map_info *VAR_15 = &VAR_13->amap.map;
 struct adm5120_flash_platform_data *VAR_16 = VAR_14->dev.platform_data;
 struct flash_desc *VAR_17;
 u32 VAR_18 = 0;

 VAR_15->name = FUNC_4(&VAR_14->dev);

 if (VAR_14->id > 1) {
  FUNC_0(VAR_15, "invalid flash id\n");
  goto err_out;
 }

 VAR_17 = &VAR_11[VAR_14->id];

 if (VAR_16)
  VAR_13->amap.window_size = VAR_16->window_size;

 if (VAR_13->amap.window_size == 0) {

  VAR_18 = FUNC_3(VAR_6) >> VAR_17->srs_shift;
  VAR_18 &= VAR_2;
  VAR_13->amap.window_size = VAR_12[VAR_18];
 }

 if (VAR_13->amap.window_size == 0) {
  FUNC_0(VAR_15, "unable to determine window size\n");
  goto err_out;
 }


 switch (VAR_14->id) {
 case 0:
  VAR_18 = FUNC_2(VAR_4) & VAR_5;
  break;
 case 1:
  VAR_18 = FUNC_2(VAR_3) & VAR_5;
  break;
 }
 VAR_15->bankwidth = VAR_10[VAR_18];
 if (VAR_15->bankwidth == 0) {
  FUNC_0(VAR_15, "invalid bus width detected\n");
  goto err_out;
 }

 VAR_15->phys = VAR_17->phys;
 VAR_15->size = VAR_0;

 FUNC_5(VAR_15);
 VAR_15->read = VAR_8;
 VAR_15->write = VAR_9;
 VAR_15->copy_from = VAR_7;

 if (VAR_16) {
  VAR_15->set_vpp = VAR_16->set_vpp;
  VAR_13->amap.switch_bank = VAR_16->switch_bank;
 }

 VAR_13->dev = VAR_14;

 FUNC_1(VAR_15, "probing at 0x%lX, size:%ldKiB, width:%d bits\n",
  (unsigned long)VAR_15->phys,
  (unsigned long)VAR_13->amap.window_size >> 10,
  VAR_15->bankwidth*8);

 return 0;

err_out:
 return -VAR_1;
}
