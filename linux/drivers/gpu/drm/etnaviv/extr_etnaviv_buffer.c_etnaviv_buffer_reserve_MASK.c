
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct etnaviv_gpu {TYPE_1__* mmu_context; } ;
struct etnaviv_cmdbuf {scalar_t__ user_size; scalar_t__ size; } ;
struct TYPE_2__ {int cmdbuf_mapping; } ;


 scalar_t__ FUNC_0 (struct etnaviv_cmdbuf*,int *) ;

__attribute__((used)) static u32 FUNC_1(struct etnaviv_gpu *VAR_0,
 struct etnaviv_cmdbuf *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->user_size + VAR_2 * sizeof(u64) > VAR_1->size)
  VAR_1->user_size = 0;

 return FUNC_0(VAR_1,
         &VAR_0->mmu_context->cmdbuf_mapping) +
        VAR_1->user_size;
}
