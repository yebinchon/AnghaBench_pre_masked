
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_engine {struct sdma_channel* channel; scalar_t__ regs; } ;
struct sdma_desc {int vd; } ;
struct TYPE_2__ {int lock; } ;
struct sdma_channel {int flags; TYPE_1__ vc; struct sdma_desc* desc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct sdma_channel*) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sdma_channel*) ;
 int FUNC_5 (struct sdma_channel*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct sdma_engine *VAR_5 = VAR_4;
 unsigned long VAR_6;

 VAR_6 = FUNC_3(VAR_5->regs + VAR_2);
 FUNC_9(VAR_6, VAR_5->regs + VAR_2);

 VAR_6 &= ~1;

 while (VAR_6) {
  int VAR_7 = FUNC_1(VAR_6) - 1;
  struct sdma_channel *VAR_8 = &VAR_5->channel[VAR_7];
  struct sdma_desc *VAR_9;

  FUNC_6(&VAR_8->vc.lock);
  VAR_9 = VAR_8->desc;
  if (VAR_9) {
   if (VAR_8->flags & VAR_0) {
    FUNC_5(VAR_8);
   } else {
    FUNC_2(VAR_8);
    FUNC_8(&VAR_9->vd);
    FUNC_4(VAR_8);
   }
  }

  FUNC_7(&VAR_8->vc.lock);
  FUNC_0(VAR_7, &VAR_6);
 }

 return VAR_1;
}
