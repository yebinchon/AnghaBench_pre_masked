
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_adapter {int dummy; } ;
struct adv7511 {scalar_t__ type; int cec_enabled_adap; scalar_t__ cec_valid_addrs; int regmap_cec; int regmap; int * i2c_cec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 struct adv7511* FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (int ,scalar_t__,int,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_8, bool VAR_9)
{
 struct adv7511 *VAR_10 = FUNC_1(VAR_8);
 unsigned int VAR_11 = VAR_10->type == VAR_5 ?
     VAR_6 : 0;

 if (VAR_10->i2c_cec == ((void*)0))
  return -VAR_7;

 if (!VAR_10->cec_enabled_adap && VAR_9) {

  FUNC_2(VAR_10->regmap_cec,
       VAR_1 + VAR_11,
       0x03, 0x01);

  FUNC_3(VAR_10->regmap_cec,
        VAR_3 + VAR_11, 0x07);
  FUNC_3(VAR_10->regmap_cec,
        VAR_3 + VAR_11, 0);

  FUNC_2(VAR_10->regmap_cec,
       VAR_4 + VAR_11, 1, 0);





  FUNC_2(VAR_10->regmap,
       FUNC_0(1), 0x3f,
       VAR_0);
 } else if (VAR_10->cec_enabled_adap && !VAR_9) {
  FUNC_2(VAR_10->regmap,
       FUNC_0(1), 0x3f, 0);

  FUNC_2(VAR_10->regmap_cec,
       VAR_2 + VAR_11,
       0x70, 0x00);

  FUNC_2(VAR_10->regmap_cec,
       VAR_1 + VAR_11,
       0x03, 0x00);
  VAR_10->cec_valid_addrs = 0;
 }
 VAR_10->cec_enabled_adap = VAR_9;
 return 0;
}
