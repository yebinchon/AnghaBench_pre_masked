
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_falcon {TYPE_1__* func; } ;
struct TYPE_2__ {int (* wait_for_halt ) (struct nvkm_falcon*,int ) ;} ;


 int FUNC_0 (struct nvkm_falcon*,int ) ;

int
FUNC_1(struct nvkm_falcon *VAR_0, u32 VAR_1)
{
 return VAR_0->func->wait_for_halt(VAR_0, VAR_1);
}
