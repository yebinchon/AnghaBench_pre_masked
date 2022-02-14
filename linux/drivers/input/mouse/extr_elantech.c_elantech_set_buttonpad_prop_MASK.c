
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int keybit; int propbit; } ;
struct elantech_data {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->dev;
 struct elantech_data *VAR_4 = VAR_2->private;

 if (FUNC_2(&VAR_4->info)) {
  FUNC_1(VAR_1, VAR_3->propbit);
  FUNC_0(VAR_0, VAR_3->keybit);
 }
}
