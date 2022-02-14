
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_secboot {int wpr_set; int halt_falcon; TYPE_1__* func; struct nvkm_subdev subdev; } ;
struct acr_r352 {int * falcon_state; scalar_t__ unload_blob; } ;
struct TYPE_2__ {int (* run_blob ) (struct nvkm_secboot*,scalar_t__,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvkm_subdev*,char*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_secboot*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(struct acr_r352 *VAR_3, struct nvkm_secboot *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_4->subdev;
 int VAR_6;


 if (VAR_3->unload_blob && VAR_4->wpr_set) {
  int VAR_7;

  FUNC_0(VAR_5, "running HS unload blob\n");
  VAR_7 = VAR_4->func->run_blob(VAR_4, VAR_3->unload_blob, VAR_4->halt_falcon);
  if (VAR_7 < 0)
   return VAR_7;




  if (VAR_7 && VAR_7 != 0x1d) {
   FUNC_1(VAR_5, "HS unload failed, ret 0x%08x\n", VAR_7);
   return -VAR_0;
  }
  FUNC_0(VAR_5, "HS unload blob completed\n");
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_3->falcon_state[VAR_6] = VAR_1;

 VAR_4->wpr_set = 0;

 return 0;
}
