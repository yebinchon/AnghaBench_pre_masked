
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice40_fpga_priv {int dev; } ;
struct fpga_manager {struct ice40_fpga_priv* priv; } ;


 int FUNC_0 (int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(struct fpga_manager *VAR_0,
    const char *VAR_1, size_t VAR_2)
{
 struct ice40_fpga_priv *VAR_3 = VAR_0->priv;

 return FUNC_0(VAR_3->dev, VAR_1, VAR_2);
}
