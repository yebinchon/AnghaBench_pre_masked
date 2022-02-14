
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_vib {scalar_t__ active; int work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pm8xxx_vib* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct pm8xxx_vib*,int) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct pm8xxx_vib *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->work);
 if (VAR_1->active)
  FUNC_2(VAR_1, 0);
}
