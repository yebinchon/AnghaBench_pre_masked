
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {scalar_t__ persistent_gnt_c; int persistent_gnts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xen_blkif_ring*,int *,scalar_t__) ;
 int FUNC_3 (struct xen_blkif_ring*,int ) ;

void FUNC_4(struct xen_blkif_ring *VAR_0)
{

 if (!FUNC_1(&VAR_0->persistent_gnts))
  FUNC_2(VAR_0, &VAR_0->persistent_gnts,
   VAR_0->persistent_gnt_c);

 FUNC_0(!FUNC_1(&VAR_0->persistent_gnts));
 VAR_0->persistent_gnt_c = 0;


 FUNC_3(VAR_0, 0 );
}
