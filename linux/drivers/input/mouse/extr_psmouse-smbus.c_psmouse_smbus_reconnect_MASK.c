
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse_smbus_dev {scalar_t__ need_deactivate; } ;
struct psmouse {struct psmouse_smbus_dev* private; } ;


 int FUNC_0 (struct psmouse*) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_0)
{
 struct psmouse_smbus_dev *VAR_1 = VAR_0->private;

 if (VAR_1->need_deactivate)
  FUNC_0(VAR_0);

 return 0;
}
