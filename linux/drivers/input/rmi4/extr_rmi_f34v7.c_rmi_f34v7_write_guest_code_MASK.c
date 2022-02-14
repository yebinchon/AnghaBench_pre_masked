
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int data; } ;
struct TYPE_5__ {TYPE_1__ guest_code; } ;
struct TYPE_6__ {int block_size; TYPE_2__ img; } ;
struct f34_data {TYPE_3__ v7; } ;


 int FUNC_0 (struct f34_data*,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct f34_data *VAR_1)
{
 return FUNC_0(VAR_1, VAR_1->v7.img.guest_code.data,
         VAR_1->v7.img.guest_code.size /
       VAR_1->v7.block_size,
         VAR_0);
}
