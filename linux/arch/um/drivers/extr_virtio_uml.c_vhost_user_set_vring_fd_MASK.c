
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct virtio_uml_device {int dummy; } ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int size; int request; } ;
struct vhost_user_msg {TYPE_2__ payload; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct virtio_uml_device*,int,struct vhost_user_msg*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_3,
       u32 VAR_4, int VAR_5, int VAR_6)
{
 struct vhost_user_msg VAR_7 = {
  .header.request = VAR_4,
  .header.size = sizeof(VAR_7.payload.integer),
  .payload.integer = VAR_5,
 };

 if (VAR_5 & ~VAR_1)
  return -VAR_0;
 if (VAR_6 < 0) {
  VAR_7.payload.integer |= VAR_2;
  return FUNC_0(VAR_3, 0, &VAR_7, ((void*)0), 0);
 }
 return FUNC_0(VAR_3, 0, &VAR_7, &VAR_6, 1);
}
