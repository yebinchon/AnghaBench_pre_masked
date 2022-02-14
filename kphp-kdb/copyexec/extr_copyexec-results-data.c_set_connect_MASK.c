
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lev_copyexec_result_connect {int hostname_length; int hostname; int pid; int ip; int volume_id; int random_tag; } ;
struct TYPE_3__ {scalar_t__ hostname; int last_action_time; int pid; int ip; int volume_id; } ;
typedef TYPE_1__ host_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,scalar_t__,int,int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int const) ;
 int FUNC_5 (scalar_t__,int ,int const) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int const) ;

__attribute__((used)) static int FUNC_8 (struct lev_copyexec_result_connect *VAR_1) {
  host_t *VAR_2 = FUNC_1 (VAR_1->random_tag, 1);
  VAR_2->volume_id = VAR_1->volume_id;
  VAR_2->ip = VAR_1->ip;
  VAR_2->pid = VAR_1->pid;
  VAR_2->last_action_time = VAR_0;
  const int VAR_3 = VAR_1->hostname_length, VAR_4 = (VAR_2->hostname) ? (int) FUNC_6 (VAR_2->hostname) : -1;
  if (VAR_3 != VAR_4 || FUNC_4 (VAR_2->hostname, VAR_1->hostname, VAR_3)) {
    if (VAR_2->hostname) {
      FUNC_2 ("set_connect: hostname didn't matched. Old hostname = %s, new hostname = %.*s. (log_cur_pos: %lld)\n", VAR_2->hostname, VAR_1->hostname_length, VAR_1->hostname, FUNC_3 ());
      FUNC_0 (1);
    }
    VAR_2->hostname = FUNC_7 (VAR_3 + 1);
    FUNC_5 (VAR_2->hostname, VAR_1->hostname, VAR_3);
  }
  return 0;
}
