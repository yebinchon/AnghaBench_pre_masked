
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {scalar_t__ type; int i2c_cec; int regmap_cec; int i2c_main; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct adv7511*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,struct adv7511*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct adv7511 *VAR_3)
{
 int VAR_4;

 VAR_3->i2c_cec = FUNC_4(VAR_3->i2c_main, "cec",
      VAR_0);
 if (FUNC_0(VAR_3->i2c_cec))
  return FUNC_1(VAR_3->i2c_cec);
 FUNC_5(VAR_3->i2c_cec, VAR_3);

 VAR_3->regmap_cec = FUNC_3(VAR_3->i2c_cec,
     &VAR_2);
 if (FUNC_0(VAR_3->regmap_cec)) {
  VAR_4 = FUNC_1(VAR_3->regmap_cec);
  goto err;
 }

 if (VAR_3->type == VAR_1) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   goto err;
 }

 return 0;
err:
 FUNC_6(VAR_3->i2c_cec);
 return VAR_4;
}
