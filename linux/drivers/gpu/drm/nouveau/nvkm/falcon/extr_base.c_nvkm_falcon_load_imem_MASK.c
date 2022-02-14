
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_falcon {TYPE_1__* func; int user; int secret; } ;
struct TYPE_2__ {int (* load_imem ) (struct nvkm_falcon*,void*,int ,int ,int ,int ,int) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nvkm_falcon*,void*,int ,int ,int ,int ,int) ;

void
FUNC_2(struct nvkm_falcon *VAR_0, void *VAR_1, u32 VAR_2,
        u32 VAR_3, u16 VAR_4, u8 VAR_5, bool VAR_6)
{
 if (VAR_6 && !VAR_0->secret) {
  FUNC_0(VAR_0->user,
     "writing with secure tag on a non-secure falcon!\n");
  return;
 }

 VAR_0->func->load_imem(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6);
}
