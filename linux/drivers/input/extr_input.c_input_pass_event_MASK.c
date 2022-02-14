
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_value {unsigned int member_0; unsigned int member_1; int member_2; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_value*) ;
 int FUNC_1 (struct input_dev*,struct input_value*,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct input_value VAR_4[] = { { VAR_1, VAR_2, VAR_3 } };

 FUNC_1(VAR_0, VAR_4, FUNC_0(VAR_4));
}
