
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct http_worker_description {int hwd_count; int hwd_errorcount; } ;
struct TYPE_2__ {int run_done; int path; int sin; int start_barrier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_4)
{
 struct http_worker_description *VAR_5;
 int VAR_6;

 if (VAR_3) {
  VAR_6 = FUNC_3(&VAR_2->start_barrier);
  if (VAR_6 != 0 && VAR_6 != VAR_0)
   FUNC_0(-1, "pthread_barrier_wait");
 } else {
  FUNC_4();
 }

 VAR_5 = VAR_4;
 while (!VAR_2->run_done) {
  if (FUNC_2(&VAR_2->sin, VAR_2->path, VAR_1) < 0) {
   VAR_5->hwd_errorcount++;
   continue;
  }

  if (!VAR_2->run_done)
   VAR_5->hwd_count++;
 }

 if (VAR_3)
  return (((void*)0));
 else
  FUNC_1(0);
}
