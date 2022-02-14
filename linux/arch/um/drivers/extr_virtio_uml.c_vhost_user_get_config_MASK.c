
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct virtio_uml_device {int protocol_features; } ;
struct TYPE_5__ {int size; int payload; scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_2__ config; } ;
struct TYPE_4__ {size_t size; int request; } ;
struct vhost_user_msg {TYPE_3__ payload; TYPE_1__ header; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vhost_user_msg*) ;
 struct vhost_user_msg* FUNC_2 (size_t,int ) ;
 int FUNC_3 (void*,int,int) ;
 int FUNC_4 (struct virtio_uml_device*,struct vhost_user_msg*,size_t) ;
 int FUNC_5 (struct virtio_uml_device*,int,struct vhost_user_msg*,int *,int ) ;
 int FUNC_6 (struct virtio_uml_device*,char*,size_t,...) ;

__attribute__((used)) static void FUNC_7(struct virtio_uml_device *VAR_4,
      u32 VAR_5, void *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_5 + VAR_7;
 struct vhost_user_msg *VAR_9;
 size_t VAR_10 = sizeof(VAR_9->payload.config) + VAR_8;
 size_t VAR_11 = sizeof(VAR_9->header) + VAR_10;
 int VAR_12;

 if (!(VAR_4->protocol_features &
       FUNC_0(VAR_3)))
  return;

 VAR_9 = FUNC_2(VAR_11, VAR_1);
 if (!VAR_9)
  return;
 VAR_9->header.request = VAR_2;
 VAR_9->header.size = VAR_10;
 VAR_9->payload.config.offset = 0;
 VAR_9->payload.config.size = VAR_8;

 VAR_12 = FUNC_5(VAR_4, 1, VAR_9, ((void*)0), 0);
 if (VAR_12) {
  FUNC_6(VAR_4, "sending VHOST_USER_GET_CONFIG failed: %d\n",
         VAR_12);
  goto free;
 }

 VAR_12 = FUNC_4(VAR_4, VAR_9, VAR_11);
 if (VAR_12) {
  FUNC_6(VAR_4,
         "receiving VHOST_USER_GET_CONFIG response failed: %d\n",
         VAR_12);
  goto free;
 }

 if (VAR_9->header.size != VAR_10 ||
     VAR_9->payload.config.size != VAR_8) {
  VAR_12 = -VAR_0;
  FUNC_6(VAR_4,
         "Invalid VHOST_USER_GET_CONFIG sizes (payload %d expected %zu, config %u expected %u)\n",
         VAR_9->header.size, VAR_10,
         VAR_9->payload.config.size, VAR_8);
  goto free;
 }
 FUNC_3(VAR_6, VAR_9->payload.config.payload + VAR_5, VAR_7);

free:
 FUNC_1(VAR_9);
}
