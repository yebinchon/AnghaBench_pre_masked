
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtio_device {int dummy; } ;
struct viommu_dev {int vqs; int dev; } ;


 int VAR_0 ;
 struct virtio_device* FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct virtio_device*,int ,int ,int **,char const**,int *) ;

__attribute__((used)) static int FUNC_2(struct viommu_dev *VAR_2)
{
 struct virtio_device *VAR_3 = FUNC_0(VAR_2->dev);
 const char *VAR_4[] = { "request", "event" };
 vq_callback_t *VAR_5[] = {
  ((void*)0),
  VAR_1,
 };

 return FUNC_1(VAR_3, VAR_0, VAR_2->vqs, VAR_5,
          VAR_4, ((void*)0));
}
