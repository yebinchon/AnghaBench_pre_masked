
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etnaviv_cmdbuf {int user_size; } ;
struct etnaviv_gpu {TYPE_1__* mmu_context; int lock; struct etnaviv_cmdbuf buffer; } ;
struct TYPE_2__ {int cmdbuf_mapping; } ;


 int FUNC_0 (struct etnaviv_cmdbuf*) ;
 int FUNC_1 (struct etnaviv_cmdbuf*,int,scalar_t__) ;
 int FUNC_2 (struct etnaviv_cmdbuf*,int ,int) ;
 int FUNC_3 (struct etnaviv_cmdbuf*) ;
 int VAR_0 ;
 int FUNC_4 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct etnaviv_cmdbuf*,unsigned int,int,int) ;
 int FUNC_7 (struct etnaviv_gpu*,struct etnaviv_cmdbuf*,int) ;
 scalar_t__ FUNC_8 (struct etnaviv_cmdbuf*,int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct etnaviv_gpu *VAR_3, unsigned int VAR_4)
{
 struct etnaviv_cmdbuf *VAR_5 = &VAR_3->buffer;
 unsigned int VAR_6 = VAR_5->user_size - 16;
 u32 VAR_7, VAR_8;

 FUNC_9(&VAR_3->lock);





 VAR_7 = 4;
 VAR_8 = FUNC_7(VAR_3, VAR_5, VAR_7);


 FUNC_2(VAR_5, VAR_0, FUNC_4(VAR_4) |
         VAR_1);


 FUNC_0(VAR_5);


 FUNC_3(VAR_5);
 FUNC_1(VAR_5, 2,
   FUNC_8(VAR_5, &VAR_3->mmu_context->cmdbuf_mapping)
   + VAR_5->user_size - 4);





 FUNC_6(VAR_5, VAR_6,
        VAR_2 |
        FUNC_5(VAR_7),
        VAR_8);
}
