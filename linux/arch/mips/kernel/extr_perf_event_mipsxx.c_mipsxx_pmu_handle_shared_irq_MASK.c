
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct cpu_hw_events {int used_mask; } ;
struct TYPE_2__ {unsigned int num_counters; int (* read_counter ) (int) ;int overflow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct cpu_hw_events*,int,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (struct perf_sample_data*,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ) ;
 struct cpu_hw_events* FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(void)
{
 struct cpu_hw_events *VAR_7 = FUNC_11(&VAR_4);
 struct perf_sample_data VAR_8;
 unsigned int VAR_9 = VAR_5.num_counters;
 u64 VAR_10;
 int VAR_11, VAR_12 = VAR_2;
 struct pt_regs *VAR_13;

 if (VAR_3 && !(FUNC_5() & VAR_0))
  return VAR_12;







 FUNC_3();




 VAR_13 = FUNC_0();

 FUNC_4(&VAR_8, 0, 0);

 for (VAR_11 = VAR_9 - 1; VAR_11 >= 0; VAR_11--) {
  if (!FUNC_10(VAR_11, VAR_7->used_mask))
   continue;

  VAR_10 = VAR_5.read_counter(VAR_11);
  if (!(VAR_10 & VAR_5.overflow))
   continue;

  FUNC_1(VAR_7, VAR_11, &VAR_8, VAR_13);
  VAR_12 = VAR_1;
 }




 FUNC_8();






 if (VAR_12 == VAR_1)
  FUNC_2();

 return VAR_12;
}
