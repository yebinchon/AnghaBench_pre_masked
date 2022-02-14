
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct virtio_uml_device {int dummy; } ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int size; } ;
struct vhost_user_msg {TYPE_2__ payload; TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_uml_device*,struct vhost_user_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_1,
          u64 *VAR_2)
{
 struct vhost_user_msg VAR_3;
 int VAR_4 = FUNC_0(VAR_1, &VAR_3,
          sizeof(VAR_3.payload.integer));

 if (VAR_4)
  return VAR_4;
 if (VAR_3.header.size != sizeof(VAR_3.payload.integer))
  return -VAR_0;
 *VAR_2 = VAR_3.payload.integer;
 return 0;
}
