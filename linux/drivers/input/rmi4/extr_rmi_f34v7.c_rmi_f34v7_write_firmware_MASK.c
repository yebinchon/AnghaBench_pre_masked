
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int size; int data; } ;
struct TYPE_5__ {TYPE_1__ ui_firmware; } ;
struct TYPE_6__ {int block_size; TYPE_2__ img; } ;
struct f34_data {TYPE_3__ v7; } ;


 int FUNC_0 (struct f34_data*,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct f34_data *VAR_1)
{
 u16 VAR_2;

 VAR_2 = VAR_1->v7.img.ui_firmware.size / VAR_1->v7.block_size;

 return FUNC_0(VAR_1, VAR_1->v7.img.ui_firmware.data,
         VAR_2, VAR_0);
}
