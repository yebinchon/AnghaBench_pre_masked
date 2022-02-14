
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int nr_queues; struct nitrox_cmdq* pkt_inq; } ;
struct nitrox_cmdq {int dummy; } ;


 int FUNC_0 (struct nitrox_cmdq*) ;
 int FUNC_1 (struct nitrox_cmdq*) ;

__attribute__((used)) static void FUNC_2(struct nitrox_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_queues; VAR_1++) {
  struct nitrox_cmdq *VAR_2 = &VAR_0->pkt_inq[VAR_1];

  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_0->pkt_inq);
 VAR_0->pkt_inq = ((void*)0);
}
