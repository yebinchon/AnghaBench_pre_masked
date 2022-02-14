
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* mi; } ;
struct pipe_ctx {TYPE_2__ plane_res; struct dc_plane_state* plane_state; } ;
struct TYPE_7__ {int requested_address; } ;
struct dc_plane_state {int address; TYPE_3__ status; int flip_immediate; } ;
struct dc {int dummy; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* mem_input_program_surface_flip_and_addr ) (TYPE_4__*,int *,int ) ;} ;


 int FUNC_0 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static void FUNC_1(const struct dc *VAR_0,
  struct pipe_ctx *VAR_1)
{
 struct dc_plane_state *VAR_2 = VAR_1->plane_state;

 if (VAR_2 == ((void*)0))
  return;

 VAR_1->plane_res.mi->funcs->mem_input_program_surface_flip_and_addr(
   VAR_1->plane_res.mi,
   &VAR_2->address,
   VAR_2->flip_immediate);

 VAR_2->status.requested_address = VAR_2->address;
}
