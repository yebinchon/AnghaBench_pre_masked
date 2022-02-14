
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union drbd_state {int susp_fen; int susp_nod; int susp; int i; } ;
struct drbd_resource {int susp_fen; int susp_nod; int susp; } ;
struct TYPE_2__ {int i; } ;
struct drbd_device {TYPE_1__ state; struct drbd_resource* resource; } ;



__attribute__((used)) static inline union drbd_state FUNC_0(struct drbd_device *VAR_0)
{
 struct drbd_resource *VAR_1 = VAR_0->resource;
 union drbd_state VAR_2;

 VAR_2.i = VAR_0->state.i;
 VAR_2.susp = VAR_1->susp;
 VAR_2.susp_nod = VAR_1->susp_nod;
 VAR_2.susp_fen = VAR_1->susp_fen;

 return VAR_2;
}
