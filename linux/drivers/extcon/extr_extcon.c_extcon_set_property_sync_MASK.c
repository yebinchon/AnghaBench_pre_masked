
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union extcon_property_value {int dummy; } extcon_property_value ;
struct extcon_dev {int dummy; } ;


 int FUNC_0 (struct extcon_dev*,unsigned int,unsigned int,union extcon_property_value) ;
 int FUNC_1 (struct extcon_dev*,unsigned int) ;

int FUNC_2(struct extcon_dev *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2,
    union extcon_property_value VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1);
}
