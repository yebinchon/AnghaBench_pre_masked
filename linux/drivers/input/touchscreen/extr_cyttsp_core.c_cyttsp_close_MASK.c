
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct cyttsp {int suspended; } ;


 int FUNC_0 (struct cyttsp*) ;
 struct cyttsp* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct cyttsp *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->suspended)
  FUNC_0(VAR_1);
}
