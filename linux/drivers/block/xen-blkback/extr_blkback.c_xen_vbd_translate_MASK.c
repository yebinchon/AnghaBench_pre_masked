
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_vbd {int bdev; int pdevice; scalar_t__ readonly; } ;
struct xen_blkif {struct xen_vbd vbd; } ;
struct phys_req {scalar_t__ nr_sects; scalar_t__ sector_number; int bdev; int dev; } ;
typedef scalar_t__ blkif_sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct xen_vbd*) ;

__attribute__((used)) static int FUNC_3(struct phys_req *VAR_2, struct xen_blkif *VAR_3,
        int VAR_4)
{
 struct xen_vbd *VAR_5 = &VAR_3->vbd;
 int VAR_6 = -VAR_0;

 if ((VAR_4 != VAR_1) && VAR_5->readonly)
  goto out;

 if (FUNC_0(VAR_2->nr_sects)) {
  blkif_sector_t VAR_7 = VAR_2->sector_number + VAR_2->nr_sects;

  if (FUNC_1(VAR_7 < VAR_2->sector_number))
   goto out;
  if (FUNC_1(VAR_7 > FUNC_2(VAR_5)))
   goto out;
 }

 VAR_2->dev = VAR_5->pdevice;
 VAR_2->bdev = VAR_5->bdev;
 VAR_6 = 0;

 out:
 return VAR_6;
}
