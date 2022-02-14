
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct viommu_event {int head; int fault; } ;
struct viommu_dev {int dev; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {struct viommu_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct scatterlist*,struct viommu_event*,int) ;
 int FUNC_2 (struct viommu_dev*,int *) ;
 int FUNC_3 (struct virtqueue*,struct scatterlist*,int,struct viommu_event*,int ) ;
 struct viommu_event* FUNC_4 (struct virtqueue*,unsigned int*) ;
 int FUNC_5 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_6(struct virtqueue *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;
 struct scatterlist VAR_5[1];
 struct viommu_event *VAR_6;
 struct viommu_dev *VAR_7 = VAR_2->vdev->priv;

 while ((VAR_6 = FUNC_4(VAR_2, &VAR_4)) != ((void*)0)) {
  if (VAR_4 > sizeof(*VAR_6)) {
   FUNC_0(VAR_7->dev,
    "invalid event buffer (len %u != %zu)\n",
    VAR_4, sizeof(*VAR_6));
  } else if (!(VAR_6->head & VAR_1)) {
   FUNC_2(VAR_7, &VAR_6->fault);
  }

  FUNC_1(VAR_5, VAR_6, sizeof(*VAR_6));
  VAR_3 = FUNC_3(VAR_2, VAR_5, 1, VAR_6, VAR_0);
  if (VAR_3)
   FUNC_0(VAR_7->dev, "could not add event buffer\n");
 }

 FUNC_5(VAR_2);
}
