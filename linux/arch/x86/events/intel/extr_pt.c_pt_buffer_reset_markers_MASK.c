
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_buffer {scalar_t__ output_off; int nr_pages; unsigned long stop_pos; unsigned long intr_pos; TYPE_1__* intr_te; TYPE_1__* stop_te; int head; } ;
struct perf_output_handle {unsigned long size; unsigned long wakeup; } ;
struct TYPE_2__ {int stop; int intr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct perf_output_handle*,int ) ;
 scalar_t__ FUNC_4 (struct pt_buffer*) ;
 void* FUNC_5 (struct pt_buffer*,unsigned long) ;
 void* FUNC_6 (struct pt_buffer*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct pt_buffer *VAR_4,
       struct perf_output_handle *VAR_5)

{
 unsigned long VAR_6 = FUNC_1(&VAR_4->head);
 unsigned long VAR_7, VAR_8, VAR_9;


 if (VAR_4->output_off + VAR_5->size + 1 < FUNC_4(VAR_4)) {
  FUNC_3(VAR_5, VAR_2);
  return -VAR_0;
 }



 if (!FUNC_0(VAR_3))
  return 0;


 if (VAR_4->stop_te) {
  VAR_4->stop_te->stop = 0;
  VAR_4->stop_te->intr = 0;
 }

 if (VAR_4->intr_te)
  VAR_4->intr_te->intr = 0;


 VAR_8 = VAR_5->size >> VAR_1;


 if (!FUNC_2(VAR_6 + VAR_5->size + 1))
  VAR_8++;

 VAR_7 = (VAR_6 >> VAR_1) + VAR_8;
 VAR_7 &= VAR_4->nr_pages - 1;

 if (VAR_7 != VAR_4->stop_pos) {
  VAR_4->stop_pos = VAR_7;
  VAR_4->stop_te = FUNC_5(VAR_4, VAR_7);
  VAR_4->stop_te = FUNC_6(VAR_4, VAR_4->stop_te);
 }

 VAR_9 = VAR_5->wakeup >> VAR_1;


 VAR_7 = (VAR_6 >> VAR_1) + VAR_8 - 1;
 if (VAR_7 > VAR_9)
  VAR_7 = VAR_9;

 VAR_7 &= VAR_4->nr_pages - 1;
 if (VAR_7 != VAR_4->intr_pos) {
  VAR_4->intr_pos = VAR_7;
  VAR_4->intr_te = FUNC_5(VAR_4, VAR_7);
  VAR_4->intr_te = FUNC_6(VAR_4, VAR_4->intr_te);
 }

 VAR_4->stop_te->stop = 1;
 VAR_4->stop_te->intr = 1;
 VAR_4->intr_te->intr = 1;

 return 0;
}
