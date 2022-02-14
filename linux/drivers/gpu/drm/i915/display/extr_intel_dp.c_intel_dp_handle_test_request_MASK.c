
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int test_type; } ;
struct intel_dp {int aux; TYPE_1__ compliance; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_7(struct intel_dp *VAR_4)
{
 u8 VAR_5 = VAR_1;
 u8 VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_4->aux, VAR_2, &VAR_6);
 if (VAR_7 <= 0) {
  FUNC_0("Could not read test request from sink\n");
  goto update_status;
 }

 switch (VAR_6) {
 case 129:
  FUNC_0("LINK_TRAINING test requested\n");
  VAR_5 = FUNC_4(VAR_4);
  break;
 case 128:
  FUNC_0("TEST_PATTERN test requested\n");
  VAR_5 = FUNC_6(VAR_4);
  break;
 case 131:
  FUNC_0("EDID test requested\n");
  VAR_5 = FUNC_3(VAR_4);
  break;
 case 130:
  FUNC_0("PHY_PATTERN test requested\n");
  VAR_5 = FUNC_5(VAR_4);
  break;
 default:
  FUNC_0("Invalid test request '%02x'\n", VAR_6);
  break;
 }

 if (VAR_5 & VAR_0)
  VAR_4->compliance.test_type = VAR_6;

update_status:
 VAR_7 = FUNC_2(&VAR_4->aux, VAR_3, VAR_5);
 if (VAR_7 <= 0)
  FUNC_0("Could not write test response to sink\n");
}
