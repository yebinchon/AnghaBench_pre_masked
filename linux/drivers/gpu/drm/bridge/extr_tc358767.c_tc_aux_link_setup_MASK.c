
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_data {int dev; int regmap; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct tc_data*,int ) ;
 int FUNC_3 (struct tc_data*,int ,int ,int ,int,int) ;
 int FUNC_4 (struct tc_data*) ;

__attribute__((used)) static int FUNC_5(struct tc_data *VAR_10)
{
 int VAR_11;
 u32 VAR_12;


 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_1(VAR_10->regmap, VAR_5,
      VAR_1 | VAR_9 | VAR_7);
 if (VAR_11)
  goto err;




 VAR_11 = FUNC_2(VAR_10, VAR_3);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_2(VAR_10, VAR_4);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_3(VAR_10, VAR_5, VAR_8, VAR_8, 1, 1000);
 if (VAR_11 == -VAR_6) {
  FUNC_0(VAR_10->dev, "Timeout waiting for PHY to become ready");
  return VAR_11;
 } else if (VAR_11) {
  goto err;
 }


 VAR_12 = VAR_0;
 VAR_12 |= 0x06 << 8;
 VAR_12 |= 0x3f << 0;

 VAR_11 = FUNC_1(VAR_10->regmap, VAR_2, VAR_12);
 if (VAR_11)
  goto err;

 return 0;
err:
 FUNC_0(VAR_10->dev, "tc_aux_link_setup failed: %d\n", VAR_11);
 return VAR_11;
}
