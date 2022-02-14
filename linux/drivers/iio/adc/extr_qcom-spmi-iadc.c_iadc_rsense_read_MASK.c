
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iadc_chip {int* rsense; int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iadc_chip*,int ,int*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct iadc_chip *VAR_7, struct device_node *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 u8 VAR_12;

 VAR_9 = FUNC_2(VAR_8, "qcom,external-resistor-micro-ohms",
       &VAR_7->rsense[VAR_1]);
 if (VAR_9 < 0)
  VAR_7->rsense[VAR_1] = VAR_4;

 if (!VAR_7->rsense[VAR_1]) {
  FUNC_0(VAR_7->dev, "external resistor can't be zero Ohms");
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_5, &VAR_12);
 if (VAR_9 < 0)
  return VAR_9;





 VAR_10 = (VAR_12 & VAR_6) ? -1 : 1;

 VAR_12 &= ~VAR_6;


 VAR_11 = VAR_4 * 1000;
 VAR_11 += VAR_10 * VAR_12 * VAR_3;
 VAR_11 /= 1000;

 VAR_7->rsense[VAR_2] = VAR_11;
 return 0;
}
