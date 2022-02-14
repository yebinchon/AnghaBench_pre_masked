
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int dev_flags; scalar_t__ dev_intpolarity; scalar_t__ dev_intlevel; } ;
typedef TYPE_1__ dbdev_tab_t ;
struct TYPE_9__ {int chan_index; void (* chan_callback ) (int,void*) ;void* chan_callparam; TYPE_1__* chan_dest; TYPE_1__* chan_src; TYPE_3__* chan_ptr; } ;
typedef TYPE_2__ chan_tab_t ;
struct TYPE_10__ {int ddma_cfg; } ;
typedef TYPE_3__ au1x_dma_chan_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__** VAR_12 ;
 int VAR_13 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;

u32 FUNC_7(u32 VAR_14, u32 VAR_15,
       void (*VAR_16)(int, void *), void *VAR_17)
{
 unsigned long VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21;
 int VAR_22;
 dbdev_tab_t *VAR_23, *VAR_24;
 chan_tab_t *VAR_25;
 au1x_dma_chan_t *VAR_26;






 if (!VAR_13)
  return 0;

 VAR_23 = FUNC_1(VAR_14);
 if (VAR_23 == ((void*)0))
  return 0;
 VAR_24 = FUNC_1(VAR_15);
 if (VAR_24 == ((void*)0))
  return 0;

 VAR_19 = 0;


 FUNC_4(&VAR_11, VAR_18);
 if (!(VAR_23->dev_flags & VAR_7) ||
      (VAR_23->dev_flags & VAR_6)) {

  VAR_23->dev_flags |= VAR_7;
  if (!(VAR_24->dev_flags & VAR_7) ||
       (VAR_24->dev_flags & VAR_6)) {

   VAR_24->dev_flags |= VAR_7;
  } else {

   VAR_23->dev_flags &= ~VAR_7;
   VAR_19++;
  }
 } else
  VAR_19++;
 FUNC_5(&VAR_11, VAR_18);

 if (VAR_19)
  return 0;


 VAR_25 = ((void*)0);
 VAR_20 = 0;
 FUNC_4(&VAR_11, VAR_18);
 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++)
  if (VAR_12[VAR_22] == ((void*)0)) {




   VAR_25 = FUNC_2(sizeof(chan_tab_t), VAR_9);
   VAR_12[VAR_22] = VAR_25;
   break;
  }
 FUNC_5(&VAR_11, VAR_18);

 if (VAR_25 != ((void*)0)) {
  FUNC_3(VAR_25, 0, sizeof(chan_tab_t));
  VAR_25->chan_index = VAR_20 = VAR_22;
  VAR_21 = FUNC_0(VAR_0);
  VAR_21 += (0x0100 * VAR_20);
  VAR_25->chan_ptr = (au1x_dma_chan_t *)VAR_21;
  VAR_26 = (au1x_dma_chan_t *)VAR_21;
  VAR_25->chan_src = VAR_23;
  VAR_25->chan_dest = VAR_24;
  VAR_25->chan_callback = VAR_16;
  VAR_25->chan_callparam = VAR_17;


  VAR_22 = 0;
  if (VAR_23->dev_intlevel)
   VAR_22 |= VAR_3;
  if (VAR_23->dev_intpolarity)
   VAR_22 |= VAR_4;
  if (VAR_24->dev_intlevel)
   VAR_22 |= VAR_1;
  if (VAR_24->dev_intpolarity)
   VAR_22 |= VAR_2;
  if ((VAR_23->dev_flags & VAR_8) ||
   (VAR_24->dev_flags & VAR_8))
    VAR_22 |= VAR_5;
  VAR_26->ddma_cfg = VAR_22;
  FUNC_6();





  return (u32)(&VAR_12[VAR_20]);
 }


 VAR_23->dev_flags &= ~VAR_7;
 VAR_24->dev_flags &= ~VAR_7;

 return 0;
}
