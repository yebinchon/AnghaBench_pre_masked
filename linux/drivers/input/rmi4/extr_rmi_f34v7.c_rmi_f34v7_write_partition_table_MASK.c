
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
struct TYPE_8__ {int size; } ;
struct TYPE_9__ {TYPE_3__ bl_config; } ;
struct TYPE_6__ {int bl_config; } ;
struct TYPE_10__ {int config_size; int block_size; int read_config_buf_size; int config_block_count; TYPE_4__ img; scalar_t__ read_config_buf; scalar_t__ config_data; void* config_area; TYPE_1__ blkcount; } ;
struct f34_data {TYPE_5__ v7; TYPE_2__* fn; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct f34_data*) ;
 int FUNC_3 (struct f34_data*,int,int ) ;
 int FUNC_4 (struct f34_data*) ;
 int FUNC_5 (struct f34_data*) ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct f34_data *VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->v7.blkcount.bl_config;
 VAR_4->v7.config_area = VAR_2;
 VAR_4->v7.config_size = VAR_4->v7.block_size * VAR_5;
 FUNC_0(&VAR_4->fn->dev, VAR_4->v7.read_config_buf);
 VAR_4->v7.read_config_buf = FUNC_1(&VAR_4->fn->dev,
            VAR_4->v7.config_size, VAR_1);
 if (!VAR_4->v7.read_config_buf) {
  VAR_4->v7.read_config_buf_size = 0;
  return -VAR_0;
 }

 VAR_4->v7.read_config_buf_size = VAR_4->v7.config_size;

 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->v7.config_area = VAR_2;
 VAR_4->v7.config_data = VAR_4->v7.read_config_buf;
 VAR_4->v7.config_size = VAR_4->v7.img.bl_config.size;
 VAR_4->v7.config_block_count = VAR_4->v7.config_size / VAR_4->v7.block_size;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
