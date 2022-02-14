
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int inflight; struct xen_blkif* blkif; } ;
struct xen_blkif {int drain; int drain_complete; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct xen_blkif_ring *VAR_1)
{
 struct xen_blkif *VAR_2 = VAR_1->blkif;

 FUNC_1(&VAR_2->drain, 1);
 do {
  if (FUNC_0(&VAR_1->inflight) == 0)
   break;
  FUNC_3(
    &VAR_2->drain_complete, VAR_0);

  if (!FUNC_0(&VAR_2->drain))
   break;
 } while (!FUNC_2());
 FUNC_1(&VAR_2->drain, 0);
}
