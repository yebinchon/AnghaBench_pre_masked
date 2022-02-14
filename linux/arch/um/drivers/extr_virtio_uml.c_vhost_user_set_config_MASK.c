
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct virtio_uml_device {int protocol_features; } ;
struct TYPE_5__ {int offset; int size; int payload; } ;
struct TYPE_6__ {TYPE_2__ config; } ;
struct TYPE_4__ {size_t size; int request; } ;
struct vhost_user_msg {TYPE_3__ payload; TYPE_1__ header; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vhost_user_msg*) ;
 struct vhost_user_msg* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ,void const*,int) ;
 int FUNC_4 (struct virtio_uml_device*,int,struct vhost_user_msg*,int *,int ) ;
 int FUNC_5 (struct virtio_uml_device*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct virtio_uml_device *VAR_3,
      u32 VAR_4, const void *VAR_5, u32 VAR_6)
{
 struct vhost_user_msg *VAR_7;
 size_t VAR_8 = sizeof(VAR_7->payload.config) + VAR_6;
 size_t VAR_9 = sizeof(VAR_7->header) + VAR_8;
 int VAR_10;

 if (!(VAR_3->protocol_features &
       FUNC_0(VAR_1)))
  return;

 VAR_7 = FUNC_2(VAR_9, VAR_0);
 if (!VAR_7)
  return;
 VAR_7->header.request = VAR_2;
 VAR_7->header.size = VAR_8;
 VAR_7->payload.config.offset = VAR_4;
 VAR_7->payload.config.size = VAR_6;
 FUNC_3(VAR_7->payload.config.payload, VAR_5, VAR_6);

 VAR_10 = FUNC_4(VAR_3, 0, VAR_7, ((void*)0), 0);
 if (VAR_10)
  FUNC_5(VAR_3, "sending VHOST_USER_SET_CONFIG failed: %d\n",
         VAR_10);

 FUNC_1(VAR_7);
}
