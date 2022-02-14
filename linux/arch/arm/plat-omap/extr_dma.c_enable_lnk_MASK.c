
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int next_lch; int next_linked_ch; } ;
struct TYPE_3__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static inline void FUNC_4(int VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_2->dma_read(VAR_0, VAR_3);

 if (FUNC_0())
  VAR_4 &= ~(1 << 14);


 if (VAR_1[VAR_3].next_lch != -1)
  VAR_4 = VAR_1[VAR_3].next_lch | (1 << 15);


 if (FUNC_1())
  if (VAR_1[VAR_3].next_linked_ch != -1)
   VAR_4 = VAR_1[VAR_3].next_linked_ch | (1 << 15);


 VAR_2->dma_write(VAR_4, VAR_0, VAR_3);
}
