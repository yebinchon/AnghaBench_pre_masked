
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_vmm_page {TYPE_1__* desc; } ;
struct nvkm_vmm_desc_func {scalar_t__ unmap; scalar_t__ invalid; scalar_t__ sparse; } ;
struct nvkm_vmm {int dummy; } ;
struct TYPE_2__ {struct nvkm_vmm_desc_func* func; } ;


 int FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int ,int ,char*,int,int,int *,int *,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_vmm *VAR_0, const struct nvkm_vmm_page *VAR_1,
      u64 VAR_2, u64 VAR_3, bool VAR_4, bool VAR_5)
{
 const struct nvkm_vmm_desc_func *VAR_6 = VAR_1->desc->func;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "unmap", 0, VAR_5,
        ((void*)0), ((void*)0), ((void*)0),
        VAR_4 ? VAR_6->sparse : VAR_6->invalid ? VAR_6->invalid :
             VAR_6->unmap);
}
