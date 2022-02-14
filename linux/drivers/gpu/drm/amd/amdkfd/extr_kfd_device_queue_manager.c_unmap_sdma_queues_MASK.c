
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_queue_manager {int packets; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* device_info; } ;
struct TYPE_3__ {int num_sdma_engines; int num_xgmi_sdma_engines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct device_queue_manager *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->dev->device_info->num_sdma_engines +
  VAR_2->dev->device_info->num_xgmi_sdma_engines; VAR_3++) {
  VAR_4 = FUNC_0(&VAR_2->packets, VAR_0,
   VAR_1, 0, 0, VAR_3);
  if (VAR_4)
   return VAR_4;
 }
 return VAR_4;
}
