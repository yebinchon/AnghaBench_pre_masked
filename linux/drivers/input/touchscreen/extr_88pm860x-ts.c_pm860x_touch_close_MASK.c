
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_touch {int i2c; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pm860x_touch* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_6)
{
 struct pm860x_touch *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 VAR_8 = VAR_1 | VAR_2 | VAR_3
  | VAR_4 | VAR_5;
 FUNC_1(VAR_7->i2c, VAR_0, VAR_8, 0);
}
