
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct alps_data* private; } ;
struct alps_data {int (* hw_init ) (struct psmouse*) ;} ;


 scalar_t__ FUNC_0 (struct psmouse*,struct alps_data*) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_0)
{
 struct alps_data *VAR_1 = VAR_0->private;

 FUNC_1(VAR_0);

 if (FUNC_0(VAR_0, VAR_1) < 0)
  return -1;

 return VAR_1->hw_init(VAR_0);
}
