
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virtio_uml_platform_data {int socket_path; int virtio_device_id; } ;
struct TYPE_7__ {int release; TYPE_4__* parent; } ;
struct TYPE_5__ {int vendor; int device; } ;
struct TYPE_6__ {TYPE_3__ dev; TYPE_1__ id; int * config; } ;
struct virtio_uml_device {int req_fd; int sock; TYPE_2__ vdev; struct platform_device* pdev; } ;
struct TYPE_8__ {struct virtio_uml_platform_data* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct virtio_uml_device* FUNC_0 (TYPE_4__*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct platform_device*,struct virtio_uml_device*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct virtio_uml_device*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct virtio_uml_platform_data *VAR_8 = VAR_7->dev.platform_data;
 struct virtio_uml_device *VAR_9;
 int VAR_10;

 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_0(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->vdev.dev.parent = &VAR_7->dev;
 VAR_9->vdev.dev.release = VAR_6;
 VAR_9->vdev.config = &VAR_5;
 VAR_9->vdev.id.device = VAR_8->virtio_device_id;
 VAR_9->vdev.id.vendor = VAR_4;
 VAR_9->pdev = VAR_7;
 VAR_9->req_fd = -1;

 do {
  VAR_10 = FUNC_2(VAR_8->socket_path);
 } while (VAR_10 == -VAR_0);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9->sock = VAR_10;

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10)
  goto error_init;

 FUNC_3(VAR_7, VAR_9);

 VAR_10 = FUNC_5(&VAR_9->vdev);
 if (VAR_10)
  FUNC_4(&VAR_9->vdev.dev);
 return VAR_10;

error_init:
 FUNC_1(VAR_9->sock);
 return VAR_10;
}
