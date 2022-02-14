
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {scalar_t__ precise_ip; } ;
struct hw_perf_event {int idx; int config; int config_base; } ;
struct perf_event {TYPE_2__ attr; struct hw_perf_event hw; } ;
struct TYPE_4__ {scalar_t__ pebs_baseline; } ;
struct TYPE_6__ {int version; TYPE_1__ intel_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_6->hw;
 int VAR_8 = VAR_7->idx - VAR_4;
 u64 VAR_9, VAR_10, VAR_11 = 0;






 if (!VAR_6->attr.precise_ip)
  VAR_11 |= 0x8;
 if (VAR_7->config & VAR_2)
  VAR_11 |= 0x2;
 if (VAR_7->config & VAR_1)
  VAR_11 |= 0x1;




 if (VAR_5.version > 2 && VAR_7->config & VAR_0)
  VAR_11 |= 0x4;

 VAR_11 <<= (VAR_8 * 4);
 VAR_10 = 0xfULL << (VAR_8 * 4);

 if (VAR_5.intel_cap.pebs_baseline && VAR_6->attr.precise_ip) {
  VAR_11 |= VAR_3 << (VAR_8 * 4);
  VAR_10 |= VAR_3 << (VAR_8 * 4);
 }

 FUNC_0(VAR_7->config_base, VAR_9);
 VAR_9 &= ~VAR_10;
 VAR_9 |= VAR_11;
 FUNC_1(VAR_7->config_base, VAR_9);
}
