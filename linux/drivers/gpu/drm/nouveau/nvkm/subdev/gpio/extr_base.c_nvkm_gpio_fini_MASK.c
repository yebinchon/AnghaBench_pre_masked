
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_gpio {TYPE_1__* func; } ;
struct TYPE_2__ {unsigned long long lines; int (* intr_stat ) (struct nvkm_gpio*,unsigned long long*,unsigned long long*) ;int (* intr_mask ) (struct nvkm_gpio*,int ,unsigned long long,int ) ;} ;


 int VAR_0 ;
 struct nvkm_gpio* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_gpio*,int ,unsigned long long,int ) ;
 int FUNC_2 (struct nvkm_gpio*,unsigned long long*,unsigned long long*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_subdev *VAR_1, bool VAR_2)
{
 struct nvkm_gpio *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = (1ULL << VAR_3->func->lines) - 1;

 VAR_3->func->intr_mask(VAR_3, VAR_0, VAR_4, 0);
 VAR_3->func->intr_stat(VAR_3, &VAR_4, &VAR_4);
 return 0;
}
