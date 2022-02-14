
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_falcon {int dmem_mutex; TYPE_1__* func; } ;
struct TYPE_2__ {int (* read_dmem ) (struct nvkm_falcon*,int ,int ,int ,void*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_falcon*,int ,int ,int ,void*) ;

void
FUNC_3(struct nvkm_falcon *VAR_0, u32 VAR_1, u32 VAR_2, u8 VAR_3,
        void *VAR_4)
{
 FUNC_0(&VAR_0->dmem_mutex);

 VAR_0->func->read_dmem(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1(&VAR_0->dmem_mutex);
}
