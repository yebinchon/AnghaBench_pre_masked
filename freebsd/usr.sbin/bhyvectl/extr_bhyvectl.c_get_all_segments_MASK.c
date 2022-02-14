
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_0 (char*,int,int ,...) ;
 int FUNC_1 (struct vmctx*,int,int ,int *,int *,int *) ;
 int FUNC_2 (struct vmctx*,int,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_32, int VAR_33)
{
 uint64_t VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 int VAR_42 = 0;

 if (!VAR_42 && (VAR_16 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_1,
       &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("ds desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
         VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_17 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_2,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("es desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_18 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_3,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("fs desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_20 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_5,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("gs desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_23 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_8,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("ss desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_15 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_0,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("cs desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_24 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_9,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("tr desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_22 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_7,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("ldtr desc[%d]\t0x%016lx/0x%08x/0x%08x\n",
          VAR_33, VAR_11, VAR_12, VAR_10);
  }
 }

 if (!VAR_42 && (VAR_19 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_4,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("gdtr[%d]\t\t0x%016lx/0x%08x\n",
          VAR_33, VAR_11, VAR_12);
  }
 }

 if (!VAR_42 && (VAR_21 || VAR_13)) {
  VAR_42 = FUNC_1(VAR_32, VAR_33, VAR_6,
        &VAR_11, &VAR_12, &VAR_10);
  if (VAR_42 == 0) {
   FUNC_0("idtr[%d]\t\t0x%016lx/0x%08x\n",
          VAR_33, VAR_11, VAR_12);
  }
 }

 if (!VAR_42 && (VAR_14 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_0, &VAR_34);
  if (VAR_42 == 0)
   FUNC_0("cs[%d]\t\t0x%04lx\n", VAR_33, VAR_34);
 }

 if (!VAR_42 && (VAR_25 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_1, &VAR_35);
  if (VAR_42 == 0)
   FUNC_0("ds[%d]\t\t0x%04lx\n", VAR_33, VAR_35);
 }

 if (!VAR_42 && (VAR_26 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_2, &VAR_36);
  if (VAR_42 == 0)
   FUNC_0("es[%d]\t\t0x%04lx\n", VAR_33, VAR_36);
 }

 if (!VAR_42 && (VAR_27 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_3, &VAR_37);
  if (VAR_42 == 0)
   FUNC_0("fs[%d]\t\t0x%04lx\n", VAR_33, VAR_37);
 }

 if (!VAR_42 && (VAR_28 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_5, &VAR_38);
  if (VAR_42 == 0)
   FUNC_0("gs[%d]\t\t0x%04lx\n", VAR_33, VAR_38);
 }

 if (!VAR_42 && (VAR_30 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_8, &VAR_39);
  if (VAR_42 == 0)
   FUNC_0("ss[%d]\t\t0x%04lx\n", VAR_33, VAR_39);
 }

 if (!VAR_42 && (VAR_31 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_9, &VAR_40);
  if (VAR_42 == 0)
   FUNC_0("tr[%d]\t\t0x%04lx\n", VAR_33, VAR_40);
 }

 if (!VAR_42 && (VAR_29 || VAR_13)) {
  VAR_42 = FUNC_2(VAR_32, VAR_33, VAR_7, &VAR_41);
  if (VAR_42 == 0)
   FUNC_0("ldtr[%d]\t\t0x%04lx\n", VAR_33, VAR_41);
 }

 return (VAR_42);
}
