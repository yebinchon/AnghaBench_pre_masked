
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adv7511 {scalar_t__ type; int cec_clk_freq; int regmap; int * cec_adap; int regmap_cec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (struct device*,struct adv7511*) ;
 int * FUNC_3 (int *,struct adv7511*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct device*) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ,scalar_t__,int) ;

int FUNC_9(struct device *VAR_11, struct adv7511 *VAR_12)
{
 unsigned int VAR_13 = VAR_12->type == VAR_6 ?
      VAR_7 : 0;
 int VAR_14 = FUNC_2(VAR_11, VAR_12);

 if (VAR_14)
  goto err_cec_parse_dt;

 VAR_12->cec_adap = FUNC_3(&VAR_10,
  VAR_12, FUNC_7(VAR_11), VAR_8, VAR_1);
 if (FUNC_0(VAR_12->cec_adap)) {
  VAR_14 = FUNC_1(VAR_12->cec_adap);
  goto err_cec_alloc;
 }

 FUNC_8(VAR_12->regmap, VAR_3 + VAR_13, 0);

 FUNC_8(VAR_12->regmap_cec,
       VAR_5 + VAR_13, 0x01);
 FUNC_8(VAR_12->regmap_cec,
       VAR_5 + VAR_13, 0x00);


 FUNC_8(VAR_12->regmap_cec,
       VAR_4 + VAR_13, 0x00);

 FUNC_8(VAR_12->regmap_cec,
       VAR_2 + VAR_13,
       ((VAR_12->cec_clk_freq / 750000) - 1) << 2);

 VAR_14 = FUNC_5(VAR_12->cec_adap, VAR_11);
 if (VAR_14)
  goto err_cec_register;
 return 0;

err_cec_register:
 FUNC_4(VAR_12->cec_adap);
 VAR_12->cec_adap = ((void*)0);
err_cec_alloc:
 FUNC_6(VAR_11, "Initializing CEC failed with error %d, disabling CEC\n",
   VAR_14);
err_cec_parse_dt:
 FUNC_8(VAR_12->regmap, VAR_3 + VAR_13,
       VAR_0);
 return VAR_14 == -VAR_9 ? VAR_14 : 0;
}
