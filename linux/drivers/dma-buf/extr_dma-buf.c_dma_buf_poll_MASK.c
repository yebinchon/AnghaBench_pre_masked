
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct dma_buf* private_data; } ;
struct dma_resv_list {unsigned int shared_count; int * shared; } ;
struct dma_resv {int seq; int fence_excl; int fence; } ;
struct dma_fence {int dummy; } ;
struct dma_buf_poll_cb_t {int active; int cb; } ;
struct TYPE_2__ {int lock; } ;
struct dma_buf {TYPE_1__ poll; struct dma_buf_poll_cb_t cb_shared; struct dma_buf_poll_cb_t cb_excl; struct dma_resv* resv; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct dma_fence*,int *,int (*) (int *,int *)) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct file*,TYPE_1__*,int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static __poll_t FUNC_13(struct file *VAR_3, poll_table *VAR_4)
{
 struct dma_buf *VAR_5;
 struct dma_resv *VAR_6;
 struct dma_resv_list *VAR_7;
 struct dma_fence *VAR_8;
 __poll_t VAR_9;
 unsigned VAR_10, VAR_11;

 VAR_5 = VAR_3->private_data;
 if (!VAR_5 || !VAR_5->resv)
  return VAR_0;

 VAR_6 = VAR_5->resv;

 FUNC_5(VAR_3, &VAR_5->poll, VAR_4);

 VAR_9 = FUNC_4(VAR_4) & (VAR_1 | VAR_2);
 if (!VAR_9)
  return 0;

retry:
 VAR_11 = FUNC_9(&VAR_6->seq);
 FUNC_7();

 VAR_7 = FUNC_6(VAR_6->fence);
 if (VAR_7)
  VAR_10 = VAR_7->shared_count;
 else
  VAR_10 = 0;
 VAR_8 = FUNC_6(VAR_6->fence_excl);
 if (FUNC_10(&VAR_6->seq, VAR_11)) {
  FUNC_8();
  goto retry;
 }

 if (VAR_8 && (!(VAR_9 & VAR_2) || VAR_10 == 0)) {
  struct dma_buf_poll_cb_t *VAR_12 = &VAR_5->cb_excl;
  __poll_t VAR_13 = VAR_1;

  if (VAR_10 == 0)
   VAR_13 |= VAR_2;

  FUNC_11(&VAR_5->poll.lock);
  if (VAR_12->active) {
   VAR_12->active |= VAR_13;
   VAR_9 &= ~VAR_13;
  } else
   VAR_12->active = VAR_13;
  FUNC_12(&VAR_5->poll.lock);

  if (VAR_9 & VAR_13) {
   if (!FUNC_2(VAR_8)) {

    VAR_9 &= ~VAR_13;
    FUNC_0(((void*)0), &VAR_12->cb);
   } else if (!FUNC_1(VAR_8, &VAR_12->cb,
          FUNC_0)) {
    VAR_9 &= ~VAR_13;
    FUNC_3(VAR_8);
   } else {




    FUNC_3(VAR_8);
    FUNC_0(((void*)0), &VAR_12->cb);
   }
  }
 }

 if ((VAR_9 & VAR_2) && VAR_10 > 0) {
  struct dma_buf_poll_cb_t *VAR_14 = &VAR_5->cb_shared;
  int VAR_15;


  FUNC_11(&VAR_5->poll.lock);
  if (VAR_14->active)
   VAR_9 &= ~VAR_2;
  else
   VAR_14->active = VAR_2;
  FUNC_12(&VAR_5->poll.lock);

  if (!(VAR_9 & VAR_2))
   goto out;

  for (VAR_15 = 0; VAR_15 < VAR_10; ++VAR_15) {
   struct dma_fence *VAR_16 = FUNC_6(VAR_7->shared[VAR_15]);

   if (!FUNC_2(VAR_16)) {






    VAR_9 &= ~VAR_2;
    FUNC_0(((void*)0), &VAR_14->cb);
    break;
   }
   if (!FUNC_1(VAR_16, &VAR_14->cb,
          FUNC_0)) {
    FUNC_3(VAR_16);
    VAR_9 &= ~VAR_2;
    break;
   }
   FUNC_3(VAR_16);
  }


  if (VAR_15 == VAR_10)
   FUNC_0(((void*)0), &VAR_14->cb);
 }

out:
 FUNC_8();
 return VAR_9;
}
