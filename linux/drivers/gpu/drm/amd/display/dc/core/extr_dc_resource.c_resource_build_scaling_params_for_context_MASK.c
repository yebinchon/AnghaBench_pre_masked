
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pipe_ctx; } ;
struct dc_state {TYPE_1__ res_ctx; } ;
struct dc {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_4__ {int * stream; int * plane_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

enum dc_status FUNC_1(
 const struct dc *VAR_3,
 struct dc_state *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->res_ctx.pipe_ctx[VAR_5].plane_state != ((void*)0) &&
    VAR_4->res_ctx.pipe_ctx[VAR_5].stream != ((void*)0))
   if (!FUNC_0(&VAR_4->res_ctx.pipe_ctx[VAR_5]))
    return VAR_0;
 }

 return VAR_1;
}
