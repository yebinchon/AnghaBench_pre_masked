
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int pattern; } ;
typedef enum tpg_color { ____Placeholder_tpg_color } tpg_color ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static enum tpg_color FUNC_0(struct tpg_data *VAR_3)
{
 switch (VAR_3->pattern) {
 case 130:
 case 128:
  return VAR_2;
 case 129:
  return VAR_0;
 default:
  return VAR_1;
 }
}
