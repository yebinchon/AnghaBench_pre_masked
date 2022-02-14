
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {struct input_dev* input_keys; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*) ;

__attribute__((used)) static void FUNC_1(struct picolcd_data *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->input_keys;

 VAR_0->input_keys = ((void*)0);
 if (VAR_1)
  FUNC_0(VAR_1);
}
