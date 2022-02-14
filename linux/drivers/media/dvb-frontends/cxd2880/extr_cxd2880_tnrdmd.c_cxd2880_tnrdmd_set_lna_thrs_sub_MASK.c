
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd_lna_thrs_tbl_cable {int dummy; } ;
struct cxd2880_tnrdmd_lna_thrs_tbl_air {int dummy; } ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; int diver_sub; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cxd2880_tnrdmd_lna_thrs_tbl_air*,struct cxd2880_tnrdmd_lna_thrs_tbl_cable*) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_2,
        struct
        cxd2880_tnrdmd_lna_thrs_tbl_air
        *VAR_3,
        struct cxd2880_tnrdmd_lna_thrs_tbl_cable
        *VAR_4)
{
 if (!VAR_2)
  return -VAR_1;

 if (VAR_2->diver_mode != VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_2->diver_sub,
        VAR_3, VAR_4);
}
