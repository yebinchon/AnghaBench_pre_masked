
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_dp_link_train_info {int tries; int* train_set; int dp_lane_count; int link_status; int aux; int dpcd; scalar_t__ tp3_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_dp_link_train_info*,int ) ;
 int FUNC_7 (struct radeon_dp_link_train_info*) ;

__attribute__((used)) static int FUNC_8(struct radeon_dp_link_train_info *VAR_5)
{
 bool VAR_6;

 if (VAR_5->tp3_supported)
  FUNC_6(VAR_5, VAR_1);
 else
  FUNC_6(VAR_5, VAR_0);


 VAR_5->tries = 0;
 VAR_6 = 0;
 while (1) {
  FUNC_5(VAR_5->dpcd);

  if (FUNC_4(VAR_5->aux,
       VAR_5->link_status) <= 0) {
   FUNC_1("displayport link status failed\n");
   break;
  }

  if (FUNC_3(VAR_5->link_status, VAR_5->dp_lane_count)) {
   VAR_6 = 1;
   break;
  }


  if (VAR_5->tries > 5) {
   FUNC_1("channel eq failed: 5 tries\n");
   break;
  }


  FUNC_2(VAR_5->link_status, VAR_5->dp_lane_count, VAR_5->train_set);

  FUNC_7(VAR_5);
  VAR_5->tries++;
 }

 if (!VAR_6) {
  FUNC_1("channel eq failed\n");
  return -1;
 } else {
  FUNC_0("channel eq at voltage %d pre-emphasis %d\n",
     VAR_5->train_set[0] & VAR_4,
     (VAR_5->train_set[0] & VAR_2)
     >> VAR_3);
  return 0;
 }
}
