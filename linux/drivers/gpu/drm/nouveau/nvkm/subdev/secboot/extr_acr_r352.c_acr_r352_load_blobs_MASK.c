
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_secboot {scalar_t__ wpr_size; struct nvkm_subdev subdev; } ;
struct TYPE_2__ {scalar_t__ boot_falcon; } ;
struct acr_r352 {int firmware_ok; int * hsbl_blob; int * hsbl_unload_blob; TYPE_1__ base; int unload_bl_header; int unload_blob; int load_bl_header; int load_blob; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct acr_r352*,struct nvkm_secboot*,char*,int *,int *,int) ;
 int FUNC_3 (struct acr_r352*,struct nvkm_secboot*) ;
 void* FUNC_4 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_5 (struct nvkm_subdev*,char*) ;

int
FUNC_6(struct acr_r352 *VAR_1, struct nvkm_secboot *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 int VAR_4;


 if (VAR_1->firmware_ok)
  return 0;


 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;


 if (!VAR_1->load_blob) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, "acr/ucode_load",
            &VAR_1->load_blob,
            &VAR_1->load_bl_header, 1);
  if (VAR_4)
   return VAR_4;
 }


 if (VAR_2->wpr_size == 0) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, "acr/ucode_unload",
            &VAR_1->unload_blob,
            &VAR_1->unload_bl_header, 0);
  if (VAR_4)
   return VAR_4;
 }


 if (!VAR_1->hsbl_blob) {
  VAR_1->hsbl_blob = FUNC_4(VAR_3, "acr/bl", 0);
  if (FUNC_0(VAR_1->hsbl_blob)) {
   VAR_4 = FUNC_1(VAR_1->hsbl_blob);
   VAR_1->hsbl_blob = ((void*)0);
   return VAR_4;
  }

  if (VAR_1->base.boot_falcon != VAR_0) {
   VAR_1->hsbl_unload_blob = FUNC_4(VAR_3,
           "acr/unload_bl", 0);
   if (FUNC_0(VAR_1->hsbl_unload_blob)) {
    VAR_4 = FUNC_1(VAR_1->hsbl_unload_blob);
    VAR_1->hsbl_unload_blob = ((void*)0);
    return VAR_4;
   }
  } else {
   VAR_1->hsbl_unload_blob = VAR_1->hsbl_blob;
  }
 }

 VAR_1->firmware_ok = 1;
 FUNC_5(&VAR_2->subdev, "LS blob successfully created\n");

 return 0;
}
