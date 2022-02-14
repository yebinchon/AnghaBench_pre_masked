
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_manager {int state; int dev; TYPE_1__* mops; } ;
struct fpga_image_info {int dummy; } ;
struct TYPE_2__ {int (* write ) (struct fpga_manager*,char const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fpga_manager*,struct fpga_image_info*) ;
 int FUNC_2 (struct fpga_manager*,struct fpga_image_info*,char const*,size_t) ;
 int FUNC_3 (struct fpga_manager*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_2,
        struct fpga_image_info *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;




 VAR_2->state = VAR_0;
 VAR_6 = VAR_2->mops->write(VAR_2, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "Error while writing image data to FPGA\n");
  VAR_2->state = VAR_1;
  return VAR_6;
 }

 return FUNC_1(VAR_2, VAR_3);
}
