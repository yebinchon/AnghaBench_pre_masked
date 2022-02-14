
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int HB1; int HB2; int HB3; scalar_t__ HB0; } ;
struct dp_sdp {scalar_t__* db; TYPE_1__ sdp_header; } ;
struct analogix_dp_device {int dev; int aux; } ;
typedef int psr_vsc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (struct analogix_dp_device*,struct dp_sdp*,int) ;
 int FUNC_2 (struct analogix_dp_device*,int ,int) ;
 int FUNC_3 (struct analogix_dp_device*) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct dp_sdp*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct analogix_dp_device *VAR_5)
{
 struct dp_sdp VAR_6;
 int VAR_7;
 u8 VAR_8;

 FUNC_2(VAR_5, VAR_4, 0);

 VAR_7 = FUNC_5(&VAR_5->aux, VAR_2, VAR_3);
 if (VAR_7 != 1) {
  FUNC_0(VAR_5->dev, "Failed to set DP Power0 %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_4(&VAR_5->aux, VAR_1, &VAR_8);
 if (VAR_7 != 1) {
  FUNC_0(VAR_5->dev, "Failed to read psr status %d\n", VAR_7);
  return VAR_7;
 } else if (VAR_8 == VAR_0) {
  FUNC_0(VAR_5->dev, "sink inactive, skip disable psr");
  return 0;
 }

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Failed to train the link %d\n", VAR_7);
  return VAR_7;
 }


 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sdp_header.HB0 = 0;
 VAR_6.sdp_header.HB1 = 0x7;
 VAR_6.sdp_header.HB2 = 0x2;
 VAR_6.sdp_header.HB3 = 0x8;

 VAR_6.db[0] = 0;
 VAR_6.db[1] = 0;

 return FUNC_1(VAR_5, &VAR_6, 1);
}
