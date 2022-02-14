
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_mxm {int * mxms; int subdev; } ;
struct mxm_shadow_h {scalar_t__ (* exec ) (struct nvkm_mxm*,int ) ;scalar_t__ name; } ;


 int VAR_0 ;
 struct mxm_shadow_h* VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nvkm_mxm*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nvkm_mxm*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_mxm *VAR_2, u8 VAR_3)
{
 struct mxm_shadow_h *VAR_4 = VAR_1;
 do {
  FUNC_2(&VAR_2->subdev, "checking %s\n", VAR_4->name);
  if (VAR_4->exec(VAR_2, VAR_3)) {
   if (FUNC_1(VAR_2))
    return 0;
   FUNC_0(VAR_2->mxms);
   VAR_2->mxms = ((void*)0);
  }
 } while ((++VAR_4)->name);
 return -VAR_0;
}
