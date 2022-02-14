
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ,int) ;

void FUNC_2(int VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_1->dma_read(VAR_0, VAR_2);
 VAR_4 &= ~(1 << 6);
 if (VAR_3)
  VAR_4 |= (1 << 6);
 VAR_1->dma_write(VAR_4, VAR_0, VAR_2);
}
