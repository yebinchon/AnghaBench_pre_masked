
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int nr_queues; } ;


 int FUNC_0 (struct nitrox_device*,int) ;

void FUNC_1(struct nitrox_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_queues; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
