
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct rdma_port_counter {TYPE_2__* hstats; } ;
struct ib_device {TYPE_1__* port_data; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {struct rdma_port_counter port_counter; } ;


 int FUNC_0 (struct ib_device*,size_t,size_t) ;

u64 FUNC_1(struct ib_device *VAR_0, u8 VAR_1, u32 VAR_2)
{
 struct rdma_port_counter *VAR_3;
 u64 VAR_4;

 VAR_3 = &VAR_0->port_data[VAR_1].port_counter;
 if (!VAR_3->hstats)
  return 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_4 += VAR_3->hstats->value[VAR_2];

 return VAR_4;
}
