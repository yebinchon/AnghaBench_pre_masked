
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ timer_start1; scalar_t__ cpu_interval; scalar_t__ max_latency; scalar_t__ min_latency; int io_interval; int latency_sum; int interrupt_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 u64 VAR_6;
 u64 VAR_7;

 if (VAR_3) {
  FUNC_0(&VAR_2, 0);
  VAR_3 = 0;
 } else {
  VAR_7 = FUNC_1();
  VAR_6 = VAR_7 - (VAR_2.timer_start1 + VAR_2.cpu_interval);
  VAR_2.interrupt_cnt++;
  VAR_2.latency_sum += VAR_6;
  if (VAR_6 > VAR_2.max_latency)
   VAR_2.max_latency = VAR_6;
  if (VAR_6 < VAR_2.min_latency)
   VAR_2.min_latency = VAR_6;
 }
 FUNC_2(VAR_1, VAR_2.io_interval);
 return VAR_0;
}
