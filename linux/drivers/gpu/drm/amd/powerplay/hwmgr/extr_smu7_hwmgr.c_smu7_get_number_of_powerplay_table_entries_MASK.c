
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {scalar_t__ pp_table_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = 0;

 if (VAR_2->pp_table_version == VAR_0) {
  VAR_3 = FUNC_1(VAR_2, &VAR_4);
  return VAR_3 ? 0 : VAR_4;
 } else if (VAR_2->pp_table_version == VAR_1) {
  VAR_3 = FUNC_0(VAR_2);
  return VAR_3;
 }
 return 0;
}
