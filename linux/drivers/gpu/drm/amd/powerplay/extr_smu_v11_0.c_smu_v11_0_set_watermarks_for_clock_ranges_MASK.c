
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_table {void* cpu_addr; } ;
struct TYPE_2__ {struct smu_table* tables; } ;
struct smu_context {int watermarks_bitmap; int disable_watermark; TYPE_1__ smu_table; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct smu_context*,int ) ;
 int FUNC_1 (struct smu_context*,void*,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;

__attribute__((used)) static int
FUNC_2(struct smu_context *VAR_5, struct
       dm_pp_wm_sets_with_clock_ranges_soc15
       *VAR_6)
{
 int VAR_7 = 0;
 struct smu_table *VAR_8 = &VAR_5->smu_table.tables[VAR_2];
 void *VAR_9 = VAR_8->cpu_addr;

 if (!VAR_5->disable_watermark &&
     FUNC_0(VAR_5, VAR_0) &&
     FUNC_0(VAR_5, VAR_1)) {
  FUNC_1(VAR_5, VAR_9, VAR_6);
  VAR_5->watermarks_bitmap |= VAR_3;
  VAR_5->watermarks_bitmap &= ~VAR_4;
 }

 return VAR_7;
}
