
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct d40_interrupt_lookup {int offset; int is_error; scalar_t__ clr; scalar_t__ src; } ;
struct d40_chan {int lock; } ;
struct TYPE_2__ {int il_size; struct d40_interrupt_lookup* il; } ;
struct d40_base {int* regs_interrupt; int interrupt_lock; int dev; scalar_t__ virtbase; struct d40_chan** lookup_log_chans; struct d40_chan** lookup_phy_chans; TYPE_1__ gen_dmac; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,long,int,int) ;
 int FUNC_2 (struct d40_chan*) ;
 long FUNC_3 (unsigned long*,int,long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 long VAR_8 = -1;
 struct d40_chan *VAR_9;
 unsigned long VAR_10;
 struct d40_base *VAR_11 = VAR_4;
 u32 *VAR_12 = VAR_11->regs_interrupt;
 struct d40_interrupt_lookup *VAR_13 = VAR_11->gen_dmac.il;
 u32 VAR_14 = VAR_11->gen_dmac.il_size;

 FUNC_6(&VAR_11->interrupt_lock, VAR_10);


 for (VAR_5 = 0; VAR_5 < VAR_14; VAR_5++)
  VAR_12[VAR_5] = FUNC_4(VAR_11->virtbase + VAR_13[VAR_5].src);

 for (;;) {

  VAR_8 = FUNC_3((unsigned long *)VAR_12,
         VAR_0 * VAR_14, VAR_8 + 1);


  if (VAR_8 == VAR_0 * VAR_14)
   break;

  VAR_7 = VAR_8 / VAR_0;
  VAR_6 = VAR_8 & (VAR_0 - 1);

  if (VAR_13[VAR_7].offset == VAR_1)
   VAR_9 = VAR_11->lookup_phy_chans[VAR_6];
  else
   VAR_9 = VAR_11->lookup_log_chans[VAR_13[VAR_7].offset + VAR_6];

  if (!VAR_9) {




   continue;
  }


  FUNC_9(FUNC_0(VAR_6), VAR_11->virtbase + VAR_13[VAR_7].clr);

  FUNC_5(&VAR_9->lock);

  if (!VAR_13[VAR_7].is_error)
   FUNC_2(VAR_9);
  else
   FUNC_1(VAR_11->dev, "IRQ chan: %ld offset %d idx %d\n",
    VAR_8, VAR_13[VAR_7].offset, VAR_6);

  FUNC_7(&VAR_9->lock);
 }

 FUNC_8(&VAR_11->interrupt_lock, VAR_10);

 return VAR_2;
}
