
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmp91000_data {int regmap; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,unsigned int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct lmp91000_data *VAR_9)
{
 struct device *VAR_10 = VAR_9->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 unsigned int VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_15 = FUNC_4(VAR_11, "ti,tia-gain-ohm", &VAR_13);
 if (VAR_15) {
  if (!FUNC_3(VAR_11, "ti,external-tia-resistor")) {
   FUNC_1(VAR_10, "no ti,tia-gain-ohm defined and external resistor not specified\n");
   return VAR_15;
  }
  VAR_13 = 0;
 }

 VAR_15 = -VAR_0;
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++) {
  if (VAR_8[VAR_14] == VAR_13) {
   VAR_12 = VAR_14 << VAR_6;
   VAR_15 = 0;
   break;
  }
 }

 if (VAR_15) {
  FUNC_1(VAR_10, "invalid ti,tia-gain-ohm %d\n", VAR_13);
  return VAR_15;
 }

 VAR_15 = FUNC_4(VAR_11, "ti,rload-ohm", &VAR_13);
 if (VAR_15) {
  VAR_13 = 100;
  FUNC_2(VAR_10, "no ti,rload-ohm defined, default to %d\n", VAR_13);
 }

 VAR_15 = -VAR_0;
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7); VAR_14++) {
  if (VAR_7[VAR_14] == VAR_13) {
   VAR_12 |= VAR_14;
   VAR_15 = 0;
   break;
  }
 }

 if (VAR_15) {
  FUNC_1(VAR_10, "invalid ti,rload-ohm %d\n", VAR_13);
  return VAR_15;
 }

 FUNC_5(VAR_9->regmap, VAR_1, 0);
 FUNC_5(VAR_9->regmap, VAR_5, VAR_12);
 FUNC_5(VAR_9->regmap, VAR_2,
       VAR_4 | VAR_3);
 FUNC_5(VAR_9->regmap, VAR_1, 1);

 return 0;
}
