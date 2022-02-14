
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_plane_state {int dummy; } ;
struct dc {int caps; TYPE_2__* res_pool; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* validate_plane ) (struct dc_plane_state const*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dc_plane_state const*,int *) ;

enum dc_status FUNC_1(struct dc *VAR_1, const struct dc_plane_state *VAR_2)
{
 enum dc_status VAR_3 = VAR_0;


 if (VAR_1->res_pool->funcs->validate_plane)
  return VAR_1->res_pool->funcs->validate_plane(VAR_2, &VAR_1->caps);

 return VAR_3;
}
