
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rsize; } ;
union nps_pkt_in_instr_rsize {int value; TYPE_1__ s; } ;
struct TYPE_4__ {int dbell; } ;
union nps_pkt_in_instr_baoff_dbell {int value; TYPE_2__ s; } ;
typedef int u64 ;
struct nitrox_device {int nr_queues; int qlen; struct nitrox_cmdq* pkt_inq; } ;
struct nitrox_cmdq {int dma; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nitrox_device*,int) ;
 int FUNC_5 (struct nitrox_device*,int ,int) ;
 int FUNC_6 (struct nitrox_device*,int) ;

void FUNC_7(struct nitrox_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_queues; VAR_1++) {
  struct nitrox_cmdq *VAR_2 = &VAR_0->pkt_inq[VAR_1];
  union nps_pkt_in_instr_rsize VAR_3;
  union nps_pkt_in_instr_baoff_dbell VAR_4;
  u64 VAR_5;

  FUNC_6(VAR_0, VAR_1);






  VAR_5 = FUNC_0(VAR_1);
  FUNC_5(VAR_0, VAR_5, VAR_2->dma);


  VAR_5 = FUNC_2(VAR_1);
  VAR_3.value = 0;
  VAR_3.s.rsize = VAR_0->qlen;
  FUNC_5(VAR_0, VAR_5, VAR_3.value);


  VAR_5 = FUNC_3(VAR_1);
  FUNC_5(VAR_0, VAR_5, 0xffffffff);


  VAR_5 = FUNC_1(VAR_1);
  VAR_4.value = 0;
  VAR_4.s.dbell = 0xffffffff;
  FUNC_5(VAR_0, VAR_5, VAR_4.value);


  FUNC_4(VAR_0, VAR_1);
 }
}
