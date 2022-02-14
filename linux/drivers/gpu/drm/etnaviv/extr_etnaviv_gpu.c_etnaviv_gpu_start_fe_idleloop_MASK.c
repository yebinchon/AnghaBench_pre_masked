
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct etnaviv_gpu {TYPE_1__* mmu_context; int buffer; } ;
struct TYPE_2__ {int cmdbuf_mapping; } ;


 int FUNC_0 (struct etnaviv_gpu*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct etnaviv_gpu*,int ,int ) ;
 int FUNC_3 (struct etnaviv_gpu*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct etnaviv_gpu *VAR_0)
{
 u32 VAR_1 = FUNC_1(&VAR_0->buffer,
    &VAR_0->mmu_context->cmdbuf_mapping);
 u16 VAR_2;


 FUNC_3(VAR_0, VAR_0->mmu_context);


 VAR_2 = FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_1, VAR_2);
}
