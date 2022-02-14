
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef size_t u32 ;
struct send_context {unsigned long free; size_t sr_tail; size_t sr_size; int release_lock; TYPE_1__* sr; int sr_head; int * hw_free; } ;
struct pio_buf {int arg; int (* cb ) (int ,int) ;int sent_at; } ;
struct TYPE_2__ {struct pio_buf pbuf; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct send_context*) ;
 scalar_t__ FUNC_4 (unsigned long,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct send_context*,unsigned long) ;

void FUNC_10(struct send_context *VAR_3)
{
 struct pio_buf *VAR_4;
 u64 VAR_5;
 u32 VAR_6, VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 if (!VAR_3)
  return;

 FUNC_6(&VAR_3->release_lock, VAR_11);

 VAR_5 = FUNC_2(*VAR_3->hw_free);
 VAR_8 = VAR_3->free;
 VAR_10 = (((VAR_5 & VAR_2) >> VAR_1)
   - (VAR_8 & VAR_0))
    & VAR_0;
 VAR_9 = VAR_8 + VAR_10;
 FUNC_9(VAR_3, VAR_10);


 VAR_12 = -1;
 VAR_6 = FUNC_0(VAR_3->sr_head);
 VAR_7 = VAR_3->sr_tail;
 while (VAR_6 != VAR_7) {
  VAR_4 = &VAR_3->sr[VAR_7].pbuf;

  if (FUNC_4(VAR_9, VAR_4->sent_at)) {

   break;
  }
  if (VAR_4->cb) {
   if (VAR_12 < 0)
    VAR_12 = FUNC_1(VAR_5);
   (*VAR_4->cb)(VAR_4->arg, VAR_12);
  }

  VAR_7++;
  if (VAR_7 >= VAR_3->sr_size)
   VAR_7 = 0;
 }
 VAR_3->sr_tail = VAR_7;

 FUNC_5();
 VAR_3->free = VAR_9;
 FUNC_7(&VAR_3->release_lock, VAR_11);
 FUNC_3(VAR_3);
}
