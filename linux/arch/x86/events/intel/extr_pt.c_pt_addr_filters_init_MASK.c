
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_filters {int dummy; } ;
struct TYPE_6__ {struct pt_filters* addr_filters; } ;
struct perf_event {int cpu; TYPE_3__ hw; TYPE_2__* parent; } ;
struct TYPE_4__ {int addr_filters; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct pt_filters* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct pt_filters*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_3)
{
 struct pt_filters *VAR_4;
 int VAR_5 = VAR_3->cpu == -1 ? -1 : FUNC_0(VAR_3->cpu);

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_4 = FUNC_2(sizeof(struct pt_filters), VAR_1, VAR_5);
 if (!VAR_4)
  return -VAR_0;

 if (VAR_3->parent)
  FUNC_3(VAR_4, VAR_3->parent->hw.addr_filters,
         sizeof(*VAR_4));

 VAR_3->hw.addr_filters = VAR_4;

 return 0;
}
