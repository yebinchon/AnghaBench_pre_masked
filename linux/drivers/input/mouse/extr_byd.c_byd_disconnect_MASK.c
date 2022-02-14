
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct byd_data* private; } ;
struct byd_data {int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct byd_data*) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_0)
{
 struct byd_data *VAR_1 = VAR_0->private;

 if (VAR_1) {
  FUNC_0(&VAR_1->timer);
  FUNC_1(VAR_0->private);
  VAR_0->private = ((void*)0);
 }
}
