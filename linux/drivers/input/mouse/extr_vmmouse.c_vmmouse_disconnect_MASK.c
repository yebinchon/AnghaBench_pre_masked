
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmouse_data {int abs_dev; } ;
struct psmouse {struct vmmouse_data* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vmmouse_data*) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_0)
{
 struct vmmouse_data *VAR_1 = VAR_0->private;

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1->abs_dev);
 FUNC_1(VAR_1);
}
