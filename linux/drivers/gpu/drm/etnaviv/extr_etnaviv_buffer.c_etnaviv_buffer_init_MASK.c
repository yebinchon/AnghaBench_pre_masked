
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct etnaviv_cmdbuf {int user_size; } ;
struct etnaviv_gpu {TYPE_1__* mmu_context; int lock; struct etnaviv_cmdbuf buffer; } ;
struct TYPE_2__ {int cmdbuf_mapping; } ;


 int FUNC_0 (struct etnaviv_cmdbuf*,int,scalar_t__) ;
 int FUNC_1 (struct etnaviv_cmdbuf*) ;
 scalar_t__ FUNC_2 (struct etnaviv_cmdbuf*,int *) ;
 int FUNC_3 (int *) ;

u16 FUNC_4(struct etnaviv_gpu *VAR_0)
{
 struct etnaviv_cmdbuf *VAR_1 = &VAR_0->buffer;

 FUNC_3(&VAR_0->lock);


 VAR_1->user_size = 0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, 2,
   FUNC_2(VAR_1, &VAR_0->mmu_context->cmdbuf_mapping)
   + VAR_1->user_size - 4);

 return VAR_1->user_size / 8;
}
