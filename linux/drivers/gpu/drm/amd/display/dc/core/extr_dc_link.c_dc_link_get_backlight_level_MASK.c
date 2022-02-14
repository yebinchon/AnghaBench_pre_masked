
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dc_link {TYPE_3__* ctx; } ;
struct abm {TYPE_4__* funcs; } ;
struct TYPE_8__ {scalar_t__ (* get_current_backlight ) (struct abm*) ;} ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_6__ {TYPE_1__* res_pool; } ;
struct TYPE_5__ {struct abm* abm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct abm*) ;

int FUNC_1(const struct dc_link *VAR_1)
{
 struct abm *VAR_2 = VAR_1->ctx->dc->res_pool->abm;

 if (VAR_2 == ((void*)0) || VAR_2->funcs->get_current_backlight == ((void*)0))
  return VAR_0;

 return (int) VAR_2->funcs->get_current_backlight(VAR_2);
}
