
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct virtio_uml_device {int dummy; } ;
struct TYPE_5__ {int log; int avail; int used; int desc; int index; } ;
struct TYPE_6__ {TYPE_2__ vring_addr; } ;
struct TYPE_4__ {int size; int request; } ;
struct vhost_user_msg {TYPE_3__ payload; TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_uml_device*,int,struct vhost_user_msg*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_1,
         u32 VAR_2, u64 VAR_3, u64 VAR_4, u64 VAR_5,
         u64 VAR_6)
{
 struct vhost_user_msg VAR_7 = {
  .header.request = VAR_0,
  .header.size = sizeof(VAR_7.payload.vring_addr),
  .payload.vring_addr.index = VAR_2,
  .payload.vring_addr.desc = VAR_3,
  .payload.vring_addr.used = VAR_4,
  .payload.vring_addr.avail = VAR_5,
  .payload.vring_addr.log = VAR_6,
 };

 return FUNC_0(VAR_1, 0, &VAR_7, ((void*)0), 0);
}
