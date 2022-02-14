
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hubp {int dummy; } ;
struct dcn21_hubp {int dummy; } ;
struct _vcs_dpi_display_dlg_regs_st {scalar_t__ refcyc_per_vm_group_vblank; scalar_t__ refcyc_per_vm_req_vblank; scalar_t__ refcyc_per_vm_group_flip; scalar_t__ refcyc_per_vm_req_flip; scalar_t__ refcyc_per_pte_group_flip_c; scalar_t__ refcyc_per_meta_chunk_flip_c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 struct dcn21_hubp* FUNC_2 (struct hubp*) ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_3(
  struct hubp *VAR_12,
  struct _vcs_dpi_display_dlg_regs_st *VAR_13)
{
 struct dcn21_hubp *VAR_14 = FUNC_2(VAR_12);
 uint32_t VAR_15;

 FUNC_0(VAR_10, VAR_7, &VAR_15);
 if (VAR_15 > VAR_13->refcyc_per_vm_group_vblank)
  FUNC_1(VAR_10, 0,
    VAR_7, VAR_13->refcyc_per_vm_group_vblank);

 FUNC_0(VAR_11,
   VAR_9,
   &VAR_15);
 if (VAR_15 > VAR_13->refcyc_per_vm_req_vblank)
  FUNC_1(VAR_11, 0,
    VAR_9, VAR_13->refcyc_per_vm_req_vblank);

 FUNC_0(VAR_0, VAR_6, &VAR_15);
 if (VAR_15 > VAR_13->refcyc_per_vm_group_flip)
  FUNC_1(VAR_0, 0,
    VAR_6, VAR_13->refcyc_per_vm_group_flip);

 FUNC_0(VAR_1, VAR_8, &VAR_15);
 if (VAR_15 > VAR_13->refcyc_per_vm_req_flip)
  FUNC_1(VAR_1, 0,
     VAR_8, VAR_13->refcyc_per_vm_req_flip);

 FUNC_1(VAR_2, 0,
   VAR_5, VAR_13->refcyc_per_pte_group_flip_c);
 FUNC_1(VAR_3, 0,
   VAR_4, VAR_13->refcyc_per_meta_chunk_flip_c);
}
