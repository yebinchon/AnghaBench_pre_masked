
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_msg {int dummy; } ;
struct nvkm_msgqueue_hdr {int dummy; } ;
struct nvkm_msgqueue {TYPE_1__* falcon; } ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nvkm_subdev const*,char*,int ) ;
 int FUNC_1 (struct nvkm_subdev const*,char*,...) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct nvkm_msgqueue *VAR_2,
    struct nvkm_msgqueue_hdr *VAR_3)
{
 struct acr_bootstrap_falcon_msg {
  struct nvkm_msgqueue_msg base;

  u32 error_code;
  u32 falcon_id;
 } *VAR_4 = (void *)VAR_3;
 const struct nvkm_subdev *VAR_5 = VAR_2->falcon->owner;
 u32 VAR_6 = VAR_4->falcon_id;

 if (VAR_4->error_code) {
  FUNC_1(VAR_5, "in bootstrap falcon callback:\n");
  FUNC_1(VAR_5, "expected error code 0x%x\n",
      VAR_4->error_code);
  return;
 }

 if (VAR_6 >= VAR_0) {
  FUNC_1(VAR_5, "in bootstrap falcon callback:\n");
  FUNC_1(VAR_5, "invalid falcon ID 0x%x\n", VAR_6);
  return;
 }

 FUNC_0(VAR_5, "%s booted\n", VAR_1[VAR_6]);
}
