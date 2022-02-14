
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_18__ {int det_buffer_size_kbytes; } ;
struct display_mode_lib {TYPE_1__ ip; } ;
struct TYPE_16__ {void* swath_height; void* pte_row_height_linear; } ;
struct TYPE_26__ {int drq_expansion_mode; int prq_expansion_mode; int mrq_expansion_mode; int crq_expansion_mode; unsigned int plane1_base_address; TYPE_11__ rq_regs_c; TYPE_11__ rq_regs_l; } ;
typedef TYPE_9__ display_rq_regs_st ;
struct TYPE_24__ {scalar_t__ stored_swath_bytes; } ;
struct TYPE_23__ {scalar_t__ stored_swath_bytes; } ;
struct TYPE_25__ {TYPE_7__ rq_c; TYPE_6__ rq_l; } ;
struct TYPE_17__ {int chunk_bytes; } ;
struct TYPE_22__ {TYPE_12__ rq_l; TYPE_12__ rq_c; } ;
struct TYPE_20__ {int swath_height; int dpte_row_height; } ;
struct TYPE_19__ {int swath_height; int dpte_row_height; } ;
struct TYPE_21__ {TYPE_3__ rq_c; TYPE_2__ rq_l; } ;
struct TYPE_15__ {TYPE_8__ misc; scalar_t__ yuv420; TYPE_5__ sizing; TYPE_4__ dlg; } ;
typedef TYPE_10__ display_rq_params_st ;


 void* FUNC_0 (void*,int) ;
 void* FUNC_1 (int ) ;
 double FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct display_mode_lib*,TYPE_11__*,TYPE_12__) ;

__attribute__((used)) static void FUNC_4(struct display_mode_lib *VAR_0,
  display_rq_regs_st *VAR_1,
  const display_rq_params_st VAR_2)
{
 unsigned int VAR_3 = VAR_0->ip.det_buffer_size_kbytes * 1024;
 unsigned int VAR_4 = 0;

 FUNC_3(VAR_0, &(VAR_1->rq_regs_l), VAR_2.sizing.rq_l);

 VAR_1->rq_regs_l.pte_row_height_linear = FUNC_0(FUNC_1(VAR_2.dlg.rq_l.dpte_row_height),
   1) - 3;

 if (VAR_2.yuv420) {
  FUNC_3(VAR_0, &(VAR_1->rq_regs_c), VAR_2.sizing.rq_c);
  VAR_1->rq_regs_c.pte_row_height_linear = FUNC_0(FUNC_1(VAR_2.dlg.rq_c.dpte_row_height),
    1) - 3;
 }

 VAR_1->rq_regs_l.swath_height = FUNC_1(VAR_2.dlg.rq_l.swath_height);
 VAR_1->rq_regs_c.swath_height = FUNC_1(VAR_2.dlg.rq_c.swath_height);



 if (VAR_2.sizing.rq_l.chunk_bytes >= 32 * 1024) {
  VAR_1->drq_expansion_mode = 0;
 } else {
  VAR_1->drq_expansion_mode = 2;
 }
 VAR_1->prq_expansion_mode = 1;
 VAR_1->mrq_expansion_mode = 1;
 VAR_1->crq_expansion_mode = 1;

 if (VAR_2.yuv420) {
  if ((double) VAR_2.misc.rq_l.stored_swath_bytes
    / (double) VAR_2.misc.rq_c.stored_swath_bytes <= 1.5) {
   VAR_4 = (VAR_3 / 2.0 / 64.0);
  } else {
   VAR_4 = FUNC_2((unsigned int) ((2.0 * VAR_3) / 3.0),
     256,
     0) / 64.0;
  }
 }
 VAR_1->plane1_base_address = VAR_4;
}
