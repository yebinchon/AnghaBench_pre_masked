
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmg160_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct bmg160_data *VAR_8,
        bool VAR_9)
{
 struct device *VAR_10 = FUNC_1(VAR_8->regmap);
 int VAR_11;


 VAR_11 = FUNC_2(VAR_8->regmap, VAR_6,
     VAR_1,
     (VAR_9 ? VAR_1 : 0));
 if (VAR_11 < 0) {
  FUNC_0(VAR_10, "Error updating bits in reg_int_map1\n");
  return VAR_11;
 }

 if (VAR_9) {
  VAR_11 = FUNC_3(VAR_8->regmap, VAR_7,
       VAR_4 |
       VAR_3);
  if (VAR_11 < 0) {
   FUNC_0(VAR_10, "Error writing reg_rst_latch\n");
   return VAR_11;
  }

  VAR_11 = FUNC_3(VAR_8->regmap, VAR_5,
       VAR_0);

 } else {

  VAR_11 = FUNC_3(VAR_8->regmap, VAR_7,
       VAR_2 |
       VAR_3);
  if (VAR_11 < 0) {
   FUNC_0(VAR_10, "Error writing reg_rst_latch\n");
   return VAR_11;
  }

  VAR_11 = FUNC_3(VAR_8->regmap, VAR_5, 0);
 }

 if (VAR_11 < 0) {
  FUNC_0(VAR_10, "Error writing reg_int_en0\n");
  return VAR_11;
 }

 return 0;
}
