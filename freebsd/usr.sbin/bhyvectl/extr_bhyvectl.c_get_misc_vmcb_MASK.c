
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct vmctx*,int,int ,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_22, int VAR_23)
{
 uint64_t VAR_24, VAR_25;
 int VAR_26 = 0;

 if (!VAR_26 && (VAR_19 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_4, 4,
      &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("cr_intercept[%d]\t0x%08x\n", VAR_23, (int)VAR_24);

  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_5, 4,
      &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("dr_intercept[%d]\t0x%08x\n", VAR_23, (int)VAR_24);

  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_6, 4,
      &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("exc_intercept[%d]\t0x%08x\n", VAR_23, (int)VAR_24);

  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_10,
      4, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("inst1_intercept[%d]\t0x%08x\n", VAR_23, (int)VAR_24);

  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_11,
      4, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("inst2_intercept[%d]\t0x%08x\n", VAR_23, (int)VAR_24);
 }

 if (!VAR_26 && (VAR_20 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_12,
       4, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("TLB ctrl[%d]\t0x%016lx\n", VAR_23, VAR_24);
 }

 if (!VAR_26 && (VAR_18 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_7,
       8, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("exitinfo1[%d]\t0x%016lx\n", VAR_23, VAR_24);
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_8,
       8, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("exitinfo2[%d]\t0x%016lx\n", VAR_23, VAR_24);
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_9,
       8, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("exitintinfo[%d]\t0x%016lx\n", VAR_23, VAR_24);
 }

 if (!VAR_26 && (VAR_21 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_13,
       8, &VAR_24);
  if (VAR_26 == 0)
   FUNC_0("v_irq/tpr[%d]\t0x%016lx\n", VAR_23, VAR_24);
 }

 if (!VAR_26 && (VAR_15 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_0, 8,
       &VAR_25);
  if (VAR_26 == 0)
   FUNC_0("AVIC apic_bar[%d]\t0x%016lx\n", VAR_23, VAR_25);
 }

 if (!VAR_26 && (VAR_17 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_2, 8,
       &VAR_25);
  if (VAR_26 == 0)
   FUNC_0("AVIC backing page[%d]\t0x%016lx\n", VAR_23, VAR_25);
 }

 if (!VAR_26 && (VAR_16 || VAR_14)) {
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_1, 8,
       &VAR_25);
  if (VAR_26 == 0)
   FUNC_0("AVIC logical table[%d]\t0x%016lx\n",
    VAR_23, VAR_25);
  VAR_26 = FUNC_1(VAR_22, VAR_23, VAR_3, 8,
       &VAR_25);
  if (VAR_26 == 0)
   FUNC_0("AVIC physical table[%d]\t0x%016lx\n",
    VAR_23, VAR_25);
 }

 return (VAR_26);
}
