
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int nr_queues; int ** aqmq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nitrox_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_queues; VAR_1++) {
  FUNC_1(VAR_0->aqmq[VAR_1]);
  FUNC_0(VAR_0->aqmq[VAR_1]);
  VAR_0->aqmq[VAR_1] = ((void*)0);
 }
}
