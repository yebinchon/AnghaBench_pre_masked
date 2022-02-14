
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef enum bmi160_int_pin { ____Placeholder_bmi160_int_pin } bmi160_int_pin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_2, enum bmi160_int_pin *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2, "INT1");
 if (VAR_4 > 0) {
  *VAR_3 = VAR_0;
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2, "INT2");
 if (VAR_4 > 0)
  *VAR_3 = VAR_1;

 return VAR_4;
}
