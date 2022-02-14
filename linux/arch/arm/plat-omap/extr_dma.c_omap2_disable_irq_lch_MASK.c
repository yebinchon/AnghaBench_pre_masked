
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int ,int) ;

__attribute__((used)) static inline void FUNC_6(int VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;

 if (FUNC_0())
  return;

 FUNC_1(&VAR_2, VAR_6);

 VAR_5 = VAR_3->dma_read(VAR_0, VAR_4);
 VAR_5 &= ~(1 << VAR_4);
 VAR_3->dma_write(VAR_5, VAR_0, VAR_4);

 VAR_3->dma_write(1 << VAR_4, VAR_1, VAR_4);
 FUNC_2(&VAR_2, VAR_6);
}
