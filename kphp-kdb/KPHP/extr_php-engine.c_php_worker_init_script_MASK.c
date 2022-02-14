
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_t ;
struct TYPE_4__ {double finish_time; double start_time; int state; int data; int req_id; scalar_t__ terminate_flag; } ;
typedef TYPE_1__ php_worker ;
struct TYPE_5__ {int is_running; scalar_t__ is_wait_net; } ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 () ;
 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * FUNC_3 (size_t,size_t) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (double) ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char*,int ) ;

void FUNC_9 (php_worker *VAR_6) {
  double VAR_7 = VAR_6->finish_time - VAR_5 - 0.01;
  if (VAR_6->terminate_flag || VAR_7 < 0.2) {
    VAR_6->state = VAR_3;
    return;
  }





  FUNC_2();
  VAR_6->start_time = VAR_5;
  FUNC_8 (1, "START php script [req_id = %016llx]\n", VAR_6->req_id);
  VAR_0.is_running = 1;
  VAR_0.is_wait_net = 0;


  FUNC_6();
  FUNC_7();

  script_t *VAR_8 = FUNC_1 ("#0");
  FUNC_0 (VAR_8 != ((void*)0), "failed to get script");
  if (VAR_2 == ((void*)0)) {
    VAR_2 = FUNC_3 ((size_t)VAR_1, (size_t)(8 << 20));
  }
  FUNC_4 (VAR_2, VAR_8, VAR_6->data);
  FUNC_5 (VAR_7);
  VAR_6->state = VAR_4;
}
