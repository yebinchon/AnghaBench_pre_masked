
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ omi; } ;
struct TYPE_8__ {TYPE_3__ index_ot; } ;
struct TYPE_5__ {scalar_t__ snpid; } ;
struct TYPE_6__ {TYPE_1__ to_host; } ;
struct paace {scalar_t__ addr_bitfields; scalar_t__ win_bitfields; scalar_t__ impl_attr; unsigned long twbah; TYPE_4__ op_encode; TYPE_2__ domain_attr; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 struct paace* FUNC_2 (int) ;
 struct paace* FUNC_3 (struct paace*,scalar_t__) ;
 int FUNC_4 (struct paace*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 () ;

int FUNC_8(int VAR_16, u32 VAR_17, u32 VAR_18,
         phys_addr_t VAR_19, u32 VAR_20, unsigned long VAR_21,
         u32 VAR_22, u32 VAR_23, int VAR_24, int VAR_25)
{
 struct paace *VAR_26;


 if (!VAR_17) {
  FUNC_5("Invalid subwindow count\n");
  return -VAR_0;
 }

 VAR_26 = FUNC_2(VAR_16);
 if (VAR_18 > 0 && VAR_18 < VAR_17 && VAR_26) {
  VAR_26 = FUNC_3(VAR_26, VAR_18 - 1);

  if (VAR_26 && !(VAR_26->addr_bitfields & VAR_10)) {
   FUNC_4(VAR_26);
   FUNC_6(VAR_26->addr_bitfields, VAR_14, VAR_16);
  }
 }

 if (!VAR_26) {
  FUNC_5("Invalid liodn entry\n");
  return -VAR_1;
 }

 if ((VAR_19 & (VAR_19 - 1)) || VAR_19 < VAR_13) {
  FUNC_5("subwindow size out of range, or not a power of 2\n");
  return -VAR_0;
 }

 if (VAR_21 == VAR_15) {
  FUNC_5("real page number out of range\n");
  return -VAR_0;
 }


 FUNC_6(VAR_26->win_bitfields, VAR_11,
        FUNC_0(VAR_19));

 FUNC_6(VAR_26->impl_attr, VAR_6, VAR_5);
 VAR_26->twbah = VAR_21 >> 20;
 FUNC_6(VAR_26->win_bitfields, VAR_12, VAR_21);
 FUNC_6(VAR_26->addr_bitfields, VAR_3, VAR_25);


 if (~VAR_22 != 0)
  VAR_26->domain_attr.to_host.snpid = VAR_22;


 if (VAR_20 < VAR_2) {
  FUNC_6(VAR_26->impl_attr, VAR_8, VAR_9);
  VAR_26->op_encode.index_ot.omi = VAR_20;
 } else if (~VAR_20 != 0) {
  FUNC_5("bad operation mapping index: %d\n", VAR_20);
  return -VAR_0;
 }

 if (~VAR_23 != 0)
  FUNC_6(VAR_26->impl_attr, VAR_7, VAR_23);

 FUNC_7();

 if (VAR_24)
  FUNC_6(VAR_26->addr_bitfields, VAR_4, VAR_10);

 FUNC_1();

 return 0;
}
