
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_blk {int vdev; } ;
struct blk_mq_tag_set {int * map; struct virtio_blk* driver_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct blk_mq_tag_set *VAR_1)
{
 struct virtio_blk *VAR_2 = VAR_1->driver_data;

 return FUNC_0(&VAR_1->map[VAR_0],
     VAR_2->vdev, 0);
}
