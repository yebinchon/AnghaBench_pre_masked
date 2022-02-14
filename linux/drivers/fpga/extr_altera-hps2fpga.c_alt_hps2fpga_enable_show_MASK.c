
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_bridge {struct altera_hps2fpga_data* priv; } ;
struct altera_hps2fpga_data {int bridge_reset; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fpga_bridge *VAR_0)
{
 struct altera_hps2fpga_data *VAR_1 = VAR_0->priv;

 return FUNC_0(VAR_1->bridge_reset);
}
