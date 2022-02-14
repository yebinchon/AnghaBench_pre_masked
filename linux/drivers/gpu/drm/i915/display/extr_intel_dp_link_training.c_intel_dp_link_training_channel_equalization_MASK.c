
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct intel_dp {int lane_count; int dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct intel_dp*,int *) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*,int ) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_dp*,int *) ;

__attribute__((used)) static bool
FUNC_12(struct intel_dp *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u8 VAR_6[VAR_1];
 bool VAR_7 = 0;

 VAR_5 = FUNC_9(VAR_3);

 if (VAR_5 != VAR_2)
  VAR_5 |= VAR_0;


 if (!FUNC_8(VAR_3,
         VAR_5)) {
  FUNC_1("failed to start channel equalization\n");
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {

  FUNC_4(VAR_3->dpcd);
  if (!FUNC_6(VAR_3, VAR_6)) {
   FUNC_1("failed to get link status\n");
   break;
  }


  if (!FUNC_3(VAR_6,
           VAR_3->lane_count)) {
   FUNC_5(VAR_6);
   FUNC_0("Clock recovery check failed, cannot "
          "continue channel equalization\n");
   break;
  }

  if (FUNC_2(VAR_6,
      VAR_3->lane_count)) {
   VAR_7 = 1;
   FUNC_0("Channel EQ done. DP Training "
          "successful\n");
   break;
  }


  FUNC_11(VAR_3, VAR_6);
  if (!FUNC_10(VAR_3)) {
   FUNC_1("failed to update link training\n");
   break;
  }
 }


 if (VAR_4 == 5) {
  FUNC_5(VAR_6);
  FUNC_0("Channel equalization failed 5 times\n");
 }

 FUNC_7(VAR_3);

 return VAR_7;

}
