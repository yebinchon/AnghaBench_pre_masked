
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fpga_manager {int dev; } ;
struct fpga_image_info {scalar_t__ config_complete_timeout_us; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct fpga_manager*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_2,
          struct fpga_image_info *VAR_3)
{
 u32 VAR_4 = 0;

 do {
  switch (FUNC_0(VAR_2)) {
  case 128:
   return -VAR_0;

  case 129:
   FUNC_2(&VAR_2->dev,
     "successful partial reconfiguration\n");
   return 0;

  default:
   break;
  }
  FUNC_3(1);
 } while (VAR_3->config_complete_timeout_us > VAR_4++);

 FUNC_1(&VAR_2->dev, "timed out waiting for write to complete\n");
 return -VAR_1;
}
