
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_request {int context; int * desc; int (* callback ) (struct device*,int *,int ,int) ;int dma_desc; } ;
struct talitos_private {int fifo_len; TYPE_1__* chan; } ;
struct device {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int tail; int tail_lock; int submit_count; struct talitos_request* fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct talitos_request*,int) ;
 int FUNC_4 (struct talitos_private*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct device*,int *,int ,int) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct talitos_private *VAR_7 = FUNC_1(VAR_3);
 struct talitos_request *VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13 = FUNC_4(VAR_7);

 FUNC_7(&VAR_7->chan[VAR_4].tail_lock, VAR_10);

 VAR_11 = VAR_7->chan[VAR_4].tail;
 while (VAR_7->chan[VAR_4].fifo[VAR_11].desc) {
  __be32 VAR_14;

  VAR_8 = &VAR_7->chan[VAR_4].fifo[VAR_11];


  FUNC_5();
  VAR_14 = FUNC_3(VAR_8, VAR_13);

  if ((VAR_14 & VAR_0) == VAR_0)
   VAR_12 = 0;
  else
   if (!VAR_5)
    break;
   else
    VAR_12 = VAR_5;

  FUNC_2(VAR_3, VAR_8->dma_desc,
     VAR_2,
     VAR_1);


  VAR_9.desc = VAR_8->desc;
  VAR_9.callback = VAR_8->callback;
  VAR_9.context = VAR_8->context;


  FUNC_6();
  VAR_8->desc = ((void*)0);


  VAR_7->chan[VAR_4].tail = (VAR_11 + 1) & (VAR_7->fifo_len - 1);

  FUNC_8(&VAR_7->chan[VAR_4].tail_lock, VAR_10);

  FUNC_0(&VAR_7->chan[VAR_4].submit_count);

  VAR_9.callback(VAR_3, VAR_9.desc, VAR_9.context,
       VAR_12);

  if (VAR_5 && !VAR_6 && VAR_12 == VAR_5)
   return;
  FUNC_7(&VAR_7->chan[VAR_4].tail_lock, VAR_10);
  VAR_11 = VAR_7->chan[VAR_4].tail;
 }

 FUNC_8(&VAR_7->chan[VAR_4].tail_lock, VAR_10);
}
