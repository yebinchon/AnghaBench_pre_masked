
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fpga_manager {int dev; struct altera_cvp_conf* priv; } ;
struct fpga_image_info {int dummy; } ;
struct altera_cvp_conf {TYPE_1__* priv; } ;
struct TYPE_2__ {int user_time_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fpga_manager*,struct fpga_image_info*) ;
 int FUNC_1 (struct altera_cvp_conf*,int,int,int ) ;
 int FUNC_2 (struct altera_cvp_conf*,int ,int*) ;
 int FUNC_3 (struct altera_cvp_conf*,int ,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_8,
         struct fpga_image_info *VAR_9)
{
 struct altera_cvp_conf *VAR_10 = VAR_8->priv;
 u32 VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;


 FUNC_2(VAR_10, VAR_7, &VAR_12);
 if (VAR_12 & VAR_6) {
  FUNC_4(&VAR_8->dev, "detected CVP_CONFIG_ERROR_LATCHED!\n");
  return -VAR_0;
 }


 FUNC_2(VAR_10, VAR_1, &VAR_12);
 VAR_12 &= ~VAR_3;
 VAR_12 &= ~VAR_2;
 FUNC_3(VAR_10, VAR_1, VAR_12);


 VAR_11 = VAR_4 | VAR_5;
 VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_11,
         VAR_10->priv->user_time_us);
 if (VAR_13)
  FUNC_4(&VAR_8->dev, "PLD_CLK_IN_USE|USERMODE timeout\n");

 return VAR_13;
}
