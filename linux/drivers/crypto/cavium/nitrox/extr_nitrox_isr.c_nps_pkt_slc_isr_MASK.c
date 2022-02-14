
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ slc_int; } ;
union nps_pkt_slc_cnts {TYPE_1__ s; int value; } ;
struct nitrox_q_vector {int resp_tasklet; struct nitrox_cmdq* cmdq; } ;
struct nitrox_cmdq {int compl_cnt_csr_addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct nitrox_q_vector *VAR_3 = VAR_2;
 union nps_pkt_slc_cnts VAR_4;
 struct nitrox_cmdq *VAR_5 = VAR_3->cmdq;

 VAR_4.value = FUNC_0(VAR_5->compl_cnt_csr_addr);

 if (VAR_4.s.slc_int)
  FUNC_1(&VAR_3->resp_tasklet);

 return VAR_0;
}
