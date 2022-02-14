
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cpu_dvfs_info {int proc_reg; scalar_t__ need_voltage_tracking; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mtk_cpu_dvfs_info*,int) ;
 int FUNC_1 (int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtk_cpu_dvfs_info *VAR_1, int VAR_2)
{
 if (VAR_1->need_voltage_tracking)
  return FUNC_0(VAR_1, VAR_2);
 else
  return FUNC_1(VAR_1->proc_reg, VAR_2,
          VAR_2 + VAR_0);
}
