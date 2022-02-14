
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
struct TYPE_8__ {int dp_config; } ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_1__ dp_config; } ;
struct TYPE_9__ {int block_size; TYPE_3__ blkcount; TYPE_2__ img; } ;
struct f34_data {int update_size; TYPE_5__* fn; TYPE_4__ v7; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct f34_data *VAR_1)
{
 u16 VAR_2;

 VAR_2 = VAR_1->v7.img.dp_config.size / VAR_1->v7.block_size;
 VAR_1->update_size += VAR_2;

 if (VAR_2 != VAR_1->v7.blkcount.dp_config) {
  FUNC_0(&VAR_1->fn->dev, "Display config size mismatch\n");
  return -VAR_0;
 }

 return 0;
}
