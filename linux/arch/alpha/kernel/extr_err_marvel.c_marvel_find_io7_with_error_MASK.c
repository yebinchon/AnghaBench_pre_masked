
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_25__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_23__ ;
typedef struct TYPE_39__ TYPE_22__ ;
typedef struct TYPE_38__ TYPE_21__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct io7 {int pe; TYPE_12__* csrs; TYPE_13__* ports; } ;
struct ev7_pal_io_subpacket {unsigned long po7_error_sum; TYPE_23__* ports; int po7_err_pkt1; int po7_err_pkt0; int po7_ugbge_sym; int po7_crrct_sym; int po7_uncrr_sym; int hei_ctl; int crd_ctl; int hpi_ctl; int io7_uph; int io_sys_rev; int io_asic_rev; } ;
struct ev7_lf_subpackets {int io_pid; struct ev7_pal_io_subpacket* io; } ;
struct TYPE_41__ {unsigned long csr; } ;
struct TYPE_39__ {int csr; } ;
struct TYPE_38__ {int csr; } ;
struct TYPE_37__ {int csr; } ;
struct TYPE_35__ {int csr; } ;
struct TYPE_34__ {int csr; } ;
struct TYPE_33__ {int csr; } ;
struct TYPE_32__ {int csr; } ;
struct TYPE_31__ {int csr; } ;
struct TYPE_30__ {int csr; } ;
struct TYPE_42__ {TYPE_24__ POx_ERR_SUM; TYPE_22__ POx_TLB_ERR; TYPE_21__ POx_DM_CTRL; TYPE_20__ POx_DM_SIZE; TYPE_19__ POx_DM_DEST; TYPE_18__ POx_DM_SOURCE; TYPE_17__ POx_MULT_ERR; TYPE_16__ POx_FIRST_ERR; TYPE_15__ POx_TRANS_SUM; TYPE_14__ POx_SPL_COMPLT; } ;
typedef TYPE_25__ io7_ioport_csrs ;
struct TYPE_50__ {int csr; } ;
struct TYPE_49__ {int csr; } ;
struct TYPE_48__ {unsigned long csr; } ;
struct TYPE_47__ {int csr; } ;
struct TYPE_46__ {int csr; } ;
struct TYPE_45__ {int csr; } ;
struct TYPE_44__ {int csr; } ;
struct TYPE_43__ {int csr; } ;
struct TYPE_40__ {unsigned long pox_err_sum; int pox_tlb_err; int pox_dm_ctrl; int pox_dm_size; int pox_dm_dest; int pox_dm_source; int pox_mult_err; int pox_first_err; int pox_trans_sum; int pox_spl_cmplt; } ;
struct TYPE_36__ {int csr; } ;
struct TYPE_29__ {int enabled; TYPE_25__* csrs; } ;
struct TYPE_26__ {int csr; } ;
struct TYPE_28__ {TYPE_7__ PO7_ERROR_SUM; TYPE_11__* PO7_ERR_PKT; TYPE_10__ PO7_UGBGE_SYM; TYPE_9__ PO7_CRRCT_SYM; TYPE_8__ PO7_UNCRR_SYM; TYPE_6__ HEI_CTL; TYPE_5__ CRD_CTL; TYPE_4__ HPI_CTL; TYPE_3__ IO7_UPH; TYPE_2__ IO_SYS_REV; TYPE_1__ IO_ASIC_REV; } ;
struct TYPE_27__ {int csr; } ;


 int VAR_0 ;
 struct io7* FUNC_0 (struct io7*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ev7_pal_io_subpacket*,int,int) ;

__attribute__((used)) static struct ev7_pal_io_subpacket *
FUNC_3(struct ev7_lf_subpackets *VAR_1)
{
 struct ev7_pal_io_subpacket *VAR_2 = VAR_1->io;
 struct io7 *VAR_3;
 int VAR_4;




 if (!VAR_2)
  return ((void*)0);




 FUNC_2(VAR_2, 0x55, sizeof(*VAR_2));

 for (VAR_3 = ((void*)0); ((void*)0) != (VAR_3 = FUNC_0(VAR_3)); ) {
  unsigned long VAR_5 = 0;

  VAR_5 |= VAR_3->csrs->PO7_ERROR_SUM.csr;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!VAR_3->ports[VAR_4].enabled)
    continue;
   VAR_5 |= VAR_3->ports[VAR_4].csrs->POx_ERR_SUM.csr;
  }




  if (VAR_5 & (1UL << 63))
   break;
 }




 if (!VAR_3)
  return ((void*)0);






 VAR_2->io_asic_rev = VAR_3->csrs->IO_ASIC_REV.csr;
 VAR_2->io_sys_rev = VAR_3->csrs->IO_SYS_REV.csr;
 VAR_2->io7_uph = VAR_3->csrs->IO7_UPH.csr;
 VAR_2->hpi_ctl = VAR_3->csrs->HPI_CTL.csr;
 VAR_2->crd_ctl = VAR_3->csrs->CRD_CTL.csr;
 VAR_2->hei_ctl = VAR_3->csrs->HEI_CTL.csr;
 VAR_2->po7_error_sum = VAR_3->csrs->PO7_ERROR_SUM.csr;
 VAR_2->po7_uncrr_sym = VAR_3->csrs->PO7_UNCRR_SYM.csr;
 VAR_2->po7_crrct_sym = VAR_3->csrs->PO7_CRRCT_SYM.csr;
 VAR_2->po7_ugbge_sym = VAR_3->csrs->PO7_UGBGE_SYM.csr;
 VAR_2->po7_err_pkt0 = VAR_3->csrs->PO7_ERR_PKT[0].csr;
 VAR_2->po7_err_pkt1 = VAR_3->csrs->PO7_ERR_PKT[1].csr;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  io7_ioport_csrs *VAR_6 = VAR_3->ports[VAR_4].csrs;

  if (!VAR_3->ports[VAR_4].enabled)
   continue;

  VAR_2->ports[VAR_4].pox_err_sum = VAR_6->POx_ERR_SUM.csr;
  VAR_2->ports[VAR_4].pox_tlb_err = VAR_6->POx_TLB_ERR.csr;
  VAR_2->ports[VAR_4].pox_spl_cmplt = VAR_6->POx_SPL_COMPLT.csr;
  VAR_2->ports[VAR_4].pox_trans_sum = VAR_6->POx_TRANS_SUM.csr;
  VAR_2->ports[VAR_4].pox_first_err = VAR_6->POx_FIRST_ERR.csr;
  VAR_2->ports[VAR_4].pox_mult_err = VAR_6->POx_MULT_ERR.csr;
  VAR_2->ports[VAR_4].pox_dm_source = VAR_6->POx_DM_SOURCE.csr;
  VAR_2->ports[VAR_4].pox_dm_dest = VAR_6->POx_DM_DEST.csr;
  VAR_2->ports[VAR_4].pox_dm_size = VAR_6->POx_DM_SIZE.csr;
  VAR_2->ports[VAR_4].pox_dm_ctrl = VAR_6->POx_DM_CTRL.csr;
  VAR_6->POx_TLB_ERR.csr = VAR_2->ports[VAR_4].pox_tlb_err;
  VAR_6->POx_ERR_SUM.csr = VAR_2->ports[VAR_4].pox_err_sum;
  FUNC_1();
  VAR_6->POx_ERR_SUM.csr;
 }




 VAR_3->csrs->PO7_ERROR_SUM.csr = VAR_2->po7_error_sum;
 FUNC_1();
 VAR_3->csrs->PO7_ERROR_SUM.csr;




 VAR_1->io_pid = VAR_3->pe;

 return VAR_2;
}
