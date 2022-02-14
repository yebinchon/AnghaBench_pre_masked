
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {struct virtio_blk* priv; } ;
struct virtio_blk {int config_work; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_1)
{
 struct virtio_blk *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_0, &VAR_2->config_work);
}
