
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct send_context {int flags; scalar_t__ credits; unsigned long fill; unsigned long alloc_free; size_t sr_head; size_t fill_wrap; size_t sr_size; scalar_t__ size; scalar_t__ base_addr; int alloc_lock; TYPE_1__* sr; int * buffers_allocated; int free; } ;
struct TYPE_4__ {scalar_t__ val64; } ;
struct pio_buf {unsigned long sent_at; TYPE_2__ carry; scalar_t__ carry_bytes; scalar_t__ qw_written; scalar_t__ end; scalar_t__ start; struct send_context* sc; void* arg; int cb; } ;
typedef int pio_release_cb ;
struct TYPE_3__ {struct pio_buf pbuf; } ;


 int VAR_0 ;
 struct pio_buf* FUNC_0 (int ) ;
 size_t VAR_1 ;
 void* FUNC_1 (int ) ;
 int VAR_2 ;
 unsigned long FUNC_2 (size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (struct send_context*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

struct pio_buf *FUNC_10(struct send_context *VAR_3, u32 VAR_4,
    pio_release_cb VAR_5, void *VAR_6)
{
 struct pio_buf *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10 = FUNC_2(VAR_4);
 u32 VAR_11;
 int VAR_12 = 0;
 u32 VAR_13, VAR_14;

 FUNC_6(&VAR_3->alloc_lock, VAR_8);
 if (!(VAR_3->flags & VAR_2)) {
  FUNC_7(&VAR_3->alloc_lock, VAR_8);
  return FUNC_0(-VAR_0);
 }

retry:
 VAR_9 = (unsigned long)VAR_3->credits - (VAR_3->fill - VAR_3->alloc_free);
 if (VAR_10 > VAR_9) {

  if (FUNC_9(VAR_12)) {
   FUNC_7(&VAR_3->alloc_lock, VAR_8);
   goto done;
  }

  VAR_3->alloc_free = FUNC_1(VAR_3->free);
  VAR_9 =
   (unsigned long)VAR_3->credits -
   (VAR_3->fill - VAR_3->alloc_free);
  if (VAR_10 > VAR_9) {

   FUNC_4(VAR_3);
   VAR_3->alloc_free = FUNC_1(VAR_3->free);
   VAR_12++;
   goto retry;
  }
 }



 FUNC_3();
 FUNC_8(*VAR_3->buffers_allocated);


 VAR_13 = VAR_3->sr_head;


 VAR_3->fill += VAR_10;
 VAR_11 = VAR_3->fill_wrap;
 VAR_3->fill_wrap += VAR_10;
 if (VAR_3->fill_wrap >= VAR_3->credits)
  VAR_3->fill_wrap = VAR_3->fill_wrap - VAR_3->credits;
 VAR_7 = &VAR_3->sr[VAR_13].pbuf;
 VAR_7->sent_at = VAR_3->fill;
 VAR_7->cb = VAR_5;
 VAR_7->arg = VAR_6;
 VAR_7->sc = VAR_3;



 VAR_14 = VAR_13 + 1;
 if (VAR_14 >= VAR_3->sr_size)
  VAR_14 = 0;




 FUNC_5();
 VAR_3->sr_head = VAR_14;
 FUNC_7(&VAR_3->alloc_lock, VAR_8);


 VAR_7->start = VAR_3->base_addr + VAR_11 * VAR_1;
 VAR_7->end = VAR_3->base_addr + VAR_3->size;
 VAR_7->qw_written = 0;
 VAR_7->carry_bytes = 0;
 VAR_7->carry.val64 = 0;
done:
 return VAR_7;
}
