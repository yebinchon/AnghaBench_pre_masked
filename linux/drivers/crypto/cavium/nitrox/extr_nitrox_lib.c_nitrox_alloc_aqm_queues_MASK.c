
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nitrox_device {int nr_queues; struct nitrox_cmdq** aqmq; int node; } ;
struct nitrox_cmdq {int qno; int instr_size; void* compl_cnt_csr_addr; void* dbell_csr_addr; struct nitrox_device* ndev; } ;
struct aqmq_command_s {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (struct nitrox_device*,int ) ;
 struct nitrox_cmdq* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct nitrox_cmdq*) ;
 int FUNC_5 (struct nitrox_cmdq*,int ) ;
 int FUNC_6 (struct nitrox_device*) ;

__attribute__((used)) static int FUNC_7(struct nitrox_device *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_queues; VAR_4++) {
  struct nitrox_cmdq *VAR_6;
  u64 VAR_7;

  VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2, VAR_3->node);
  if (!VAR_6) {
   VAR_5 = -VAR_1;
   goto aqmq_fail;
  }

  VAR_6->ndev = VAR_3;
  VAR_6->qno = VAR_4;
  VAR_6->instr_size = sizeof(struct aqmq_command_s);


  VAR_7 = FUNC_1(VAR_4);
  VAR_6->dbell_csr_addr = FUNC_2(VAR_3, VAR_7);

  VAR_7 = FUNC_0(VAR_4);
  VAR_6->compl_cnt_csr_addr = FUNC_2(VAR_3, VAR_7);

  VAR_5 = FUNC_5(VAR_6, VAR_0);
  if (VAR_5) {
   FUNC_4(VAR_6);
   goto aqmq_fail;
  }
  VAR_3->aqmq[VAR_4] = VAR_6;
 }

 return 0;

aqmq_fail:
 FUNC_6(VAR_3);
 return VAR_5;
}
