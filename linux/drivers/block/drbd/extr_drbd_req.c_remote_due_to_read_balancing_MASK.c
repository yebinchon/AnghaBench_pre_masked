
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drbd_device {int flags; int rs_pending_cnt; int ap_pending_cnt; int local_cnt; TYPE_4__* ldev; } ;
struct backing_dev_info {int dummy; } ;
typedef int sector_t ;
typedef enum drbd_read_balancing { ____Placeholder_drbd_read_balancing } drbd_read_balancing ;
struct TYPE_8__ {TYPE_3__* backing_bdev; } ;
struct TYPE_7__ {TYPE_2__* bd_disk; } ;
struct TYPE_6__ {TYPE_1__* queue; } ;
struct TYPE_5__ {struct backing_dev_info* backing_dev_info; } ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct backing_dev_info*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct drbd_device *VAR_1, sector_t VAR_2,
  enum drbd_read_balancing VAR_3)
{
 struct backing_dev_info *VAR_4;
 int VAR_5;

 switch (VAR_3) {
 case 132:
  VAR_4 = VAR_1->ldev->backing_bdev->bd_disk->queue->backing_dev_info;
  return FUNC_1(VAR_4);
 case 131:
  return FUNC_0(&VAR_1->local_cnt) >
   FUNC_0(&VAR_1->ap_pending_cnt) + FUNC_0(&VAR_1->rs_pending_cnt);
 case 135:
 case 133:
 case 138:
 case 136:
 case 134:
 case 137:
  VAR_5 = (VAR_3 - 135 + 15);
  return (VAR_2 >> (VAR_5 - 9)) & 1;
 case 128:
  return FUNC_2(VAR_0, &VAR_1->flags);
 case 129:
  return 1;
 case 130:
 default:
  return 0;
 }
}
