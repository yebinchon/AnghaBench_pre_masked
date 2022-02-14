
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char const vq_callback_t ;
typedef char const virtqueue ;
struct virtio_crypto {int max_data_queues; char const* ctrl_vq; TYPE_1__* data_vq; TYPE_2__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {char* name; char const* vq; int engine; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int) ;
 char** FUNC_1 (int,int,int ) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *) ;
 char* VAR_2 ;
 int FUNC_5 (TYPE_2__*,int,char const**,char const**,char const**,int *) ;

__attribute__((used)) static int FUNC_6(struct virtio_crypto *VAR_3)
{
 vq_callback_t **VAR_4;
 struct virtqueue **VAR_5;
 int VAR_6 = -VAR_0;
 int VAR_7, VAR_8;
 const char **VAR_9;
 struct device *VAR_10 = &VAR_3->vdev->dev;






 VAR_8 = VAR_3->max_data_queues + 1;


 VAR_5 = FUNC_1(VAR_8, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto err_vq;
 VAR_4 = FUNC_1(VAR_8, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto err_callback;
 VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  goto err_names;


 VAR_4[VAR_8 - 1] = ((void*)0);
 VAR_9[VAR_8 - 1] = "controlq";


 for (VAR_7 = 0; VAR_7 < VAR_3->max_data_queues; VAR_7++) {
  VAR_4[VAR_7] = VAR_2;
  FUNC_3(VAR_3->data_vq[VAR_7].name, sizeof(VAR_3->data_vq[VAR_7].name),
    "dataq.%d", VAR_7);
  VAR_9[VAR_7] = VAR_3->data_vq[VAR_7].name;
 }

 VAR_6 = FUNC_5(VAR_3->vdev, VAR_8, VAR_5, VAR_4, VAR_9, ((void*)0));
 if (VAR_6)
  goto err_find;

 VAR_3->ctrl_vq = VAR_5[VAR_8 - 1];

 for (VAR_7 = 0; VAR_7 < VAR_3->max_data_queues; VAR_7++) {
  FUNC_4(&VAR_3->data_vq[VAR_7].lock);
  VAR_3->data_vq[VAR_7].vq = VAR_5[VAR_7];

  VAR_3->data_vq[VAR_7].engine = FUNC_0(VAR_10, 1);
  if (!VAR_3->data_vq[VAR_7].engine) {
   VAR_6 = -VAR_0;
   goto err_engine;
  }
 }

 FUNC_2(VAR_9);
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);

 return 0;

err_engine:
err_find:
 FUNC_2(VAR_9);
err_names:
 FUNC_2(VAR_4);
err_callback:
 FUNC_2(VAR_5);
err_vq:
 return VAR_6;
}
