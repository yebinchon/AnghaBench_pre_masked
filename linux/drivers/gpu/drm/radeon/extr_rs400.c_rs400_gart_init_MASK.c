
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int table_size; int num_gpu_pages; scalar_t__ ptr; } ;
struct TYPE_3__ {int gtt_size; } ;
struct radeon_device {TYPE_2__ gart; TYPE_1__ mc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;

int FUNC_5(struct radeon_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->gart.ptr) {
  FUNC_1(1, "RS400 GART already initialized\n");
  return 0;
 }

 switch(VAR_1->mc.gtt_size / (1024 * 1024)) {
 case 32:
 case 64:
 case 128:
 case 256:
 case 512:
 case 1024:
 case 2048:
  break;
 default:
  return -VAR_0;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;
 if (FUNC_4(VAR_1))
  FUNC_0("Failed to register debugfs file for RS400 GART !\n");
 VAR_1->gart.table_size = VAR_1->gart.num_gpu_pages * 4;
 return FUNC_3(VAR_1);
}
