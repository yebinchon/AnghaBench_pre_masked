
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct virtio_gpu_device {int ctx_id_ida; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct virtio_gpu_device*,int,int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct virtio_gpu_device *VAR_1,
          uint32_t VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_1->ctx_id_ida, VAR_0);

 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 += 1;
 FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3);
 return VAR_4;
}
