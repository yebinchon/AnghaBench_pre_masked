
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int,int ,int) ;

void FUNC_12(int VAR_12)
{
 u32 VAR_13;





 if (FUNC_1())
  VAR_11->dma_write(0, VAR_3, VAR_12);
 else
  VAR_11->dma_write(0, VAR_1, VAR_12);

 if (!FUNC_5() && VAR_10[VAR_12].next_lch != -1) {
  int VAR_14, VAR_15;
  char VAR_16[VAR_6];


  FUNC_2(VAR_12);

  FUNC_4(VAR_16, 0, sizeof(VAR_16));
  VAR_16[VAR_12] = 1;

  VAR_15 = VAR_10[VAR_12].next_lch;
  do {
   VAR_14 = VAR_10[VAR_15].next_lch;


   if (VAR_16[VAR_15])
    break;

   VAR_16[VAR_15] = 1;

   FUNC_2(VAR_15);
   FUNC_6(VAR_15);

   VAR_15 = VAR_14;
  } while (VAR_14 != -1);
 } else if (FUNC_0(VAR_5))
  VAR_11->dma_write(VAR_12, VAR_2, VAR_12);

 FUNC_6(VAR_12);

 VAR_13 = VAR_11->dma_read(VAR_0, VAR_12);

 if (FUNC_0(VAR_4))
   VAR_13 |= VAR_8;
 VAR_13 |= VAR_9;







 FUNC_3();
 VAR_11->dma_write(VAR_13, VAR_0, VAR_12);

 VAR_10[VAR_12].flags |= VAR_7;
}
