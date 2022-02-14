
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int index; struct virtio_uml_vq_info* priv; } ;
struct virtio_uml_vq_info {int call_fd; int name; } ;
struct virtio_uml_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,struct virtqueue*) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,struct virtqueue*) ;
 int FUNC_4 (struct virtio_uml_device*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct virtio_uml_device *VAR_4,
          struct virtqueue *VAR_5)
{
 struct virtio_uml_vq_info *VAR_6 = VAR_5->priv;
 int VAR_7[2];
 int VAR_8;


 VAR_8 = FUNC_1(VAR_7, 1, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->call_fd = VAR_7[0];
 VAR_8 = FUNC_3(VAR_2, VAR_6->call_fd, VAR_1,
       VAR_3, VAR_0, VAR_6->name, VAR_5);
 if (VAR_8)
  goto close_both;

 VAR_8 = FUNC_4(VAR_4, VAR_5->index, VAR_7[1]);
 if (VAR_8)
  goto release_irq;

 goto out;

release_irq:
 FUNC_2(VAR_2, VAR_5);
close_both:
 FUNC_0(VAR_7[0]);
out:

 FUNC_0(VAR_7[1]);

 return VAR_8;
}
