
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resend; } ;
union nps_pkt_slc_cnts {int value; TYPE_1__ s; } ;
struct nitrox_q_vector {struct nitrox_cmdq* cmdq; } ;
struct nitrox_cmdq {int backlog_qflush; int backlog_count; int compl_cnt_csr_addr; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nitrox_cmdq*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(unsigned long VAR_0)
{
 struct nitrox_q_vector *VAR_1 = (void *)(uintptr_t)(VAR_0);
 struct nitrox_cmdq *VAR_2 = VAR_1->cmdq;
 union nps_pkt_slc_cnts VAR_3;


 VAR_3.value = FUNC_2(VAR_2->compl_cnt_csr_addr);

 VAR_3.s.resend = 1;

 FUNC_1(VAR_2);





 FUNC_4(VAR_3.value, VAR_2->compl_cnt_csr_addr);

 if (FUNC_0(&VAR_2->backlog_count))
  FUNC_3(&VAR_2->backlog_qflush);
}
