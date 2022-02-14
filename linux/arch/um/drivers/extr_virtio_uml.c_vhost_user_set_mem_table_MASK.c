
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_uml_device {int dummy; } ;
struct TYPE_5__ {int num; int * regions; } ;
struct TYPE_6__ {TYPE_2__ mem_regions; } ;
struct TYPE_4__ {int size; int request; } ;
struct vhost_user_msg {TYPE_3__ payload; TYPE_1__ header; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (unsigned long,scalar_t__,int*,int *) ;
 int FUNC_2 (struct virtio_uml_device*,int,struct vhost_user_msg*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct virtio_uml_device *VAR_6)
{
 struct vhost_user_msg VAR_7 = {
  .header.request = VAR_0,
  .header.size = sizeof(VAR_7.payload.mem_regions),
  .payload.mem_regions.num = 1,
 };
 unsigned long VAR_8 = VAR_5 - VAR_4;
 int VAR_9[2];
 int VAR_10;
 VAR_10 = FUNC_1(VAR_8, VAR_3 - VAR_8,
     &VAR_9[0],
     &VAR_7.payload.mem_regions.regions[0]);

 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_2) {
  VAR_7.payload.mem_regions.num++;
  VAR_10 = FUNC_1(FUNC_0(VAR_1), VAR_2,
    &VAR_9[1], &VAR_7.payload.mem_regions.regions[1]);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return FUNC_2(VAR_6, 0, &VAR_7, VAR_9,
          VAR_7.payload.mem_regions.num);
}
