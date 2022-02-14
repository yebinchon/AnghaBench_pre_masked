
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_manager {int state; int dev; TYPE_1__* mops; } ;
struct fpga_image_info {int dummy; } ;
struct TYPE_2__ {int (* write_init ) (struct fpga_manager*,struct fpga_image_info*,char const*,int ) ;int initial_header_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct fpga_manager*,struct fpga_image_info*,char const*,int ) ;
 int FUNC_3 (struct fpga_manager*,struct fpga_image_info*,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_2,
       struct fpga_image_info *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 VAR_2->state = VAR_0;
 if (!VAR_2->mops->initial_header_size)
  VAR_6 = VAR_2->mops->write_init(VAR_2, VAR_3, ((void*)0), 0);
 else
  VAR_6 = VAR_2->mops->write_init(
      VAR_2, VAR_3, VAR_4, FUNC_1(VAR_2->mops->initial_header_size, VAR_5));

 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "Error preparing FPGA for writing\n");
  VAR_2->state = VAR_1;
  return VAR_6;
 }

 return 0;
}
