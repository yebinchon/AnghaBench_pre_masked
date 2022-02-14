
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_pmu {TYPE_1__* func; } ;
struct TYPE_2__ {int (* send ) (struct nvkm_pmu*,int *,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_pmu*,int *,int ,int ,int ,int ) ;

int
FUNC_1(struct nvkm_pmu *VAR_1, u32 VAR_2[2],
       u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 if (!VAR_1 || !VAR_1->func->send)
  return -VAR_0;
 return VAR_1->func->send(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
