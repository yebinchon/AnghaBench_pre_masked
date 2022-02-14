
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_msg {int dummy; } ;
struct nvkm_msgqueue_hdr {int dummy; } ;
struct nvkm_msgqueue {int init_done; TYPE_1__* falcon; } ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_subdev const*,char*) ;
 int FUNC_2 (struct nvkm_subdev const*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_msgqueue *VAR_0,
        struct nvkm_msgqueue_hdr *VAR_1)
{
 struct {
  struct nvkm_msgqueue_msg base;
  u32 error_code;
 } *VAR_2 = (void *)VAR_1;
 const struct nvkm_subdev *VAR_3 = VAR_0->falcon->owner;

 if (VAR_2->error_code) {
  FUNC_2(VAR_3, "ACR WPR init failure: %d\n",
      VAR_2->error_code);
  return;
 }

 FUNC_1(VAR_3, "ACR WPR init complete\n");
 FUNC_0(&VAR_0->init_done);
}
