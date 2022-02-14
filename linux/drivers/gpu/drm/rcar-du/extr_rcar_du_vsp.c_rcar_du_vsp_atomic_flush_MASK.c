
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct vsp1_du_atomic_pipe_config {int writeback; int crc; TYPE_1__ member_0; } ;
struct rcar_du_crtc_state {int crc; } ;
struct TYPE_5__ {int state; } ;
struct rcar_du_crtc {int vsp_pipe; TYPE_3__* vsp; TYPE_2__ crtc; } ;
struct TYPE_6__ {int vsp; } ;


 int FUNC_0 (struct rcar_du_crtc*,int *) ;
 struct rcar_du_crtc_state* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct vsp1_du_atomic_pipe_config*) ;

void FUNC_3(struct rcar_du_crtc *VAR_0)
{
 struct vsp1_du_atomic_pipe_config VAR_1 = { 0, };
 struct rcar_du_crtc_state *VAR_2;

 VAR_2 = FUNC_1(VAR_0->crtc.state);
 VAR_1.crc = VAR_2->crc;

 FUNC_0(VAR_0, &VAR_1.writeback);

 FUNC_2(VAR_0->vsp->vsp, VAR_0->vsp_pipe, &VAR_1);
}
