
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_result_connect {int pid; int hostname; int hostname_length; int ip; int volume_id; int random_tag; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (struct lev_copyexec_result_connect *VAR_1) {
  if (FUNC_0 ("LEV_COPYEXEC_RESULT_CONNECT")) {
    return;
  }
  FUNC_1 (VAR_0, "0x%x\t0x%x\t%d\t%.*d\t%d\n", VAR_1->random_tag, VAR_1->volume_id, FUNC_2 (VAR_1->ip), VAR_1->hostname_length, VAR_1->hostname, VAR_1->pid);
}
