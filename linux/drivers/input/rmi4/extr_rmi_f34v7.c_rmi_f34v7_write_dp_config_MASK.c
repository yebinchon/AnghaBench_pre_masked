
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int data; } ;
struct TYPE_5__ {TYPE_1__ dp_config; } ;
struct TYPE_6__ {int config_size; int config_block_count; int block_size; TYPE_2__ img; int config_data; int config_area; } ;
struct f34_data {TYPE_3__ v7; } ;


 int FUNC_0 (struct f34_data*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct f34_data *VAR_1)
{
 VAR_1->v7.config_area = VAR_0;
 VAR_1->v7.config_data = VAR_1->v7.img.dp_config.data;
 VAR_1->v7.config_size = VAR_1->v7.img.dp_config.size;
 VAR_1->v7.config_block_count = VAR_1->v7.config_size / VAR_1->v7.block_size;

 return FUNC_0(VAR_1);
}
