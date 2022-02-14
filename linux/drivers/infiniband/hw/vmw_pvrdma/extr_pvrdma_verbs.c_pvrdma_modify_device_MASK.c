
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_device_modify {int sys_image_guid; int node_desc; } ;
struct ib_device {int node_desc; } ;
struct TYPE_4__ {int port_mutex; int sys_image_guid; int desc_lock; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 TYPE_2__* FUNC_7 (struct ib_device*) ;

int FUNC_8(struct ib_device *VAR_3, int VAR_4,
    struct ib_device_modify *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4 & ~(VAR_2 |
       VAR_1)) {
  FUNC_1(&FUNC_7(VAR_3)->pdev->dev,
    "unsupported device modify mask %#x\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_4 & VAR_1) {
  FUNC_5(&FUNC_7(VAR_3)->desc_lock, VAR_6);
  FUNC_2(VAR_3->node_desc, VAR_5->node_desc, 64);
  FUNC_6(&FUNC_7(VAR_3)->desc_lock, VAR_6);
 }

 if (VAR_4 & VAR_2) {
  FUNC_3(&FUNC_7(VAR_3)->port_mutex);
  FUNC_7(VAR_3)->sys_image_guid =
   FUNC_0(VAR_5->sys_image_guid);
  FUNC_4(&FUNC_7(VAR_3)->port_mutex);
 }

 return 0;
}
