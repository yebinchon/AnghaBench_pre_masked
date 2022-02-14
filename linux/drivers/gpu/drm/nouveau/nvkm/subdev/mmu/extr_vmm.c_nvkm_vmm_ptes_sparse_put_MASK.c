
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_vmm_page {TYPE_2__* desc; } ;
struct nvkm_vmm {int dummy; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {scalar_t__ unmap; scalar_t__ invalid; } ;


 int FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int ,int ,char*,int,int,int ,int *,int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct nvkm_vmm *VAR_1, const struct nvkm_vmm_page *VAR_2,
    u64 VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, "sparse unref", 0, 0,
        VAR_0, ((void*)0), ((void*)0),
        VAR_2->desc->func->invalid ?
        VAR_2->desc->func->invalid : VAR_2->desc->func->unmap);
}
