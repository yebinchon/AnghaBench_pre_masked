
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_uml_device {int req_fd; TYPE_1__* pdev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,struct virtio_uml_device*) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,struct virtio_uml_device*) ;
 int FUNC_4 (struct virtio_uml_device*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct virtio_uml_device *VAR_5)
{
 int VAR_6, VAR_7[2];


 VAR_6 = FUNC_1(VAR_7, 1, 1);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5->req_fd = VAR_7[0];

 VAR_6 = FUNC_3(VAR_3, VAR_5->req_fd, VAR_1,
       VAR_4, VAR_0,
       VAR_5->pdev->name, VAR_5);
 if (VAR_6)
  goto err_close;

 VAR_6 = FUNC_4(VAR_5, VAR_2,
        VAR_7[1]);
 if (VAR_6)
  goto err_free_irq;

 goto out;

err_free_irq:
 FUNC_2(VAR_3, VAR_5);
err_close:
 FUNC_0(VAR_7[0]);
out:

 FUNC_0(VAR_7[1]);
 return VAR_6;
}
