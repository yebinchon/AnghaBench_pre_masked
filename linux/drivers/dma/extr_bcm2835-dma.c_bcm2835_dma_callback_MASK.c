
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm2835_desc {int vd; scalar_t__ cyclic; } ;
struct TYPE_2__ {int lock; } ;
struct bcm2835_chan {int irq_flags; TYPE_1__ vc; struct bcm2835_desc* desc; scalar_t__ chan_base; } ;
typedef int irqreturn_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcm2835_chan*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct bcm2835_chan *VAR_9 = VAR_8;
 struct bcm2835_desc *VAR_10;
 unsigned long VAR_11;


 if (VAR_9->irq_flags & VAR_4) {

  VAR_11 = FUNC_1(VAR_9->chan_base + VAR_2);

  if (!(VAR_11 & VAR_3))
   return VAR_6;
 }

 FUNC_2(&VAR_9->vc.lock, VAR_11);
 FUNC_6(VAR_3 | VAR_0,
        VAR_9->chan_base + VAR_2);

 VAR_10 = VAR_9->desc;

 if (VAR_10) {
  if (VAR_10->cyclic) {

   FUNC_5(&VAR_10->vd);
  } else if (!FUNC_1(VAR_9->chan_base + VAR_1)) {
   FUNC_4(&VAR_9->desc->vd);
   FUNC_0(VAR_9);
  }
 }

 FUNC_3(&VAR_9->vc.lock, VAR_11);

 return VAR_5;
}
