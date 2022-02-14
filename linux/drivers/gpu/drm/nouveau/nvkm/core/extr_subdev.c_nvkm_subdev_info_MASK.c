
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_subdev {TYPE_1__* func; } ;
struct TYPE_2__ {int (* info ) (struct nvkm_subdev*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,int ,int *) ;

int
FUNC_1(struct nvkm_subdev *VAR_1, u64 VAR_2, u64 *VAR_3)
{
 if (VAR_1->func->info)
  return VAR_1->func->info(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
