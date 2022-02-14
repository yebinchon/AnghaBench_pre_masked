
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd_lna_thrs_tbl_cable {int dummy; } ;
struct cxd2880_tnrdmd_lna_thrs_tbl_air {int dummy; } ;
struct cxd2880_tnrdmd {struct cxd2880_tnrdmd_lna_thrs_tbl_cable* lna_thrs_tbl_cable; struct cxd2880_tnrdmd_lna_thrs_tbl_air* lna_thrs_tbl_air; } ;


 int VAR_0 ;

int FUNC_0(struct cxd2880_tnrdmd *VAR_1,
    struct cxd2880_tnrdmd_lna_thrs_tbl_air
    *VAR_2,
    struct cxd2880_tnrdmd_lna_thrs_tbl_cable
    *VAR_3)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->lna_thrs_tbl_air = VAR_2;
 VAR_1->lna_thrs_tbl_cable = VAR_3;

 return 0;
}
