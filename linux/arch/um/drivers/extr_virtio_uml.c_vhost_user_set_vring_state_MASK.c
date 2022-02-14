
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct virtio_uml_device {int dummy; } ;
struct TYPE_5__ {int num; int index; } ;
struct TYPE_6__ {TYPE_2__ vring_state; } ;
struct TYPE_4__ {int size; int request; } ;
struct vhost_user_msg {TYPE_3__ payload; TYPE_1__ header; } ;


 int FUNC_0 (struct virtio_uml_device*,int,struct vhost_user_msg*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_0,
          u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct vhost_user_msg VAR_4 = {
  .header.request = VAR_1,
  .header.size = sizeof(VAR_4.payload.vring_state),
  .payload.vring_state.index = VAR_2,
  .payload.vring_state.num = VAR_3,
 };

 return FUNC_0(VAR_0, 0, &VAR_4, ((void*)0), 0);
}
