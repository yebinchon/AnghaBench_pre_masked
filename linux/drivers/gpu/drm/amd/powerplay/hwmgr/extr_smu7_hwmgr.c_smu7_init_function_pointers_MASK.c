
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {scalar_t__ pp_table_version; int * pptable_func; int * hwmgr_func; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct pp_hwmgr *VAR_5)
{
 int VAR_6 = 0;

 VAR_5->hwmgr_func = &VAR_4;
 if (VAR_5->pp_table_version == VAR_0)
  VAR_5->pptable_func = &VAR_2;
 else if (VAR_5->pp_table_version == VAR_1)
  VAR_5->pptable_func = &VAR_3;

 return VAR_6;
}
