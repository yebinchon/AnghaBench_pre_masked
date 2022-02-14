
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* idx; } ;
struct TYPE_5__ {void* idx; } ;
struct TYPE_7__ {int idx; int last_cpu; unsigned long long last_tag; TYPE_2__ branch_reg; TYPE_1__ extra_reg; } ;
struct perf_event {TYPE_3__ hw; int destroy; } ;
struct TYPE_8__ {int (* hw_config ) (struct perf_event*) ;} ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct perf_event*) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_5)
{
 int VAR_6;

 if (!FUNC_2())
  return -VAR_0;

 VAR_6 = FUNC_3();
 if (VAR_6)
  return VAR_6;

 FUNC_0(&VAR_2);
 VAR_5->destroy = VAR_3;

 VAR_5->hw.idx = -1;
 VAR_5->hw.last_cpu = -1;
 VAR_5->hw.last_tag = ~0ULL;


 VAR_5->hw.extra_reg.idx = VAR_1;
 VAR_5->hw.branch_reg.idx = VAR_1;

 return VAR_4.hw_config(VAR_5);
}
