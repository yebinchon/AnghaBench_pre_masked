
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc {TYPE_1__* res_pool; } ;
struct abm {TYPE_2__* funcs; } ;
struct TYPE_4__ {unsigned int (* get_current_backlight ) (struct abm*) ;} ;
struct TYPE_3__ {struct abm* abm; } ;


 unsigned int FUNC_0 (struct abm*) ;

unsigned int FUNC_1(struct dc *VAR_0)
{
 struct abm *VAR_1 = VAR_0->res_pool->abm;

 if (VAR_1)
  return VAR_1->funcs->get_current_backlight(VAR_1);

 return 0;
}
