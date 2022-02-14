
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_28__ {void* mrrs; } ;
union cvmx_sli_s2m_portx_ctl {void* u64; TYPE_7__ s; } ;
struct TYPE_23__ {int cere; int nfere; int fere; } ;
union cvmx_pciercx_cfg075 {void* u32; TYPE_2__ s; } ;
struct TYPE_29__ {int ge; int ce; } ;
union cvmx_pciercx_cfg070 {void* u32; TYPE_8__ s; } ;
struct TYPE_22__ {int secee; int sefee; int senfee; int pmeie; } ;
union cvmx_pciercx_cfg035 {void* u32; TYPE_1__ s; } ;
struct TYPE_24__ {int hpint_en; int dlls_en; int ccint_en; } ;
union cvmx_pciercx_cfg034 {void* u32; TYPE_3__ s; } ;
struct TYPE_16__ {scalar_t__ aslpc; } ;
union cvmx_pciercx_cfg032 {void* u32; TYPE_10__ s; } ;
struct TYPE_25__ {int ro_en; int ns_en; int ce_en; int nfe_en; int fe_en; int ur_en; void* mrrs; void* mps; } ;
union cvmx_pciercx_cfg030 {void* u32; TYPE_4__ s; } ;
struct TYPE_21__ {scalar_t__ umem_limit; } ;
union cvmx_pciercx_cfg011 {void* u32; TYPE_15__ s; } ;
struct TYPE_20__ {int umem_base; } ;
union cvmx_pciercx_cfg010 {void* u32; TYPE_14__ s; } ;
struct TYPE_19__ {int lmem_base; scalar_t__ lmem_limit; } ;
union cvmx_pciercx_cfg009 {void* u32; TYPE_13__ s; } ;
struct TYPE_18__ {int mb_addr; scalar_t__ ml_addr; } ;
union cvmx_pciercx_cfg008 {void* u32; TYPE_12__ s; } ;
struct TYPE_17__ {int pbnum; int sbnum; int subbnum; } ;
union cvmx_pciercx_cfg006 {void* u32; TYPE_11__ s; } ;
struct TYPE_30__ {int msae; int me; int i_dis; int see; } ;
union cvmx_pciercx_cfg001 {void* u32; TYPE_9__ s; } ;
struct TYPE_26__ {int c1_b1_s; int c0_b1_s; void* mrrs; void* mps; } ;
union cvmx_npei_ctl_status2 {void* u64; TYPE_5__ s; } ;
struct TYPE_27__ {int molr; void* mrrs; void* mps; } ;
union cvmx_dpi_sli_prtx_cfg {void* u64; TYPE_6__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_0 ;
 int FUNC_15 (int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (int ) ;
 void* FUNC_17 (int,int ) ;
 int FUNC_18 (int,int ,void*) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (int ,void*) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static void FUNC_22(int VAR_7)
{
 union cvmx_pciercx_cfg030 VAR_8;
 union cvmx_pciercx_cfg070 VAR_9;
 union cvmx_pciercx_cfg001 VAR_10;
 union cvmx_pciercx_cfg032 VAR_11;
 union cvmx_pciercx_cfg006 VAR_12;
 union cvmx_pciercx_cfg008 VAR_13;
 union cvmx_pciercx_cfg009 VAR_14;
 union cvmx_pciercx_cfg010 VAR_15;
 union cvmx_pciercx_cfg011 VAR_16;
 union cvmx_pciercx_cfg035 VAR_17;
 union cvmx_pciercx_cfg075 VAR_18;
 union cvmx_pciercx_cfg034 VAR_19;






 VAR_8 = FUNC_17(VAR_7, FUNC_7(VAR_7));
 if (FUNC_16(VAR_5)) {
  VAR_8 = VAR_1;
  VAR_8 = VAR_3;
 } else {
  VAR_8 = VAR_2;
  VAR_8 = VAR_4;
 }




 VAR_8 = 1;

 VAR_8 = 1;

 VAR_8 = 1;

 VAR_8 = 1;

 VAR_8 = 1;

 VAR_8 = 1;
 FUNC_18(VAR_7, FUNC_7(VAR_7), VAR_8);


 if (FUNC_21(VAR_6)) {
  union cvmx_npei_ctl_status2 VAR_20;






  VAR_20 = FUNC_19(VAR_0);

  VAR_20 = VAR_1;

  VAR_20 = VAR_3;
  if (VAR_7)
   VAR_20 = 3;
  else
   VAR_20 = 3;

  FUNC_20(VAR_0, VAR_20);
 } else {






  union cvmx_dpi_sli_prtx_cfg VAR_21;
  union cvmx_sli_s2m_portx_ctl VAR_22;
  VAR_21.u64 = FUNC_19(FUNC_0(VAR_7));
  VAR_21.s.mps = VAR_2;
  VAR_21.s.mrrs = VAR_4;

  VAR_21.s.molr = 32;
  FUNC_20(FUNC_0(VAR_7), VAR_21.u64);

  VAR_22.u64 = FUNC_19(FUNC_15(VAR_7));
  VAR_22.s.mrrs = VAR_4;
  FUNC_20(FUNC_15(VAR_7), VAR_22.u64);
 }


 VAR_9 = FUNC_17(VAR_7, FUNC_13(VAR_7));
 VAR_9 = 1;
 VAR_9 = 1;
 FUNC_18(VAR_7, FUNC_13(VAR_7), VAR_9);







 VAR_10 = FUNC_17(VAR_7, FUNC_1(VAR_7));
 VAR_10 = 1;
 VAR_10 = 1;
 VAR_10 = 1;
 VAR_10 = 1;
 FUNC_18(VAR_7, FUNC_1(VAR_7), VAR_10);



 FUNC_18(VAR_7, FUNC_11(VAR_7), 0);

 FUNC_18(VAR_7, FUNC_12(VAR_7), 0);



 VAR_11 = FUNC_17(VAR_7, FUNC_8(VAR_7));
 VAR_11 = 0;
 FUNC_18(VAR_7, FUNC_8(VAR_7), VAR_11);
 VAR_12 = 0;
 VAR_12 = 1;
 VAR_12 = 1;
 VAR_12 = 1;
 FUNC_18(VAR_7, FUNC_2(VAR_7), VAR_12);







 VAR_13 = 0;
 VAR_13 = 0x100;
 VAR_13 = 0;
 FUNC_18(VAR_7, FUNC_3(VAR_7), VAR_13);
 VAR_14 = FUNC_17(VAR_7, FUNC_4(VAR_7));
 VAR_15 = FUNC_17(VAR_7, FUNC_5(VAR_7));
 VAR_16 = FUNC_17(VAR_7, FUNC_6(VAR_7));
 VAR_14 = 0x100;
 VAR_14 = 0;
 VAR_15 = 0x100;
 VAR_16 = 0;
 FUNC_18(VAR_7, FUNC_4(VAR_7), VAR_14);
 FUNC_18(VAR_7, FUNC_5(VAR_7), VAR_15);
 FUNC_18(VAR_7, FUNC_6(VAR_7), VAR_16);





 VAR_17 = FUNC_17(VAR_7, FUNC_10(VAR_7));
 VAR_17 = 1;
 VAR_17 = 1;
 VAR_17 = 1;
 VAR_17 = 1;
 FUNC_18(VAR_7, FUNC_10(VAR_7), VAR_17);





 VAR_18 = FUNC_17(VAR_7, FUNC_14(VAR_7));
 VAR_18 = 1;
 VAR_18 = 1;
 VAR_18 = 1;
 FUNC_18(VAR_7, FUNC_14(VAR_7), VAR_18);





 VAR_19 = FUNC_17(VAR_7, FUNC_9(VAR_7));
 VAR_19 = 1;
 VAR_19 = 1;
 VAR_19 = 1;
 FUNC_18(VAR_7, FUNC_9(VAR_7), VAR_19);
}
