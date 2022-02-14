
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct perf_event {int destroy; TYPE_1__ attr; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int VAR_4 ;
 int FUNC_1 (struct perf_event*) ;
 TYPE_3__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_7)
{
 if (VAR_7->attr.type != VAR_5.pmu.type)
  return -VAR_2;

 if (!FUNC_1(VAR_7))
  return -VAR_1;

 if (FUNC_2(VAR_6))
  return -VAR_0;

 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_6);
  return -VAR_3;
 }

 VAR_7->destroy = VAR_4;

 return 0;
}
