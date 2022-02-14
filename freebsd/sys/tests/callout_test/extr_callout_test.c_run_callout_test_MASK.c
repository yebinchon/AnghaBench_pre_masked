
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_test {int tot_threads_running; scalar_t__ test_options; } ;
struct callout_test {int number_of_callouts; int test_number; } ;
struct callout_run {int index; int co_number_callouts; int co_return_npa; int * co_array; int co_test; scalar_t__ cnt_one; scalar_t__ cnt_zero; scalar_t__ drain_calls; scalar_t__ callout_waiting; scalar_t__ co_completed; int lock; } ;
struct callout {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 struct callout_run** VAR_4 ;
 int FUNC_1 (struct callout_run*) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (struct callout_run*,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct kern_test *VAR_5)
{
 struct callout_test *VAR_6;
 size_t VAR_7;
 int VAR_8;
 struct callout_run *VAR_9;
 int VAR_10 = VAR_5->tot_threads_running;

 VAR_6 = (struct callout_test *)VAR_5->test_options;
 if (VAR_4[VAR_10] == ((void*)0)) {
  VAR_9 = VAR_4[VAR_10] = FUNC_3(sizeof(struct callout_run), VAR_2, VAR_3);
  FUNC_4(VAR_4[VAR_10], 0, sizeof(struct callout_run));
  FUNC_5(&VAR_9->lock, "callouttest", ((void*)0), VAR_1);
  VAR_9->index = VAR_10;
 } else {
  VAR_9 = VAR_4[VAR_10];
  VAR_9->co_number_callouts = VAR_9->co_return_npa = 0;
  VAR_9->co_completed = VAR_9->callout_waiting = 0;
  VAR_9->drain_calls = VAR_9->cnt_zero = VAR_9->cnt_one = 0;
  if (VAR_9->co_array) {
   FUNC_2(VAR_9->co_array, VAR_2);
   VAR_9->co_array = ((void*)0);
  }
 }
 VAR_9->co_number_callouts = VAR_6->number_of_callouts;
 VAR_9->co_test = VAR_6->test_number;
 VAR_7 = sizeof(struct callout) * VAR_9->co_number_callouts;
 VAR_9->co_array = FUNC_3(VAR_7, VAR_2, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_9->co_number_callouts; VAR_8++) {
  FUNC_0(&VAR_9->co_array[VAR_8], VAR_0);
 }
 FUNC_1(VAR_9);
}
