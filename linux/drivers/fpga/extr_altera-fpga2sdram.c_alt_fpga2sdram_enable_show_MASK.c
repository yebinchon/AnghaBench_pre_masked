
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_bridge {struct alt_fpga2sdram_data* priv; } ;
struct alt_fpga2sdram_data {int mask; int sdrctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct fpga_bridge *VAR_1)
{
 struct alt_fpga2sdram_data *VAR_2 = VAR_1->priv;
 int VAR_3;

 FUNC_0(VAR_2->sdrctl, VAR_0, &VAR_3);

 return (VAR_3 & VAR_2->mask) == VAR_2->mask;
}
