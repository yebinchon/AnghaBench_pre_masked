
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {struct virtio_uml_vq_info* priv; } ;
struct virtio_uml_vq_info {int kick_fd; int call_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_uml_vq_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct virtqueue*) ;
 int FUNC_3 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_4(struct virtqueue *VAR_1)
{
 struct virtio_uml_vq_info *VAR_2 = VAR_1->priv;

 FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_2->call_fd);
 FUNC_1(VAR_2->kick_fd);

 FUNC_3(VAR_1);
 FUNC_0(VAR_2);
}
