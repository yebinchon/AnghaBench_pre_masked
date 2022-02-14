
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dma_chan {int dummy; } ;
struct coh901318_chan {int id; int lock; scalar_t__ stopped; TYPE_1__* base; } ;
struct TYPE_2__ {scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct coh901318_chan*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct coh901318_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;
 struct coh901318_chan *VAR_6 = FUNC_4(VAR_3);
 int VAR_7 = VAR_6->id;

 FUNC_2(&VAR_6->lock, VAR_5);

 FUNC_0(VAR_6);

 if (VAR_6->stopped) {

  VAR_4 = FUNC_1(VAR_6->base->virtbase + VAR_0 +
       VAR_2 * VAR_7);

  VAR_4 |= VAR_1;

  FUNC_5(VAR_4, VAR_6->base->virtbase + VAR_0 +
         VAR_2*VAR_7);

  VAR_6->stopped = 0;
 }

 FUNC_3(&VAR_6->lock, VAR_5);
 return 0;
}
