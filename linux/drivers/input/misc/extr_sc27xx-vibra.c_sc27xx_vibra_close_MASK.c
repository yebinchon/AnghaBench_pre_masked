
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vibra_info {scalar_t__ enabled; int play_work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vibra_info* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct vibra_info*,int) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct vibra_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->play_work);
 if (VAR_1->enabled)
  FUNC_2(VAR_1, 0);
}
