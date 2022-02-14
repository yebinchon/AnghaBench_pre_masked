
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_data {unsigned int* busy_queues; } ;



unsigned int FUNC_0(struct bfq_data *VAR_0)
{
 return VAR_0->busy_queues[0] + VAR_0->busy_queues[1] +
  VAR_0->busy_queues[2];
}
