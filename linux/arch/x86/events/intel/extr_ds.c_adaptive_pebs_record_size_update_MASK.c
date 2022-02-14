
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pebs_xmm {int dummy; } ;
struct pebs_meminfo {int dummy; } ;
struct pebs_lbr_entry {int dummy; } ;
struct pebs_gprs {int dummy; } ;
struct pebs_basic {int dummy; } ;
struct cpu_hw_events {int pebs_data_cfg; int pebs_record_size; } ;
struct TYPE_2__ {int lbr_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpu_hw_events* FUNC_0 (int *) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct cpu_hw_events *VAR_6 = FUNC_0(&VAR_4);
 u64 VAR_7 = VAR_6->pebs_data_cfg;
 int VAR_8 = sizeof(struct pebs_basic);

 if (VAR_7 & VAR_2)
  VAR_8 += sizeof(struct pebs_meminfo);
 if (VAR_7 & VAR_0)
  VAR_8 += sizeof(struct pebs_gprs);
 if (VAR_7 & VAR_3)
  VAR_8 += sizeof(struct pebs_xmm);
 if (VAR_7 & VAR_1)
  VAR_8 += VAR_5.lbr_nr * sizeof(struct pebs_lbr_entry);

 VAR_6->pebs_record_size = VAR_8;
}
