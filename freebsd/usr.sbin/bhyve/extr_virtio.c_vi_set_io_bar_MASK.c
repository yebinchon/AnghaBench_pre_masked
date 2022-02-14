
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_softc {int vs_pi; TYPE_1__* vs_vc; } ;
struct TYPE_2__ {size_t vc_cfgsize; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int,int ,size_t) ;

void
FUNC_1(struct virtio_softc *VAR_2, int VAR_3)
{
 size_t VAR_4;





 VAR_4 = VAR_1 + VAR_2->vs_vc->vc_cfgsize;
 FUNC_0(VAR_2->vs_pi, VAR_3, VAR_0, VAR_4);
}
