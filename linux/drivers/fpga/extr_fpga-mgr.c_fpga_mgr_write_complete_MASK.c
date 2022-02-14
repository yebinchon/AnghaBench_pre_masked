
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_manager {int state; int dev; TYPE_1__* mops; } ;
struct fpga_image_info {int dummy; } ;
struct TYPE_2__ {int (* write_complete ) (struct fpga_manager*,struct fpga_image_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fpga_manager*,struct fpga_image_info*) ;

__attribute__((used)) static int FUNC_2(struct fpga_manager *VAR_3,
       struct fpga_image_info *VAR_4)
{
 int VAR_5;

 VAR_3->state = VAR_1;
 VAR_5 = VAR_3->mops->write_complete(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "Error after writing image data to FPGA\n");
  VAR_3->state = VAR_2;
  return VAR_5;
 }
 VAR_3->state = VAR_0;

 return 0;
}
