
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int bpc; void* vdisplay; void* hdisplay; scalar_t__ video_pattern; } ;
struct TYPE_4__ {int test_active; TYPE_1__ test_data; } ;
struct intel_dp {TYPE_2__ compliance; int aux; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (int *,int ,scalar_t__*) ;

__attribute__((used)) static u8 FUNC_4(struct intel_dp *VAR_11)
{
 u8 VAR_12;
 u8 VAR_13;
 __be16 VAR_14, VAR_15;
 int VAR_16 = 0;


 VAR_16 = FUNC_3(&VAR_11->aux, VAR_9,
       &VAR_12);
 if (VAR_16 <= 0) {
  FUNC_0("Test pattern read failed\n");
  return VAR_8;
 }
 if (VAR_12 != VAR_1)
  return VAR_8;

 VAR_16 = FUNC_2(&VAR_11->aux, VAR_6,
      &VAR_14, 2);
 if (VAR_16 <= 0) {
  FUNC_0("H Width read failed\n");
  return VAR_8;
 }

 VAR_16 = FUNC_2(&VAR_11->aux, VAR_10,
      &VAR_15, 2);
 if (VAR_16 <= 0) {
  FUNC_0("V Height read failed\n");
  return VAR_8;
 }

 VAR_16 = FUNC_3(&VAR_11->aux, VAR_7,
       &VAR_13);
 if (VAR_16 <= 0) {
  FUNC_0("TEST MISC read failed\n");
  return VAR_8;
 }
 if ((VAR_13 & VAR_4) != VAR_0)
  return VAR_8;
 if (VAR_13 & VAR_5)
  return VAR_8;
 switch (VAR_13 & VAR_3) {
 case 129:
  VAR_11->compliance.test_data.bpc = 6;
  break;
 case 128:
  VAR_11->compliance.test_data.bpc = 8;
  break;
 default:
  return VAR_8;
 }

 VAR_11->compliance.test_data.video_pattern = VAR_12;
 VAR_11->compliance.test_data.hdisplay = FUNC_1(VAR_14);
 VAR_11->compliance.test_data.vdisplay = FUNC_1(VAR_15);

 VAR_11->compliance.test_active = 1;

 return VAR_2;
}
