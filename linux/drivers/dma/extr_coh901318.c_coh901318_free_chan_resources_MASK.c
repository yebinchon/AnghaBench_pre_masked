
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct coh901318_chan {int id; int lock; scalar_t__ allocated; TYPE_1__* base; } ;
struct TYPE_2__ {scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct coh901318_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct dma_chan *VAR_4)
{
 struct coh901318_chan *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = VAR_5->id;
 unsigned long VAR_7;

 FUNC_1(&VAR_5->lock, VAR_7);


 FUNC_4(0x00000000U, VAR_5->base->virtbase + VAR_0 +
        VAR_1*VAR_6);
 FUNC_4(0x00000000U, VAR_5->base->virtbase + VAR_2 +
        VAR_3*VAR_6);

 VAR_5->allocated = 0;

 FUNC_2(&VAR_5->lock, VAR_7);

 FUNC_0(VAR_4);
}
