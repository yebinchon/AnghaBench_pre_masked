
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct page {int dummy; } ;
struct debug_store {unsigned long bts_buffer_base; unsigned long bts_index; unsigned long bts_absolute_maximum; unsigned long bts_interrupt_threshold; } ;
struct bts_phys {unsigned long size; scalar_t__ offset; unsigned long displacement; struct page* page; } ;
struct bts_buffer {size_t cur_buf; scalar_t__ end; int snapshot; int head; struct bts_phys* buf; } ;
struct TYPE_2__ {struct debug_store* ds; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page*) ;
 TYPE_1__ FUNC_3 (int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct bts_buffer *VAR_3)
{
 int VAR_4 = FUNC_4();
 struct debug_store *VAR_5 = FUNC_3(VAR_2, VAR_4).ds;
 struct bts_phys *VAR_6 = &VAR_3->buf[VAR_3->cur_buf];
 unsigned long VAR_7, VAR_8 = 0, VAR_9 = VAR_6->size;
 struct page *VAR_10 = VAR_6->page;

 VAR_7 = FUNC_1(&VAR_3->head);

 if (!VAR_3->snapshot) {
  if (VAR_3->end < VAR_6->offset + FUNC_0(VAR_10))
   VAR_9 = VAR_3->end - VAR_6->offset - VAR_6->displacement;

  VAR_7 -= VAR_6->offset + VAR_6->displacement;

  if (VAR_9 - VAR_7 > VAR_1)
   VAR_8 = VAR_9 - VAR_1;
  else if (VAR_9 - VAR_7 > VAR_0)
   VAR_8 = VAR_9 - VAR_0;
  else
   VAR_8 = VAR_9;
 }

 VAR_5->bts_buffer_base = (u64)(long)FUNC_2(VAR_10) + VAR_6->displacement;
 VAR_5->bts_index = VAR_5->bts_buffer_base + VAR_7;
 VAR_5->bts_absolute_maximum = VAR_5->bts_buffer_base + VAR_9;
 VAR_5->bts_interrupt_threshold = !VAR_3->snapshot
  ? VAR_5->bts_buffer_base + VAR_8
  : VAR_5->bts_absolute_maximum + VAR_0;
}
