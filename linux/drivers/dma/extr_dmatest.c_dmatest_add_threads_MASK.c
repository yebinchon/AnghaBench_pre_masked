
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wait; } ;
struct dmatest_thread {int type; int pending; int node; int task; int done_wait; TYPE_1__ test_done; struct dma_chan* chan; struct dmatest_info* info; } ;
struct dmatest_params {unsigned int threads_per_chan; } ;
struct dmatest_info {struct dmatest_params params; } ;
struct dmatest_chan {int threads; struct dma_chan* chan; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dmatest_thread*) ;
 int FUNC_5 (int ,struct dmatest_thread*,char*,int ,char*,unsigned int) ;
 struct dmatest_thread* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int ,char*,unsigned int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct dmatest_info *VAR_7,
  struct dmatest_chan *VAR_8, enum dma_transaction_type VAR_9)
{
 struct dmatest_params *VAR_10 = &VAR_7->params;
 struct dmatest_thread *VAR_11;
 struct dma_chan *VAR_12 = VAR_8->chan;
 char *VAR_13;
 unsigned int VAR_14;

 if (VAR_9 == VAR_0)
  VAR_13 = "copy";
 else if (VAR_9 == VAR_1)
  VAR_13 = "set";
 else if (VAR_9 == VAR_3)
  VAR_13 = "xor";
 else if (VAR_9 == VAR_2)
  VAR_13 = "pq";
 else
  return -VAR_4;

 for (VAR_14 = 0; VAR_14 < VAR_10->threads_per_chan; VAR_14++) {
  VAR_11 = FUNC_6(sizeof(struct dmatest_thread), VAR_5);
  if (!VAR_11) {
   FUNC_8("No memory for %s-%s%u\n",
    FUNC_1(VAR_12), VAR_13, VAR_14);
   break;
  }
  VAR_11->info = VAR_7;
  VAR_11->chan = VAR_8->chan;
  VAR_11->type = VAR_9;
  VAR_11->test_done.wait = &VAR_11->done_wait;
  FUNC_3(&VAR_11->done_wait);
  FUNC_9();
  VAR_11->task = FUNC_5(VAR_6, VAR_11, "%s-%s%u",
    FUNC_1(VAR_12), VAR_13, VAR_14);
  if (FUNC_0(VAR_11->task)) {
   FUNC_8("Failed to create thread %s-%s%u\n",
    FUNC_1(VAR_12), VAR_13, VAR_14);
   FUNC_4(VAR_11);
   break;
  }


  FUNC_2(VAR_11->task);
  FUNC_7(&VAR_11->node, &VAR_8->threads);
  VAR_11->pending = 1;
 }

 return VAR_14;
}
