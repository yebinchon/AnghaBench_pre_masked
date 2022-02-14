
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int snpid; } ;
struct TYPE_8__ {TYPE_3__ to_host; } ;
struct TYPE_5__ {int omi; } ;
struct TYPE_6__ {TYPE_1__ index_ot; } ;
struct paace {int wbah; unsigned long fspi; unsigned long twbah; int addr_bitfields; int impl_attr; int win_bitfields; TYPE_4__ domain_attr; TYPE_2__ op_encode; } ;
typedef int phys_addr_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int) ;
 struct paace* FUNC_4 (int) ;
 int FUNC_5 (struct paace*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ,int) ;

int FUNC_8(int VAR_17, phys_addr_t VAR_18, phys_addr_t VAR_19,
         u32 VAR_20, unsigned long VAR_21, u32 VAR_22, u32 VAR_23,
         u32 VAR_24, int VAR_25)
{
 struct paace *VAR_26;
 unsigned long VAR_27;

 if ((VAR_19 & (VAR_19 - 1)) || VAR_19 < VAR_12) {
  FUNC_6("window size too small or not a power of two %pa\n",
    &VAR_19);
  return -VAR_0;
 }

 if (VAR_18 & (VAR_19 - 1)) {
  FUNC_6("window address is not aligned with window size\n");
  return -VAR_0;
 }

 VAR_26 = FUNC_4(VAR_17);
 if (!VAR_26)
  return -VAR_1;


 FUNC_7(VAR_26->addr_bitfields, VAR_15,
        FUNC_0(VAR_19));

 FUNC_5(VAR_26);

 VAR_26->wbah = VAR_18 >> (VAR_11 + 20);
 FUNC_7(VAR_26->addr_bitfields, VAR_14,
        (VAR_18 >> VAR_11));


 if (VAR_20 < VAR_2) {
  FUNC_7(VAR_26->impl_attr, VAR_7, VAR_9);
  VAR_26->op_encode.index_ot.omi = VAR_20;
 } else if (~VAR_20 != 0) {
  FUNC_6("bad operation mapping index: %d\n", VAR_20);
  return -VAR_0;
 }


 if (~VAR_23 != 0)
  FUNC_7(VAR_26->impl_attr, VAR_6, VAR_23);


 if (~VAR_22 != 0)
  VAR_26->domain_attr.to_host.snpid = VAR_22;

 if (VAR_24) {

  VAR_27 = FUNC_3(VAR_24 - 1);
  if (VAR_27 == VAR_16) {
   FUNC_6("spaace indexes exhausted\n");
   return -VAR_0;
  }


  FUNC_7(VAR_26->impl_attr, VAR_8,
         FUNC_1(VAR_24));
  FUNC_7(VAR_26->addr_bitfields, VAR_13, 0x1);
  VAR_26->fspi = VAR_27;
 } else {
  FUNC_7(VAR_26->impl_attr, VAR_5, VAR_4);
  VAR_26->twbah = VAR_21 >> 20;
  FUNC_7(VAR_26->win_bitfields, VAR_10, VAR_21);
  FUNC_7(VAR_26->addr_bitfields, VAR_3, VAR_25);
  FUNC_7(VAR_26->impl_attr, VAR_8, 0);
  FUNC_7(VAR_26->addr_bitfields, VAR_13, 0);
 }
 FUNC_2();

 return 0;
}
