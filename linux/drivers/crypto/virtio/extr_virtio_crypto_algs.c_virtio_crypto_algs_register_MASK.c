
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct virtio_crypto {TYPE_1__* vdev; } ;
struct TYPE_7__ {int cra_name; } ;
struct TYPE_6__ {scalar_t__ active_devs; TYPE_3__ algo; int algonum; int service; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct virtio_crypto*,int ,int ) ;
 TYPE_2__* VAR_1 ;

int FUNC_6(struct virtio_crypto *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 FUNC_3(&VAR_0);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {

  uint32_t VAR_5 = VAR_1[VAR_4].service;
  uint32_t VAR_6 = VAR_1[VAR_4].algonum;

  if (!FUNC_5(VAR_2, VAR_5, VAR_6))
   continue;

  if (VAR_1[VAR_4].active_devs == 0) {
   VAR_3 = FUNC_1(&VAR_1[VAR_4].algo);
   if (VAR_3)
    goto unlock;
  }

  VAR_1[VAR_4].active_devs++;
  FUNC_2(&VAR_2->vdev->dev, "Registered algo %s\n",
    VAR_1[VAR_4].algo.cra_name);
 }

unlock:
 FUNC_4(&VAR_0);
 return VAR_3;
}
