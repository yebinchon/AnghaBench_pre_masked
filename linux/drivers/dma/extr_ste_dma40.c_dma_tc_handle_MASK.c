
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d40_desc {scalar_t__ lli_current; scalar_t__ lli_len; scalar_t__ cyclic; } ;
struct d40_chan {int busy; int tasklet; int pending_tx; TYPE_1__* base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_1 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_2 (struct d40_desc*) ;
 struct d40_desc* FUNC_3 (struct d40_chan*) ;
 int FUNC_4 (struct d40_chan*,struct d40_desc*) ;
 int * FUNC_5 (struct d40_chan*) ;
 int FUNC_6 (struct d40_chan*) ;
 int FUNC_7 (struct d40_chan*) ;
 int FUNC_8 (struct d40_chan*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct d40_chan *VAR_0)
{
 struct d40_desc *VAR_1;


 VAR_1 = FUNC_3(VAR_0);

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->cyclic) {






  if (VAR_1->lli_current < VAR_1->lli_len
      && !FUNC_8(VAR_0)
      && !FUNC_6(VAR_0)) {
   FUNC_4(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1);
   (void) FUNC_7(VAR_0);

   if (VAR_1->lli_current == VAR_1->lli_len)
    VAR_1->lli_current = 0;
  }
 } else {
  FUNC_4(VAR_0, VAR_1);

  if (VAR_1->lli_current < VAR_1->lli_len) {
   FUNC_1(VAR_0, VAR_1);

   (void) FUNC_7(VAR_0);
   return;
  }

  if (FUNC_5(VAR_0) == ((void*)0)) {
   VAR_0->busy = 0;

   FUNC_9(VAR_0->base->dev);
   FUNC_10(VAR_0->base->dev);
  }

  FUNC_2(VAR_1);
  FUNC_0(VAR_0, VAR_1);
 }

 VAR_0->pending_tx++;
 FUNC_11(&VAR_0->tasklet);

}
