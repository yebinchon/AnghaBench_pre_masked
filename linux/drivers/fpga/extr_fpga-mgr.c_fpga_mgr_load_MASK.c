
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager {int dummy; } ;
struct fpga_image_info {scalar_t__ firmware_name; scalar_t__ count; scalar_t__ buf; scalar_t__ sgt; } ;


 int VAR_0 ;
 int FUNC_0 (struct fpga_manager*,struct fpga_image_info*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct fpga_manager*,struct fpga_image_info*,scalar_t__) ;
 int FUNC_2 (struct fpga_manager*,struct fpga_image_info*,scalar_t__) ;

int FUNC_3(struct fpga_manager *VAR_1, struct fpga_image_info *VAR_2)
{
 if (VAR_2->sgt)
  return FUNC_1(VAR_1, VAR_2, VAR_2->sgt);
 if (VAR_2->buf && VAR_2->count)
  return FUNC_0(VAR_1, VAR_2, VAR_2->buf, VAR_2->count);
 if (VAR_2->firmware_name)
  return FUNC_2(VAR_1, VAR_2, VAR_2->firmware_name);
 return -VAR_0;
}
