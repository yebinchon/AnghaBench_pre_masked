
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ts_data {scalar_t__ base; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 struct sun4i_ts_data* FUNC_5 (struct input_dev*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_1)
{
 struct sun4i_ts_data *VAR_2 = FUNC_5(VAR_1);


 FUNC_6(FUNC_3(1) | FUNC_0(1) | FUNC_2(1) | FUNC_1(1) |
  FUNC_4(1), VAR_2->base + VAR_0);

 return 0;
}
