
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,int ,int) ;
 int FUNC_11 (int,int ,int) ;

void FUNC_12(int VAR_9, int VAR_10, int VAR_11,
      int VAR_12, int VAR_13,
      int VAR_14, int VAR_15)
{
 u32 VAR_16;

 VAR_16 = VAR_8->dma_read(VAR_4, VAR_9);
 VAR_16 &= ~0x03;
 VAR_16 |= VAR_10;
 VAR_8->dma_write(VAR_16, VAR_4, VAR_9);

 if (FUNC_0()) {
  u16 VAR_17;

  VAR_17 = VAR_8->dma_read(VAR_0, VAR_9);
  VAR_17 &= ~(1 << 5);
  if (VAR_13 == VAR_7)
   VAR_17 |= 1 << 5;
  VAR_8->dma_write(VAR_17, VAR_0, VAR_9);

  VAR_17 = VAR_8->dma_read(VAR_1, VAR_9);
  VAR_17 &= ~(1 << 2);
  if (VAR_13 == VAR_6)
   VAR_17 |= 1 << 2;
  VAR_8->dma_write(VAR_17, VAR_1, VAR_9);
 }

 if (FUNC_1() && VAR_14) {
  u32 VAR_18;

  VAR_18 = VAR_8->dma_read(VAR_0, VAR_9);


  VAR_18 &= ~((1 << 23) | (3 << 19) | 0x1f);
  VAR_18 |= (VAR_14 & ~0x1f) << 14;
  VAR_18 |= VAR_14 & 0x1f;

  if (VAR_13 & VAR_7)
   VAR_18 |= 1 << 5;
  else
   VAR_18 &= ~(1 << 5);

  if (VAR_13 & VAR_6)
   VAR_18 |= 1 << 18;
  else
   VAR_18 &= ~(1 << 18);

  if (VAR_15 == VAR_5) {
   VAR_18 &= ~(1 << 24);
   VAR_18 |= (1 << 23);
  } else if (VAR_15) {
   VAR_18 |= 1 << 24;
  } else {
   VAR_18 &= ~(1 << 24);
  }
  VAR_8->dma_write(VAR_18, VAR_0, VAR_9);
 }

 VAR_8->dma_write(VAR_11, VAR_2, VAR_9);
 VAR_8->dma_write(VAR_12, VAR_3, VAR_9);
}
