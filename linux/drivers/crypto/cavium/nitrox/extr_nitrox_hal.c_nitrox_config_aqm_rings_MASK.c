
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aqmq_qsz {unsigned long long value; int host_queue_size; } ;
union aqmq_drbl {unsigned long long value; int dbell_count; } ;
union aqmq_cmp_thr {unsigned long long value; int commands_completed_threshold; } ;
typedef int u64 ;
struct nitrox_device {int nr_queues; int qlen; struct nitrox_cmdq** aqmq; } ;
struct nitrox_cmdq {unsigned long long dma; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nitrox_device*,int) ;
 int FUNC_6 (struct nitrox_device*,int ,unsigned long long) ;
 int FUNC_7 (struct nitrox_device*,int) ;

void FUNC_8(struct nitrox_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_queues; VAR_1++) {
  struct nitrox_cmdq *VAR_2 = VAR_0->aqmq[VAR_1];
  union aqmq_drbl VAR_3;
  union aqmq_qsz VAR_4;
  union aqmq_cmp_thr VAR_5;
  u64 VAR_6;


  FUNC_7(VAR_0, VAR_1);


  VAR_6 = FUNC_2(VAR_1);
  VAR_3.value = 0;
  VAR_3.dbell_count = 0xFFFFFFFF;
  FUNC_6(VAR_0, VAR_6, VAR_3.value);




  VAR_6 = FUNC_3(VAR_1);
  FUNC_6(VAR_0, VAR_6, 0ULL);


  VAR_6 = FUNC_0(VAR_1);
  FUNC_6(VAR_0, VAR_6, VAR_2->dma);


  VAR_6 = FUNC_4(VAR_1);
  VAR_4.value = 0;
  VAR_4.host_queue_size = VAR_0->qlen;
  FUNC_6(VAR_0, VAR_6, VAR_4.value);


  VAR_6 = FUNC_1(VAR_1);
  VAR_5.value = 0;
  VAR_5.commands_completed_threshold = 1;
  FUNC_6(VAR_0, VAR_6, VAR_5.value);


  FUNC_5(VAR_0, VAR_1);
 }
}
