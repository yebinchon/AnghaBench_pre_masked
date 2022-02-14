
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_bridge {struct altera_freeze_br_data* priv; } ;
struct altera_freeze_br_data {int enable; } ;



__attribute__((used)) static int FUNC_0(struct fpga_bridge *VAR_0)
{
 struct altera_freeze_br_data *VAR_1 = VAR_0->priv;

 return VAR_1->enable;
}
