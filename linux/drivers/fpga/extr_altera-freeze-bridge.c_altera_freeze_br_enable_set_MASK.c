
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_image_info {int disable_timeout_us; int enable_timeout_us; } ;
struct fpga_bridge {struct altera_freeze_br_data* priv; struct fpga_image_info* info; } ;
struct altera_freeze_br_data {int enable; } ;


 int FUNC_0 (struct altera_freeze_br_data*,int ) ;
 int FUNC_1 (struct altera_freeze_br_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct fpga_bridge *VAR_0,
           bool VAR_1)
{
 struct altera_freeze_br_data *VAR_2 = VAR_0->priv;
 struct fpga_image_info *VAR_3 = VAR_0->info;
 u32 VAR_4 = 0;
 int VAR_5;

 if (VAR_1) {
  if (VAR_3)
   VAR_4 = VAR_3->enable_timeout_us;

  VAR_5 = FUNC_1(VAR_0->priv, VAR_4);
 } else {
  if (VAR_3)
   VAR_4 = VAR_3->disable_timeout_us;

  VAR_5 = FUNC_0(VAR_0->priv, VAR_4);
 }

 if (!VAR_5)
  VAR_2->enable = VAR_1;

 return VAR_5;
}
