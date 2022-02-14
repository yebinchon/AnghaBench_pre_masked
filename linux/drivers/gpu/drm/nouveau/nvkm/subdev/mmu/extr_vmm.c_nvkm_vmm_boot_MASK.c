
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nvkm_vmm_page {scalar_t__ shift; } ;
struct nvkm_vmm {int bootstrapped; scalar_t__ start; scalar_t__ limit; TYPE_1__* func; } ;
struct TYPE_2__ {struct nvkm_vmm_page* page; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,scalar_t__,scalar_t__ const,char*,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vmm_page const*,scalar_t__,scalar_t__ const) ;

int
FUNC_2(struct nvkm_vmm *VAR_1)
{
 const struct nvkm_vmm_page *VAR_2 = VAR_1->func->page;
 const u64 VAR_3 = VAR_1->limit - VAR_1->start;
 int VAR_4;

 while (VAR_2[1].shift)
  VAR_2++;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_1->start, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_1, VAR_2, VAR_1->start, VAR_3, "bootstrap", 0, 0,
        VAR_0, ((void*)0), ((void*)0), ((void*)0));
 VAR_1->bootstrapped = 1;
 return 0;
}
