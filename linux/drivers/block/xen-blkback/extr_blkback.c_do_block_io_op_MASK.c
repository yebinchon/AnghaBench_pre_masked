
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union blkif_back_rings {int common; } ;
struct xen_blkif_ring {union blkif_back_rings blk_rings; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct xen_blkif_ring*) ;

__attribute__((used)) static int
FUNC_2(struct xen_blkif_ring *VAR_0)
{
 union blkif_back_rings *VAR_1 = &VAR_0->blk_rings;
 int VAR_2;

 do {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   break;

  FUNC_0(&VAR_1->common, VAR_2);
 } while (VAR_2);

 return VAR_2;
}
