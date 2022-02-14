
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int led; } ;
struct applespi_data {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct applespi_data*,int) ;
 struct applespi_data* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct applespi_data *VAR_6 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_6, !!FUNC_2(VAR_1, VAR_2->led));
  return 0;
 }

 return -VAR_0;
}
