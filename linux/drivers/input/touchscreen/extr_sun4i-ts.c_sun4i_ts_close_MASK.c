
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ts_data {scalar_t__ base; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct sun4i_ts_data* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_1)
{
 struct sun4i_ts_data *VAR_2 = FUNC_1(VAR_1);


 FUNC_2(FUNC_0(1), VAR_2->base + VAR_0);
}
