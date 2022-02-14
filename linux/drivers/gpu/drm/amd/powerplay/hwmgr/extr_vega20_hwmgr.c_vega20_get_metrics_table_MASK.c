
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vega20_hwmgr {int metrics_table; scalar_t__ metrics_time; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef int SmuMetrics_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*,int *,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_3, SmuMetrics_t *VAR_4)
{
 struct vega20_hwmgr *VAR_5 =
   (struct vega20_hwmgr *)(VAR_3->backend);
 int VAR_6 = 0;

 if (!VAR_5->metrics_time || FUNC_3(VAR_2, VAR_5->metrics_time + VAR_0 / 2)) {
  VAR_6 = FUNC_2(VAR_3, (uint8_t *)VAR_4,
    VAR_1, 1);
  if (VAR_6) {
   FUNC_1("Failed to export SMU metrics table!\n");
   return VAR_6;
  }
  FUNC_0(&VAR_5->metrics_table, VAR_4, sizeof(SmuMetrics_t));
  VAR_5->metrics_time = VAR_2;
 } else
  FUNC_0(VAR_4, &VAR_5->metrics_table, sizeof(SmuMetrics_t));

 return VAR_6;
}
