
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct meta_data_on_disk {void* al_stripe_size_4k; void* al_stripes; void* la_peer_max_bio_size; void* bm_offset; void* device_uuid; void* bm_bytes_per_bit; void* al_nr_extents; void* al_offset; void* md_size_sect; void* magic; void* flags; void** uuid; void* la_size_sect; } ;
struct drbd_device {TYPE_3__* ldev; int peer_max_bio_size; TYPE_1__* act_log; int this_bdev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {scalar_t__ md_offset; int al_stripe_size_4k; int al_stripes; int bm_offset; int device_uuid; int al_offset; int md_size_sect; int flags; int * uuid; } ;
struct TYPE_7__ {TYPE_2__ md; } ;
struct TYPE_5__ {int nr_elements; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct drbd_device*,int,int ) ;
 int FUNC_4 (struct drbd_device*,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (struct drbd_device*,TYPE_3__*,scalar_t__,int ) ;
 int FUNC_8 (struct meta_data_on_disk*,int ,int) ;

void FUNC_9(struct drbd_device *VAR_6, void *VAR_7)
{
 struct meta_data_on_disk *VAR_8 = VAR_7;
 sector_t VAR_9;
 int VAR_10;

 FUNC_8(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->la_size_sect = FUNC_2(FUNC_5(VAR_6->this_bdev));
 for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10++)
  VAR_8->uuid[VAR_10] = FUNC_2(VAR_6->ldev->md.uuid[VAR_10]);
 VAR_8->flags = FUNC_1(VAR_6->ldev->md.flags);
 VAR_8->magic = FUNC_1(VAR_1);

 VAR_8->md_size_sect = FUNC_1(VAR_6->ldev->md.md_size_sect);
 VAR_8->al_offset = FUNC_1(VAR_6->ldev->md.al_offset);
 VAR_8->al_nr_extents = FUNC_1(VAR_6->act_log->nr_elements);
 VAR_8->bm_bytes_per_bit = FUNC_1(VAR_0);
 VAR_8->device_uuid = FUNC_2(VAR_6->ldev->md.device_uuid);

 VAR_8->bm_offset = FUNC_1(VAR_6->ldev->md.bm_offset);
 VAR_8->la_peer_max_bio_size = FUNC_1(VAR_6->peer_max_bio_size);

 VAR_8->al_stripes = FUNC_1(VAR_6->ldev->md.al_stripes);
 VAR_8->al_stripe_size_4k = FUNC_1(VAR_6->ldev->md.al_stripe_size_4k);

 FUNC_0(VAR_6, FUNC_6(VAR_6->ldev) == VAR_6->ldev->md.md_offset);
 VAR_9 = VAR_6->ldev->md.md_offset;

 if (FUNC_7(VAR_6, VAR_6->ldev, VAR_9, VAR_3)) {

  FUNC_4(VAR_6, "meta data update failed!\n");
  FUNC_3(VAR_6, 1, VAR_2);
 }
}
