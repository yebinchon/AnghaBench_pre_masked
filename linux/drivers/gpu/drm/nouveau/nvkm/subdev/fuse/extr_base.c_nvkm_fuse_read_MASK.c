
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fuse {TYPE_1__* func; } ;
struct TYPE_2__ {int (* read ) (struct nvkm_fuse*,int ) ;} ;


 int FUNC_0 (struct nvkm_fuse*,int ) ;

u32
FUNC_1(struct nvkm_fuse *VAR_0, u32 VAR_1)
{
 return VAR_0->func->read(VAR_0, VAR_1);
}
