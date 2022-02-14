
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct virtqueue {struct virtio_uml_vq_info* priv; } ;
struct virtio_uml_vq_info {int call_fd; } ;
typedef int n ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int,struct virtqueue*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct virtqueue *VAR_5 = VAR_4;
 struct virtio_uml_vq_info *VAR_6 = VAR_5->priv;
 uint64_t VAR_7;
 int VAR_8;
 irqreturn_t VAR_9 = VAR_2;

 do {
  VAR_8 = FUNC_1(VAR_6->call_fd, &VAR_7, sizeof(VAR_7));
  if (VAR_8 == sizeof(VAR_7))
   VAR_9 |= FUNC_2(VAR_3, VAR_5);
 } while (VAR_8 == sizeof(VAR_7) || VAR_8 == -VAR_1);
 FUNC_0(VAR_8 != -VAR_0, "read returned %d\n", VAR_8);
 return VAR_9;
}
