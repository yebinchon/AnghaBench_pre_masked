
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dring_state {int entry_size; int num_entries; scalar_t__ ncookies; scalar_t__ pending; int * base; int cookies; } ;
struct TYPE_2__ {int lp; struct vio_dring_state* drings; } ;
struct vdc_port {TYPE_1__ vio; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *,int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vdc_port *VAR_1)
{
 struct vio_dring_state *VAR_2 = &VAR_1->vio.drings[VAR_0];

 if (VAR_2->base) {
  FUNC_0(VAR_1->vio.lp, VAR_2->base,
       (VAR_2->entry_size * VAR_2->num_entries),
       VAR_2->cookies, VAR_2->ncookies);
  VAR_2->base = ((void*)0);
  VAR_2->entry_size = 0;
  VAR_2->num_entries = 0;
  VAR_2->pending = 0;
  VAR_2->ncookies = 0;
 }
}
