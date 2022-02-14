
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_uml_device {int sock; } ;
struct TYPE_2__ {int flags; } ;
struct vhost_user_msg {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct vhost_user_msg*,size_t) ;

__attribute__((used)) static int FUNC_1(struct virtio_uml_device *VAR_3,
    struct vhost_user_msg *VAR_4,
    size_t VAR_5)
{
 int VAR_6 = FUNC_0(VAR_3->sock, VAR_4, VAR_5);

 if (VAR_6)
  return VAR_6;

 if (VAR_4->header.flags != (VAR_1 | VAR_2))
  return -VAR_0;

 return 0;
}
