
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_chan_link_map ;
struct TYPE_4__ {int next_lch; int flags; } ;
struct TYPE_3__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_12 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int,int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int,int ,int) ;
 int FUNC_16 (int,int ,int) ;
 int FUNC_17 (int) ;

void FUNC_18(int VAR_13)
{
 u32 VAR_14;


 FUNC_5(VAR_13);

 VAR_14 = VAR_12->dma_read(VAR_0, VAR_13);
 if (FUNC_1(VAR_1) &&
   (VAR_14 & VAR_9)) {
  int VAR_15 = 0;
  u32 VAR_16;


  VAR_14 = VAR_12->dma_read(VAR_5, VAR_13);
  VAR_16 = VAR_14;
  VAR_14 &= ~VAR_3;
  VAR_14 |= FUNC_0(VAR_2);
  VAR_12->dma_write(VAR_14 , VAR_5, 0);

  VAR_14 = VAR_12->dma_read(VAR_0, VAR_13);
  VAR_14 &= ~VAR_7;
  VAR_12->dma_write(VAR_14, VAR_0, VAR_13);


  VAR_14 = VAR_12->dma_read(VAR_0, VAR_13);
  while (VAR_15 < 100 && (VAR_14 & (VAR_8 |
     VAR_10))) {
   FUNC_17(5);
   VAR_15++;
   VAR_14 = VAR_12->dma_read(VAR_0, VAR_13);
  }
  if (VAR_15 >= 100)
   FUNC_7("DMA drain did not complete on lch %d\n", VAR_13);

  VAR_12->dma_write(VAR_16, VAR_5, VAR_13);
 } else {
  VAR_14 &= ~VAR_7;
  VAR_12->dma_write(VAR_14, VAR_0, VAR_13);
 }






 FUNC_3();

 if (!FUNC_6() && VAR_11[VAR_13].next_lch != -1) {
  int VAR_17, VAR_18 = VAR_13;
  char VAR_19[VAR_4];

  FUNC_4(VAR_19, 0, sizeof(VAR_19));
  do {

   if (VAR_19[VAR_18])
    break;

   VAR_19[VAR_18] = 1;

   FUNC_2(VAR_18);

   VAR_17 = VAR_11[VAR_18].next_lch;
   VAR_18 = VAR_17;
  } while (VAR_17 != -1);
 }

 VAR_11[VAR_13].flags &= ~VAR_6;
}
