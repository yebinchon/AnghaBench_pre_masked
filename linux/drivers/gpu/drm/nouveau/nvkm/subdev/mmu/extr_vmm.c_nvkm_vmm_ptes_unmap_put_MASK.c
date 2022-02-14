
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


 int FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int ,int ,char*,int,int,int ,int *,int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct nvkm_vmm *VAR_1, const struct nvkm_vmm_page *VAR_2,
   u64 VAR_3, u64 VAR_4, bool VAR_5, bool VAR_6)
{
 const struct nvkm_vmm_desc_func *VAR_7 = VAR_2->desc->func;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, "unmap + unref",
        0, VAR_6, VAR_0, ((void*)0), ((void*)0),
        VAR_5 ? VAR_7->sparse : VAR_7->invalid ? VAR_7->invalid :
             VAR_7->unmap);
}
