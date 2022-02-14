
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_fpga_priv {int flags; } ;
struct fpga_manager {struct zynqmp_fpga_priv* priv; } ;
struct fpga_image_info {int flags; } ;



__attribute__((used)) static int FUNC_0(struct fpga_manager *VAR_0,
          struct fpga_image_info *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct zynqmp_fpga_priv *VAR_4;

 VAR_4 = VAR_0->priv;
 VAR_4->flags = VAR_1->flags;

 return 0;
}
