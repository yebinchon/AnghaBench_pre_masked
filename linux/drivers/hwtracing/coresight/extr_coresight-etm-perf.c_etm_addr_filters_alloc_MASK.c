
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct etm_filters* addr_filters; } ;
struct perf_event {int cpu; TYPE_3__ hw; TYPE_2__* parent; } ;
struct etm_filters {int dummy; } ;
struct TYPE_4__ {int addr_filters; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct etm_filters* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct etm_filters*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_2)
{
 struct etm_filters *VAR_3;
 int VAR_4 = VAR_2->cpu == -1 ? -1 : FUNC_0(VAR_2->cpu);

 VAR_3 = FUNC_1(sizeof(struct etm_filters), VAR_1, VAR_4);
 if (!VAR_3)
  return -VAR_0;

 if (VAR_2->parent)
  FUNC_2(VAR_3, VAR_2->parent->hw.addr_filters,
         sizeof(*VAR_3));

 VAR_2->hw.addr_filters = VAR_3;

 return 0;
}
