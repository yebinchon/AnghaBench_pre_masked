
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fpga_manager {int dev; struct altera_cvp_conf* priv; } ;
struct fpga_image_info {int dummy; } ;
struct altera_cvp_conf {TYPE_1__* priv; } ;
struct TYPE_2__ {int poll_time_us; int (* switch_clk ) (struct altera_cvp_conf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct altera_cvp_conf*,int ,int ,int ) ;
 int FUNC_1 (struct altera_cvp_conf*,int ,int *) ;
 int FUNC_2 (struct altera_cvp_conf*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct altera_cvp_conf*) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_4,
          struct fpga_image_info *VAR_5)
{
 struct altera_cvp_conf *VAR_6 = VAR_4->priv;
 int VAR_7;
 u32 VAR_8;


 FUNC_1(VAR_6, VAR_0, &VAR_8);
 VAR_8 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_0, VAR_8);


 VAR_8 &= ~VAR_1;
 FUNC_2(VAR_6, VAR_0, VAR_8);






 if (VAR_6->priv->switch_clk)
  VAR_6->priv->switch_clk(VAR_6);


 VAR_7 = FUNC_0(VAR_6, VAR_3, 0,
         VAR_6->priv->poll_time_us);
 if (VAR_7)
  FUNC_3(&VAR_4->dev, "CFG_RDY == 0 timeout\n");

 return VAR_7;
}
