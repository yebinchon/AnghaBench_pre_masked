
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct etm_filters* addr_filters; } ;
struct perf_event {TYPE_1__ hw; } ;
struct etmv4_drvdata {scalar_t__ cpu; scalar_t__ base; } ;
struct etm_filters {int ssstatus; } ;
struct TYPE_4__ {int parent; } ;
struct coresight_device {TYPE_2__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct etmv4_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (struct etmv4_drvdata*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct coresight_device *VAR_2,
        struct perf_event *VAR_3)
{
 u32 VAR_4;
 struct etm_filters *VAR_5 = VAR_3->hw.addr_filters;
 struct etmv4_drvdata *VAR_6 = FUNC_2(VAR_2->dev.parent);

 if (FUNC_1(VAR_6->cpu != FUNC_5()))
  return -VAR_0;

 FUNC_3(VAR_6);







 VAR_4 = FUNC_4(VAR_6->base + VAR_1);

 VAR_5->ssstatus = (VAR_4 & FUNC_0(9));

 return 0;
}
