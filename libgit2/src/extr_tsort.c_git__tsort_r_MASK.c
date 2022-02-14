
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsort_store {void* payload; int cmp; int * storage; scalar_t__ alloc; } ;
struct tsort_run {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int git__sort_r_cmp ;


 int FUNC_0 () ;
 int FUNC_1 (void**,int,size_t,int ,void*) ;
 int FUNC_2 (struct tsort_run*,scalar_t__) ;
 scalar_t__ FUNC_3 (void**,struct tsort_run*,scalar_t__,struct tsort_store*,size_t) ;
 scalar_t__ FUNC_4 (size_t) ;

void FUNC_5(
 void **VAR_0, size_t VAR_1, git__sort_r_cmp VAR_2, void *VAR_3)
{
 struct tsort_store VAR_4, *VAR_5 = &VAR_4;
 struct tsort_run VAR_6[128];

 ssize_t VAR_7 = 0;
 ssize_t VAR_8, VAR_9;
 ssize_t VAR_10 = 0;
 ssize_t VAR_11;

 if (VAR_1 < 64) {
  FUNC_1(VAR_0, 1, VAR_1, VAR_2, VAR_3);
  return;
 }


 VAR_11 = (ssize_t)FUNC_4(VAR_1);


 VAR_5->alloc = 0;
 VAR_5->storage = ((void*)0);
 VAR_5->cmp = VAR_2;
 VAR_5->payload = VAR_3;

 FUNC_0();
 FUNC_0();
 FUNC_0();

 while (1) {
  if (!FUNC_2(VAR_6, VAR_7)) {
   VAR_7 = FUNC_3(VAR_0, VAR_6, VAR_7, VAR_5, VAR_1);
   continue;
  }

  FUNC_0();
 }
}
