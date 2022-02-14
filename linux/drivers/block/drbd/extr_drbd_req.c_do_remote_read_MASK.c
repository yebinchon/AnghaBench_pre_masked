
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sector; int size; } ;
struct drbd_request {int * private_bio; TYPE_3__ i; struct drbd_device* device; } ;
struct TYPE_5__ {scalar_t__ pdsk; } ;
struct drbd_device {TYPE_2__* ldev; TYPE_1__ state; } ;
typedef enum drbd_read_balancing { ____Placeholder_drbd_read_balancing } drbd_read_balancing ;
struct TYPE_8__ {int read_balancing; } ;
struct TYPE_6__ {int disk_conf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_device*,int ,int ) ;
 int FUNC_2 (struct drbd_device*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct drbd_device*,int ,int) ;

__attribute__((used)) static bool FUNC_7(struct drbd_request *VAR_2)
{
 struct drbd_device *VAR_3 = VAR_2->device;
 enum drbd_read_balancing VAR_4;

 if (VAR_2->private_bio) {
  if (!FUNC_1(VAR_3,
     VAR_2->i.sector, VAR_2->i.size)) {
   FUNC_0(VAR_2->private_bio);
   VAR_2->private_bio = ((void*)0);
   FUNC_2(VAR_3);
  }
 }

 if (VAR_3->state.pdsk != VAR_0)
  return 0;

 if (VAR_2->private_bio == ((void*)0))
  return 1;




 FUNC_4();
 VAR_4 = FUNC_3(VAR_3->ldev->disk_conf)->read_balancing;
 FUNC_5();

 if (VAR_4 == VAR_1 && VAR_2->private_bio)
  return 0;

 if (FUNC_6(VAR_3, VAR_2->i.sector, VAR_4)) {
  if (VAR_2->private_bio) {
   FUNC_0(VAR_2->private_bio);
   VAR_2->private_bio = ((void*)0);
   FUNC_2(VAR_3);
  }
  return 1;
 }

 return 0;
}
