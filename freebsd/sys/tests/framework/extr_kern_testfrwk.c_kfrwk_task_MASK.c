
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kern_totfrwk {int kfrwk_waiting; int kfrwk_que; int kfrwk_tq; int kfrwk_testq; } ;
struct TYPE_4__ {scalar_t__ tot_threads_running; } ;
struct kern_test_entry {TYPE_1__* kt_e; TYPE_2__ kt_data; } ;
struct kern_test {int dummy; } ;
typedef int kt_data ;
typedef int (* kerntfunc ) (struct kern_test*) ;
struct TYPE_3__ {int (* func ) (struct kern_test*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct kern_test_entry* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct kern_test_entry*,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct kern_test_entry*,int ) ;
 int FUNC_6 (struct kern_test*,TYPE_2__*,int) ;
 int FUNC_7 (struct kern_test*,int ,int) ;
 int VAR_1 ;
 int FUNC_8 (struct kern_test*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2, int VAR_3)
{
 struct kern_totfrwk *VAR_4;
 struct kern_test_entry *VAR_5;
 int VAR_6 = 0;
 struct kern_test VAR_7;
 kerntfunc VAR_8;

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = ((void*)0);
 VAR_4 = (struct kern_totfrwk *)VAR_2;
 FUNC_0();
 VAR_5 = FUNC_2(&VAR_4->kfrwk_testq);
 if (VAR_5) {
  VAR_5->kt_data.tot_threads_running--;
  VAR_4->kfrwk_waiting--;
  FUNC_6(&VAR_7, &VAR_5->kt_data, sizeof(VAR_7));
  if (VAR_5->kt_data.tot_threads_running == 0) {
   FUNC_3(&VAR_4->kfrwk_testq, VAR_5, VAR_1);
   VAR_6 = 1;
  } else {

   FUNC_9(VAR_4->kfrwk_tq, &VAR_4->kfrwk_que);
  }
  if (VAR_5->kt_e) {
   VAR_8 = VAR_5->kt_e->func;
  }
 }
 FUNC_1();
 if (VAR_5 && VAR_6) {
  FUNC_5(VAR_5, VAR_0);
 }

 if (VAR_8) {
  (*VAR_8) (&VAR_7);
 }

 FUNC_4(&VAR_4->kfrwk_waiting, 1);
}
