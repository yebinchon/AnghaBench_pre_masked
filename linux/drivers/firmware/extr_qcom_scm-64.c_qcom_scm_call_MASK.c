
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct qcom_scm_desc {int arginfo; scalar_t__* args; } ;
struct device {int dummy; } ;
struct arm_smccc_res {scalar_t__ a0; } ;
struct TYPE_2__ {scalar_t__ a6; } ;
struct arm_smccc_quirk {TYPE_1__ state; int id; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le64 ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,struct arm_smccc_res*,struct arm_smccc_quirk*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct device*,void*,size_t,int ) ;
 scalar_t__ FUNC_7 (struct device*,scalar_t__) ;
 int FUNC_8 (struct device*,scalar_t__,size_t,int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_14 ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct device *VAR_16, u32 VAR_17, u32 VAR_18,
    const struct qcom_scm_desc *VAR_19,
    struct arm_smccc_res *VAR_20)
{
 int VAR_21 = VAR_19->arginfo & 0xf;
 int VAR_22 = 0, VAR_23;
 u32 VAR_24 = FUNC_2(VAR_17, VAR_18);
 u64 VAR_25, VAR_26 = VAR_19->args[VAR_6];
 dma_addr_t VAR_27 = 0;
 void *VAR_28 = ((void*)0);
 size_t VAR_29;
 struct arm_smccc_quirk VAR_30 = {.id = VAR_1};

 if (FUNC_15(VAR_21 > VAR_9)) {
  VAR_29 = VAR_8 * sizeof(u64);
  VAR_28 = FUNC_10(FUNC_1(VAR_29), VAR_7);

  if (!VAR_28)
   return -VAR_5;

  if (VAR_15 == VAR_2) {
   __le32 *VAR_31 = VAR_28;

   for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++)
    VAR_31[VAR_23] = FUNC_4(VAR_19->args[VAR_23 +
            VAR_6]);
  } else {
   __le64 *VAR_32 = VAR_28;

   for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++)
    VAR_32[VAR_23] = FUNC_5(VAR_19->args[VAR_23 +
            VAR_6]);
  }

  VAR_27 = FUNC_6(VAR_16, VAR_28, VAR_29,
        VAR_4);

  if (FUNC_7(VAR_16, VAR_27)) {
   FUNC_9(VAR_28);
   return -VAR_5;
  }

  VAR_26 = VAR_27;
 }

 do {
  FUNC_12(&VAR_14);

  VAR_25 = FUNC_0(VAR_3,
      VAR_15,
      VAR_0, VAR_24);

  VAR_30.state.a6 = 0;

  do {
   FUNC_3(VAR_25, VAR_19->arginfo, VAR_19->args[0],
          VAR_19->args[1], VAR_19->args[2], VAR_26,
          VAR_30.state.a6, 0, VAR_20, &VAR_30);

   if (VAR_20->a0 == VAR_12)
    VAR_25 = VAR_20->a0;

  } while (VAR_20->a0 == VAR_12);

  FUNC_13(&VAR_14);

  if (VAR_20->a0 == VAR_13) {
   if (VAR_22++ > VAR_10)
    break;
   FUNC_11(VAR_11);
  }
 } while (VAR_20->a0 == VAR_13);

 if (VAR_28) {
  FUNC_8(VAR_16, VAR_27, VAR_29, VAR_4);
  FUNC_9(VAR_28);
 }

 if (VAR_20->a0 < 0)
  return FUNC_14(VAR_20->a0);

 return 0;
}
