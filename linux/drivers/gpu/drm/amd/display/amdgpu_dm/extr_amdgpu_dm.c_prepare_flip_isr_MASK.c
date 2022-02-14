
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* state; TYPE_1__* dev; } ;
struct amdgpu_crtc {int crtc_id; TYPE_3__ base; int pflip_status; int * event; } ;
struct TYPE_5__ {int * event; } ;
struct TYPE_4__ {int event_lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_crtc *VAR_1)
{

 FUNC_2(&VAR_1->base.dev->event_lock);
 FUNC_1(VAR_1->event);

 VAR_1->event = VAR_1->base.state->event;


 VAR_1->pflip_status = VAR_0;


 VAR_1->base.state->event = ((void*)0);

 FUNC_0("crtc:%d, pflip_stat:AMDGPU_FLIP_SUBMITTED\n",
       VAR_1->crtc_id);
}
