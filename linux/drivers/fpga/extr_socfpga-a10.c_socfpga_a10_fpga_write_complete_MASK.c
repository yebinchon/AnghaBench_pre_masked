
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {int dev; struct a10_fpga_priv* priv; } ;
struct fpga_image_info {int dummy; } ;
struct a10_fpga_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct a10_fpga_priv*,int) ;
 int FUNC_3 (struct a10_fpga_priv*) ;
 int FUNC_4 (struct a10_fpga_priv*) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_10,
        struct fpga_image_info *VAR_11)
{
 struct a10_fpga_priv *VAR_12 = VAR_10->priv;
 u32 VAR_13;
 int VAR_14;


 VAR_14 = FUNC_4(VAR_12);


 FUNC_1(VAR_12->regmap, VAR_0,
      VAR_3, 0);


 FUNC_2(VAR_12, 256);


 FUNC_1(VAR_12->regmap, VAR_5,
      VAR_4, 0);


 FUNC_1(VAR_12->regmap, VAR_0,
      VAR_1,
      VAR_1);


 FUNC_1(VAR_12->regmap, VAR_0,
      VAR_2,
      VAR_2);


 if (VAR_14)
  return VAR_14;


 VAR_13 = FUNC_3(VAR_12);

 if (((VAR_13 & VAR_8) == 0) ||
     ((VAR_13 & VAR_6) == 0) ||
     ((VAR_13 & VAR_7) == 0)) {
  FUNC_0(&VAR_10->dev,
   "Timeout in final check. Status=%08xf\n", VAR_13);
  return -VAR_9;
 }

 return 0;
}
