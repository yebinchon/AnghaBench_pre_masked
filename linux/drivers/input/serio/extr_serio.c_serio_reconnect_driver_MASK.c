
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int drv_mutex; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* reconnect ) (struct serio*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serio*) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_0)
{
 int VAR_1 = -1;

 FUNC_0(&VAR_0->drv_mutex);
 if (VAR_0->drv && VAR_0->drv->reconnect)
  VAR_1 = VAR_0->drv->reconnect(VAR_0);
 FUNC_1(&VAR_0->drv_mutex);

 return VAR_1;
}
