
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct request {scalar_t__ io_start_time_ns; scalar_t__ start_time_ns; int cmd_flags; TYPE_2__* q; } ;
struct kyber_queue_data {int timer; int cpu_latency; scalar_t__* latency_targets; } ;
struct kyber_cpu_latency {int dummy; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct kyber_queue_data* elevator_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kyber_cpu_latency*,unsigned int,int ,scalar_t__,scalar_t__) ;
 struct kyber_cpu_latency* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_5, u64 VAR_6)
{
 struct kyber_queue_data *VAR_7 = VAR_5->q->elevator->elevator_data;
 struct kyber_cpu_latency *VAR_8;
 unsigned int VAR_9;
 u64 VAR_10;

 VAR_9 = FUNC_2(VAR_5->cmd_flags);
 if (VAR_9 == VAR_2)
  return;

 VAR_8 = FUNC_1(VAR_7->cpu_latency);
 VAR_10 = VAR_7->latency_targets[VAR_9];
 FUNC_0(VAR_8, VAR_9, VAR_3,
      VAR_10, VAR_6 - VAR_5->start_time_ns);
 FUNC_0(VAR_8, VAR_9, VAR_1, VAR_10,
      VAR_6 - VAR_5->io_start_time_ns);
 FUNC_3(VAR_7->cpu_latency);

 FUNC_4(&VAR_7->timer, VAR_4 + VAR_0 / 10);
}
