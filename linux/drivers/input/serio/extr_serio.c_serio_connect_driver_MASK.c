
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int (* connect ) (struct serio*,struct serio_driver*) ;} ;
struct serio {int drv_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serio*,struct serio_driver*) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_0, struct serio_driver *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->drv_mutex);
 VAR_2 = VAR_1->connect(VAR_0, VAR_1);
 FUNC_1(&VAR_0->drv_mutex);

 return VAR_2;
}
