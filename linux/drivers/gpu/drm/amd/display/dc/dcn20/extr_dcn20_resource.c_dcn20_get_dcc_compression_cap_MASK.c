
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dc_surface_dcc_cap {int dummy; } ;
struct dc_dcc_surface_param {int dummy; } ;
struct dc {TYPE_2__* res_pool; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {TYPE_3__* hubbub; } ;
struct TYPE_4__ {int (* get_dcc_compression_cap ) (TYPE_3__*,struct dc_dcc_surface_param const*,struct dc_surface_dcc_cap*) ;} ;


 int FUNC_0 (TYPE_3__*,struct dc_dcc_surface_param const*,struct dc_surface_dcc_cap*) ;

bool FUNC_1(const struct dc *VAR_0,
  const struct dc_dcc_surface_param *VAR_1,
  struct dc_surface_dcc_cap *VAR_2)
{
 return VAR_0->res_pool->hubbub->funcs->get_dcc_compression_cap(
   VAR_0->res_pool->hubbub,
   VAR_1,
   VAR_2);
}
