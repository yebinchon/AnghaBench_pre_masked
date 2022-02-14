
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_output_handle {int size; int head; } ;
struct cpu_hw_sf {struct perf_output_handle handle; int event; } ;
struct TYPE_2__ {unsigned long num_sdb; } ;
struct aux_buffer {int head; unsigned long alert_mark; int empty_mark; TYPE_1__ sfb; } ;


 int FUNC_0 (struct aux_buffer*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct aux_buffer*,unsigned long,unsigned long long*) ;
 int FUNC_3 (int ,int,char*,...) ;
 struct aux_buffer* FUNC_4 (struct perf_output_handle*,int ) ;
 int FUNC_5 (struct perf_output_handle*,unsigned long) ;
 struct aux_buffer* FUNC_6 (struct perf_output_handle*) ;
 int FUNC_7 (char*,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct cpu_hw_sf *VAR_2)
{
 struct aux_buffer *VAR_3;
 int VAR_4 = 0;
 unsigned long VAR_5 = 0, VAR_6;
 unsigned long long VAR_7 = 0;
 struct perf_output_handle *VAR_8 = &VAR_2->handle;
 unsigned long VAR_9;

 VAR_3 = FUNC_6(VAR_8);
 if (FUNC_1(!VAR_3))
  return;


 VAR_6 = FUNC_0(VAR_3) << VAR_0;
 FUNC_5(VAR_8, VAR_6);
 VAR_9 = VAR_3->sfb.num_sdb;

 while (!VAR_4) {

  VAR_3 = FUNC_4(VAR_8, VAR_2->event);
  if (VAR_8->size == 0) {
   FUNC_7("The AUX buffer with %lu pages for the "
          "diagnostic-sampling mode is full\n",
    VAR_9);
   FUNC_3(VAR_1, 1, "AUX buffer used up\n");
   break;
  }
  if (FUNC_1(!VAR_3))
   return;


  VAR_3->head = VAR_8->head >> VAR_0;
  VAR_5 = (VAR_8->size + 1) >> VAR_0;
  if (VAR_5 == 1)
   VAR_3->alert_mark = VAR_3->head;
  else
   VAR_3->alert_mark = VAR_3->head + VAR_5/2 - 1;

  if (FUNC_2(VAR_3, VAR_5, &VAR_7)) {
   if (!VAR_7) {
    VAR_4 = 1;
    break;
   }
   VAR_6 = VAR_5 << VAR_0;
   FUNC_5(&VAR_2->handle, VAR_6);
   FUNC_7("Sample data caused the AUX buffer with %lu "
          "pages to overflow\n", VAR_9);
   FUNC_3(VAR_1, 1, "head %lx range %lx "
         "overflow %llx\n",
         VAR_3->head, VAR_5, VAR_7);
  } else {
   VAR_6 = FUNC_0(VAR_3) << VAR_0;
   FUNC_5(&VAR_2->handle, VAR_6);
   FUNC_3(VAR_1, 6, "head %lx alert %lx "
         "already full, try another\n",
         VAR_3->head, VAR_3->alert_mark);
  }
 }

 if (VAR_4)
  FUNC_3(VAR_1, 6, "aux_reset_buffer: "
        "[%lx -> %lx -> %lx] (%lx, %lx)\n",
        VAR_3->head, VAR_3->alert_mark, VAR_3->empty_mark,
        FUNC_0(VAR_3), VAR_5);
}
