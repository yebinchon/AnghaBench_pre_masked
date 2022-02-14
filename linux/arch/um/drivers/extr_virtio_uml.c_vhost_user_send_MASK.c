
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct virtio_uml_device {int protocol_features; int sock; } ;
struct TYPE_2__ {int size; int flags; } ;
struct vhost_user_msg {TYPE_1__ header; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct vhost_user_msg*,size_t,int*,size_t) ;
 int FUNC_2 (struct virtio_uml_device*,scalar_t__*) ;
 int FUNC_3 (struct virtio_uml_device*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct virtio_uml_device *VAR_4,
      bool VAR_5, struct vhost_user_msg *VAR_6,
      int *VAR_7, size_t VAR_8)
{
 size_t VAR_9 = sizeof(VAR_6->header) + VAR_6->header.size;
 bool VAR_10;
 int VAR_11;

 VAR_6->header.flags |= VAR_3;






 VAR_10 = !VAR_5;
 if (!(VAR_4->protocol_features &
   FUNC_0(VAR_2)))
  VAR_10 = 0;

 if (VAR_10)
  VAR_6->header.flags |= VAR_1;

 VAR_11 = FUNC_1(VAR_4->sock, VAR_6, VAR_9, VAR_7, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_10) {
  uint64_t VAR_12;

  VAR_11 = FUNC_2(VAR_4, &VAR_12);
  if (VAR_11)
   return VAR_11;

  if (VAR_12) {
   FUNC_3(VAR_4, "slave reports error: %llu\n", VAR_12);
   return -VAR_0;
  }
 }

 return 0;
}
