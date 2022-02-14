
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct ad7879 {int suspended; int disabled; } ;


 int FUNC_0 (struct ad7879*) ;
 struct ad7879* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct ad7879 *VAR_1 = FUNC_1(VAR_0);


 if (!VAR_1->disabled && !VAR_1->suspended)
  FUNC_0(VAR_1);

 return 0;
}
