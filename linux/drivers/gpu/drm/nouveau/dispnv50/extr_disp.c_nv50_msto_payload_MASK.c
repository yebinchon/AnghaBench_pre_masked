
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int name; int dev; } ;
struct nv50_msto {TYPE_3__ encoder; struct nv50_mstc* mstc; } ;
struct TYPE_14__ {int max_payloads; struct drm_dp_payload* payloads; int payload_lock; } ;
struct nv50_mstm {TYPE_7__ mgr; TYPE_6__* outp; } ;
struct nv50_mstc {TYPE_2__* port; struct nv50_mstm* mstm; } ;
struct nouveau_drm {int dummy; } ;
struct drm_dp_payload {int vcpi; int num_slots; int start_slot; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_12__ {TYPE_4__ base; } ;
struct TYPE_13__ {TYPE_5__ base; } ;
struct TYPE_8__ {int vcpi; } ;
struct TYPE_9__ {TYPE_1__ vcpi; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct nouveau_drm* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_dp_payload *
FUNC_4(struct nv50_msto *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_3(VAR_0->encoder.dev);
 struct nv50_mstc *VAR_2 = VAR_0->mstc;
 struct nv50_mstm *VAR_3 = VAR_2->mstm;
 int VAR_4 = VAR_2->port->vcpi.vcpi, VAR_5;

 FUNC_1(!FUNC_2(&VAR_3->mgr.payload_lock));

 FUNC_0(VAR_1, "%s: vcpi %d\n", VAR_0->encoder.name, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_3->mgr.max_payloads; VAR_5++) {
  struct drm_dp_payload *VAR_6 = &VAR_3->mgr.payloads[VAR_5];
  FUNC_0(VAR_1, "%s: %d: vcpi %d start 0x%02x slots 0x%02x\n",
     VAR_3->outp->base.base.name, VAR_5, VAR_6->vcpi,
     VAR_6->start_slot, VAR_6->num_slots);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->mgr.max_payloads; VAR_5++) {
  struct drm_dp_payload *VAR_7 = &VAR_3->mgr.payloads[VAR_5];
  if (VAR_7->vcpi == VAR_4)
   return VAR_7;
 }

 return ((void*)0);
}
