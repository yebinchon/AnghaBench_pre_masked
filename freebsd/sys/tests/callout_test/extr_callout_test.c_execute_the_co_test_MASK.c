
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct callout_run {scalar_t__ callout_waiting; int co_number_callouts; int co_test; int index; scalar_t__ cnt_one; int lock; int cnt_zero; int * co_array; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int ,int ,struct callout_run*,int,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(struct callout_run *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;

 FUNC_4(&VAR_4->lock);
 VAR_4->callout_waiting = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4->co_number_callouts; VAR_5++) {
  if (VAR_4->co_test == 1) {

   VAR_7 = VAR_5 % VAR_1;
   FUNC_1(&VAR_4->co_array[VAR_5], 3, 0, VAR_2, VAR_4,
       VAR_7, 0);
  } else {

   FUNC_1(&VAR_4->co_array[VAR_5], 3, 0, VAR_2, VAR_4,
       VAR_4->index, 0);
  }
 }
 VAR_8 = VAR_3;
 while (VAR_4->callout_waiting != VAR_4->co_number_callouts) {
  FUNC_3();
  VAR_9 = VAR_3;
  VAR_10 = VAR_9 - VAR_8;
  if (VAR_10 > 100) {
   break;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->co_number_callouts; VAR_5++) {
  VAR_6 = FUNC_0(&VAR_4->co_array[VAR_5], VAR_0);
  if (VAR_6) {
   VAR_4->cnt_one++;
  } else {
   VAR_4->cnt_zero++;
  }
 }
 VAR_4->callout_waiting -= VAR_4->cnt_one;
 FUNC_5(&VAR_4->lock);

 VAR_8 = VAR_3;
 while (VAR_4->callout_waiting > 0) {
  FUNC_3();
  VAR_9 = VAR_3;
  VAR_10 = VAR_9 - VAR_8;
  if (VAR_10 > 100) {
   break;
  }
 }
 FUNC_2((void *)VAR_4);
}
