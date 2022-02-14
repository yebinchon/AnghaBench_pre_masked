
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct virtio_uml_device {int dummy; } ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int size; int request; } ;
struct vhost_user_msg {TYPE_2__ payload; TYPE_1__ header; } ;


 int FUNC_0 (struct virtio_uml_device*,int,struct vhost_user_msg*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_0,
          u32 VAR_1, u64 VAR_2)
{
 struct vhost_user_msg VAR_3 = {
  .header.request = VAR_1,
  .header.size = sizeof(VAR_3.payload.integer),
  .payload.integer = VAR_2,
 };

 return FUNC_0(VAR_0, 0, &VAR_3, ((void*)0), 0);
}
