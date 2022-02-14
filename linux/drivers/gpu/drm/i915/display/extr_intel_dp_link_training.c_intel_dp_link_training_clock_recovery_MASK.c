
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int lane_count; scalar_t__* dpcd; int* train_set; int DP; int aux; int link_rate; int (* prepare_link_retrain ) (struct intel_dp*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 (int *,int ,int*,int) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (struct intel_dp*,int ,int*,int*) ;
 int FUNC_7 (struct intel_dp*,int*) ;
 scalar_t__ FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*,int) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_dp*,int*) ;
 int FUNC_12 (struct intel_dp*) ;

__attribute__((used)) static bool
FUNC_13(struct intel_dp *VAR_12)
{
 u8 VAR_13;
 int VAR_14, VAR_15, VAR_16;
 bool VAR_17 = 0;
 u8 VAR_18[2];
 u8 VAR_19, VAR_20;

 if (VAR_12->prepare_link_retrain)
  VAR_12->prepare_link_retrain(VAR_12);

 FUNC_6(VAR_12, VAR_12->link_rate,
         &VAR_19, &VAR_20);

 if (VAR_19)
  FUNC_0("Using LINK_BW_SET value %02x\n", VAR_19);
 else
  FUNC_0("Using LINK_RATE_SET value %02x\n", VAR_20);


 VAR_18[0] = VAR_19;
 VAR_18[1] = VAR_12->lane_count;
 if (FUNC_4(VAR_12->dpcd))
  VAR_18[1] |= VAR_3;
 FUNC_3(&VAR_12->aux, VAR_4, VAR_18, 2);


 if (!VAR_19)
  FUNC_3(&VAR_12->aux, VAR_5,
      &VAR_20, 1);

 VAR_18[0] = 0;
 VAR_18[1] = VAR_9;
 FUNC_3(&VAR_12->aux, VAR_0, VAR_18, 2);

 VAR_12->DP |= VAR_8;


 if (!FUNC_9(VAR_12,
           VAR_10 |
           VAR_6)) {
  FUNC_1("failed to enable link training\n");
  return 0;
 }
 if (VAR_12->dpcd[VAR_1] >= VAR_2)
  VAR_16 = 10;
 else
  VAR_16 = 80;

 VAR_14 = 1;
 for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15) {
  u8 VAR_21[VAR_7];

  FUNC_5(VAR_12->dpcd);

  if (!FUNC_7(VAR_12, VAR_21)) {
   FUNC_1("failed to get link status\n");
   return 0;
  }

  if (FUNC_2(VAR_21, VAR_12->lane_count)) {
   FUNC_0("clock recovery OK\n");
   return 1;
  }

  if (VAR_14 == 5) {
   FUNC_0("Same voltage tried 5 times\n");
   return 0;
  }

  if (VAR_17) {
   FUNC_0("Max Voltage Swing reached\n");
   return 0;
  }

  VAR_13 = VAR_12->train_set[0] & VAR_11;


  FUNC_11(VAR_12, VAR_21);
  if (!FUNC_10(VAR_12)) {
   FUNC_1("failed to update link training\n");
   return 0;
  }

  if ((VAR_12->train_set[0] & VAR_11) ==
      VAR_13)
   ++VAR_14;
  else
   VAR_14 = 1;

  if (FUNC_8(VAR_12))
   VAR_17 = 1;

 }
 FUNC_1("Failed clock recovery %d times, giving up!\n", VAR_16);
 return 0;
}
