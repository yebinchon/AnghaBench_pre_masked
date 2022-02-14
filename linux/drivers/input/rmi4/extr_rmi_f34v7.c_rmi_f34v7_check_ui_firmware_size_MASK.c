
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {int ui_firmware; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_8__ {TYPE_2__ ui_firmware; } ;
struct TYPE_10__ {int block_size; TYPE_4__ blkcount; TYPE_3__ img; } ;
struct f34_data {int update_size; TYPE_5__ v7; TYPE_1__* fn; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct f34_data *VAR_1)
{
 u16 VAR_2;

 VAR_2 = VAR_1->v7.img.ui_firmware.size / VAR_1->v7.block_size;
 VAR_1->update_size += VAR_2;

 if (VAR_2 != VAR_1->v7.blkcount.ui_firmware) {
  FUNC_0(&VAR_1->fn->dev,
   "UI firmware size mismatch: %d != %d\n",
   VAR_2, VAR_1->v7.blkcount.ui_firmware);
  return -VAR_0;
 }

 return 0;
}
