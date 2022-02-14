
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
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (unsigned long,int ,int) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int ,int) ;

void FUNC_8(int VAR_6, int VAR_7, int VAR_8,
         unsigned long VAR_9,
         int VAR_10, int VAR_11)
{
 u32 VAR_12;

 if (FUNC_0()) {
  VAR_12 = VAR_5->dma_read(VAR_4, VAR_6);
  VAR_12 &= ~(0x1f << 9);
  VAR_12 |= VAR_7 << 9;
  VAR_5->dma_write(VAR_12, VAR_4, VAR_6);
 }

 VAR_12 = VAR_5->dma_read(VAR_0, VAR_6);
 VAR_12 &= ~(0x03 << 14);
 VAR_12 |= VAR_8 << 14;
 VAR_5->dma_write(VAR_12, VAR_0, VAR_6);

 VAR_5->dma_write(VAR_9, VAR_3, VAR_6);

 VAR_5->dma_write(VAR_10, VAR_1, VAR_6);
 VAR_5->dma_write(VAR_11, VAR_2, VAR_6);
}
