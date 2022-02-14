
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {int input; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct input_dev*) ;
 struct input_dev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct steam_device *VAR_0)
{
 struct input_dev *VAR_1;
 FUNC_3();
 VAR_1 = FUNC_2(VAR_0->input);
 FUNC_4();
 if (!VAR_1)
  return;
 FUNC_0(VAR_0->input, ((void*)0));
 FUNC_5();
 FUNC_1(VAR_1);
}
