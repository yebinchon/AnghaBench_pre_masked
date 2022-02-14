
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct smu10_hwmgr {int water_marks_exist; int water_marks_table; } ;
struct pp_hwmgr {struct smu10_hwmgr* backend; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {int dummy; } ;
typedef int Watermarks_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;
 int FUNC_1 (struct pp_hwmgr*,int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1,
  void *VAR_2)
{
 struct smu10_hwmgr *VAR_3 = VAR_1->backend;
 struct dm_pp_wm_sets_with_clock_ranges_soc15 *VAR_4 = VAR_2;
 Watermarks_t *VAR_5 = &(VAR_3->water_marks_table);
 int VAR_6 = 0;

 FUNC_0(VAR_5,VAR_4);
 FUNC_1(VAR_1, (uint8_t *)VAR_5, (uint16_t)VAR_0, 0);
 VAR_3->water_marks_exist = 1;
 return VAR_6;
}
