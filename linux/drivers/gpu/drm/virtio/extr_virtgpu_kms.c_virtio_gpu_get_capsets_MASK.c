
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_gpu_drv_capset {int dummy; } ;
struct virtio_gpu_device {int num_capsets; TYPE_1__* capsets; int resp_wq; } ;
struct TYPE_3__ {scalar_t__ id; int max_size; int max_version; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct virtio_gpu_device*,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct virtio_gpu_device *VAR_2,
       int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_2->capsets = FUNC_2(VAR_3,
     sizeof(struct virtio_gpu_drv_capset),
     VAR_0);
 if (!VAR_2->capsets) {
  FUNC_0("failed to allocate cap sets\n");
  return;
 }
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_4(VAR_2, VAR_4);
  VAR_5 = FUNC_5(VAR_2->resp_wq,
      VAR_2->capsets[VAR_4].id > 0, 5 * VAR_1);
  if (VAR_5 == 0) {
   FUNC_0("timed out waiting for cap set %d\n", VAR_4);
   FUNC_3(VAR_2->capsets);
   VAR_2->capsets = ((void*)0);
   return;
  }
  FUNC_1("cap set %d: id %d, max-version %d, max-size %d\n",
    VAR_4, VAR_2->capsets[VAR_4].id,
    VAR_2->capsets[VAR_4].max_version,
    VAR_2->capsets[VAR_4].max_size);
 }
 VAR_2->num_capsets = VAR_3;
}
