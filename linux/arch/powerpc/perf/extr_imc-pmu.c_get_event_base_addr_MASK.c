
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ event_base; } ;
struct TYPE_3__ {int config; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static u64 * FUNC_3(struct perf_event *VAR_2)
{
 u64 VAR_3;

 if (FUNC_0(VAR_2)) {
  VAR_3 = (u64)FUNC_1(VAR_1, FUNC_2());
  return (u64 *)(VAR_3 + (VAR_2->attr.config & VAR_0));
 }

 return (u64 *)VAR_2->hw.event_base;
}
