
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_nvsw {TYPE_1__* func; } ;
struct TYPE_2__ {int (* mthd ) (struct nvkm_nvsw*,int ,void*,int ) ;} ;


 int VAR_0 ;
 struct nvkm_nvsw* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_nvsw*,int ,void*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_1, u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 struct nvkm_nvsw *VAR_5 = FUNC_0(VAR_1);
 if (VAR_5->func->mthd)
  return VAR_5->func->mthd(VAR_5, VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
