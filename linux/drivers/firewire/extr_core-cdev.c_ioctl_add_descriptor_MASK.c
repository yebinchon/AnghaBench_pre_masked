
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fw_cdev_add_descriptor {int length; int handle; int key; int immediate; int data; } ;
union ioctl_arg {struct fw_cdev_add_descriptor add_descriptor; } ;
struct TYPE_7__ {int handle; int release; } ;
struct TYPE_6__ {int length; int data; int key; int immediate; } ;
struct descriptor_resource {TYPE_4__ resource; TYPE_2__ descriptor; int data; } ;
struct client {TYPE_1__* device; } ;
struct TYPE_5__ {int is_local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct client*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct descriptor_resource*) ;
 struct descriptor_resource* FUNC_5 (int,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct client *VAR_6, union ioctl_arg *VAR_7)
{
 struct fw_cdev_add_descriptor *VAR_8 = &VAR_7->add_descriptor;
 struct descriptor_resource *VAR_9;
 int VAR_10;


 if (!VAR_6->device->is_local)
  return -VAR_3;

 if (VAR_8->length > 256)
  return -VAR_1;

 VAR_9 = FUNC_5(sizeof(*VAR_9) + VAR_8->length * 4, VAR_4);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 if (FUNC_1(VAR_9->data, FUNC_6(VAR_8->data), VAR_8->length * 4)) {
  VAR_10 = -VAR_0;
  goto failed;
 }

 VAR_9->descriptor.length = VAR_8->length;
 VAR_9->descriptor.immediate = VAR_8->immediate;
 VAR_9->descriptor.key = VAR_8->key;
 VAR_9->descriptor.data = VAR_9->data;

 VAR_10 = FUNC_2(&VAR_9->descriptor);
 if (VAR_10 < 0)
  goto failed;

 VAR_9->resource.release = VAR_5;
 VAR_10 = FUNC_0(VAR_6, &VAR_9->resource, VAR_4);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_9->descriptor);
  goto failed;
 }
 VAR_8->handle = VAR_9->resource.handle;

 return 0;
 failed:
 FUNC_4(VAR_9);

 return VAR_10;
}
