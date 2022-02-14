
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct input_dev {int key; } ;


 int FUNC_0 (struct input_dev*,unsigned int,int) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_0,
      struct input_dev *VAR_1,
      struct input_dev *VAR_2,
      struct input_dev *VAR_3,
      unsigned int VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_4, VAR_1->key))
  VAR_3 = VAR_1;
 else if (FUNC_1(VAR_4, VAR_2->key))
  VAR_3 = VAR_2;

 FUNC_0(VAR_3, VAR_4, VAR_5);
}
