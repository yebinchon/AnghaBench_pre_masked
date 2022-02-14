
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xen_blkif_ring {int st_ds_req; struct xen_blkif* blkif; } ;
struct TYPE_4__ {scalar_t__ discard_secure; int pdevice; struct block_device* bdev; } ;
struct xen_blkif {TYPE_1__ vbd; } ;
struct phys_req {scalar_t__ nr_sects; scalar_t__ sector_number; } ;
struct block_device {int dummy; } ;
struct TYPE_5__ {int flag; int id; scalar_t__ nr_sectors; scalar_t__ sector_number; } ;
struct TYPE_6__ {TYPE_2__ discard; } ;
struct blkif_request {int operation; TYPE_3__ u; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct block_device*,scalar_t__,scalar_t__,int ,unsigned long) ;
 int FUNC_1 (struct xen_blkif_ring*,int ,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct xen_blkif*) ;
 int FUNC_5 (struct xen_blkif*) ;
 int FUNC_6 (struct phys_req*,struct xen_blkif*,int ) ;

__attribute__((used)) static int FUNC_7(struct xen_blkif_ring *VAR_8,
    struct blkif_request *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = VAR_4;
 struct xen_blkif *VAR_12 = VAR_8->blkif;
 struct block_device *VAR_13 = VAR_12->vbd.bdev;
 unsigned long VAR_14;
 struct phys_req VAR_15;

 FUNC_4(VAR_12);

 VAR_15.sector_number = VAR_9->u.discard.sector_number;
 VAR_15.nr_sects = VAR_9->u.discard.nr_sectors;

 VAR_10 = FUNC_6(&VAR_15, VAR_12, VAR_7);
 if (VAR_10) {
  FUNC_3("access denied: DISCARD [%llu->%llu] on dev=%04x\n",
   VAR_15.sector_number,
   VAR_15.sector_number + VAR_15.nr_sects, VAR_12->vbd.pdevice);
  goto fail_response;
 }
 VAR_8->st_ds_req++;

 VAR_14 = (VAR_12->vbd.discard_secure &&
   (VAR_9->u.discard.flag & VAR_1)) ?
   VAR_0 : 0;

 VAR_10 = FUNC_0(VAR_13, VAR_9->u.discard.sector_number,
       VAR_9->u.discard.nr_sectors,
       VAR_6, VAR_14);
fail_response:
 if (VAR_10 == -VAR_5) {
  FUNC_2("discard op failed, not supported\n");
  VAR_11 = VAR_2;
 } else if (VAR_10)
  VAR_11 = VAR_3;

 FUNC_1(VAR_8, VAR_9->u.discard.id, VAR_9->operation, VAR_11);
 FUNC_5(VAR_12);
 return VAR_10;
}
