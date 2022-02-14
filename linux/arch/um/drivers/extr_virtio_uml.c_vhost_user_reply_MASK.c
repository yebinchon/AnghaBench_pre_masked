
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_uml_device {int req_fd; } ;
struct TYPE_4__ {int size; int flags; } ;
struct TYPE_3__ {int integer; } ;
struct vhost_user_msg {TYPE_2__ header; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct vhost_user_msg*,size_t,int *,int ) ;
 int FUNC_1 (struct virtio_uml_device*,char*,int,size_t) ;

__attribute__((used)) static void FUNC_2(struct virtio_uml_device *VAR_2,
        struct vhost_user_msg *VAR_3, int VAR_4)
{
 struct vhost_user_msg VAR_5 = {
  .payload.integer = VAR_4,
 };
 size_t VAR_6 = sizeof(VAR_5.header) + sizeof(VAR_5.payload.integer);
 int VAR_7;

 VAR_5.header = VAR_3->header;
 VAR_5.header.flags &= ~VAR_0;
 VAR_5.header.flags |= VAR_1;
 VAR_5.header.size = sizeof(VAR_5.payload.integer);

 VAR_7 = FUNC_0(VAR_2->req_fd, &VAR_5, VAR_6, ((void*)0), 0);

 if (VAR_7)
  FUNC_1(VAR_2,
         "sending reply to slave request failed: %d (size %zu)\n",
         VAR_7, VAR_6);
}
