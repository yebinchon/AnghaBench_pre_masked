
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* hubp; } ;
struct pipe_ctx {struct dc_plane_state* plane_state; TYPE_2__ plane_res; } ;
struct TYPE_10__ {int left_addr; } ;
struct TYPE_12__ {TYPE_4__ grph_stereo; int vmid; } ;
struct TYPE_9__ {TYPE_6__ current_address; TYPE_6__ requested_address; } ;
struct dc_plane_state {TYPE_6__ address; TYPE_3__ status; scalar_t__ flip_immediate; } ;
struct dc {int vm_helper; } ;
struct TYPE_11__ {TYPE_1__* funcs; int inst; } ;
struct TYPE_7__ {int (* hubp_program_surface_flip_and_addr ) (TYPE_5__*,TYPE_6__*,scalar_t__) ;} ;
typedef int PHYSICAL_ADDRESS_LOC ;


 int FUNC_0 (struct pipe_ctx*,int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct dc *VAR_0, struct pipe_ctx *VAR_1)
{
 bool VAR_2 = 0;
 PHYSICAL_ADDRESS_LOC VAR_3;
 struct dc_plane_state *VAR_4 = VAR_1->plane_state;

 if (VAR_4 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_1, &VAR_3);


 FUNC_2(VAR_0->vm_helper, VAR_4->address.vmid, VAR_1->plane_res.hubp->inst);

 VAR_1->plane_res.hubp->funcs->hubp_program_surface_flip_and_addr(
   VAR_1->plane_res.hubp,
   &VAR_4->address,
   VAR_4->flip_immediate);

 VAR_4->status.requested_address = VAR_4->address;

 if (VAR_4->flip_immediate)
  VAR_4->status.current_address = VAR_4->address;

 if (VAR_2)
  VAR_1->plane_state->address.grph_stereo.left_addr = VAR_3;
}
