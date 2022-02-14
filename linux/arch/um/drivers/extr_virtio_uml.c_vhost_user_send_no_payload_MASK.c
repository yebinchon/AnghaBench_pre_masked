
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virtio_uml_device {int dummy; } ;
struct TYPE_2__ {int request; } ;
struct vhost_user_msg {TYPE_1__ header; } ;


 int FUNC_0 (struct virtio_uml_device*,int,struct vhost_user_msg*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_0,
          bool VAR_1, u32 VAR_2)
{
 struct vhost_user_msg VAR_3 = {
  .header.request = VAR_2,
 };

 return FUNC_0(VAR_0, VAR_1, &VAR_3, ((void*)0), 0);
}
