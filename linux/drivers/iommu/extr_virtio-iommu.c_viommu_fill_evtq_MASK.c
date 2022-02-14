
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {size_t num_free; } ;
struct viommu_event {int dummy; } ;
struct viommu_dev {int dev; struct viommu_event* evts; struct virtqueue** vqs; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct viommu_event* FUNC_0 (int ,size_t,int,int ) ;
 int FUNC_1 (struct scatterlist*,struct viommu_event*,int) ;
 int FUNC_2 (struct virtqueue*,struct scatterlist*,int,struct viommu_event*,int ) ;

__attribute__((used)) static int FUNC_3(struct viommu_dev *VAR_3)
{
 int VAR_4, VAR_5;
 struct scatterlist VAR_6[1];
 struct viommu_event *VAR_7;
 struct virtqueue *VAR_8 = VAR_3->vqs[VAR_2];
 size_t VAR_9 = VAR_8->num_free;

 VAR_3->evts = VAR_7 = FUNC_0(VAR_3->dev, VAR_9,
       sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_9; VAR_4++) {
  FUNC_1(VAR_6, &VAR_7[VAR_4], sizeof(*VAR_7));
  VAR_5 = FUNC_2(VAR_8, VAR_6, 1, &VAR_7[VAR_4], VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
