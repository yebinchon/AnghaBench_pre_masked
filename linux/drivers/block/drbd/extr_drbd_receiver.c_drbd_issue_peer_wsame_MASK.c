
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sector; int size; } ;
struct drbd_peer_request {int flags; int pages; TYPE_2__ i; } ;
struct drbd_device {TYPE_1__* ldev; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_3__ {struct block_device* backing_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct block_device*,int,int,int ,int ) ;
 int FUNC_1 (struct drbd_peer_request*) ;

__attribute__((used)) static void FUNC_2(struct drbd_device *VAR_2,
      struct drbd_peer_request *VAR_3)
{
 struct block_device *VAR_4 = VAR_2->ldev->backing_bdev;
 sector_t VAR_5 = VAR_3->i.sector;
 sector_t VAR_6 = VAR_3->i.size >> 9;
 if (FUNC_0(VAR_4, VAR_5, VAR_6, VAR_1, VAR_3->pages))
  VAR_3->flags |= VAR_0;
 FUNC_1(VAR_3);
}
