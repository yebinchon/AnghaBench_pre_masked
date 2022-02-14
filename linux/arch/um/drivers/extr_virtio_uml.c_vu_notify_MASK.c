
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct virtqueue {struct virtio_uml_vq_info* priv; } ;
struct virtio_uml_vq_info {int kick_fd; } ;
typedef int n ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static bool FUNC_2(struct virtqueue *VAR_1)
{
 struct virtio_uml_vq_info *VAR_2 = VAR_1->priv;
 const uint64_t VAR_3 = 1;
 int VAR_4;

 do {
  VAR_4 = FUNC_1(VAR_2->kick_fd, &VAR_3, sizeof(VAR_3));
 } while (VAR_4 == -VAR_0);
 return !FUNC_0(VAR_4 != sizeof(VAR_3), "write returned %d\n", VAR_4);
}
