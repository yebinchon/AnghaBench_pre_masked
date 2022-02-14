
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int test_link_rate; int test_lane_count; } ;
struct intel_dp {TYPE_1__ compliance; int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (struct intel_dp*,int,int ) ;

__attribute__((used)) static u8 FUNC_4(struct intel_dp *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 u8 VAR_8, VAR_9;




 VAR_6 = FUNC_2(&VAR_5->aux, VAR_2,
       &VAR_8);

 if (VAR_6 <= 0) {
  FUNC_0("Lane count read failed\n");
  return VAR_4;
 }
 VAR_8 &= VAR_0;

 VAR_6 = FUNC_2(&VAR_5->aux, VAR_3,
       &VAR_9);
 if (VAR_6 <= 0) {
  FUNC_0("Link Rate read failed\n");
  return VAR_4;
 }
 VAR_7 = FUNC_1(VAR_9);


 if (!FUNC_3(VAR_5, VAR_7,
     VAR_8))
  return VAR_4;

 VAR_5->compliance.test_lane_count = VAR_8;
 VAR_5->compliance.test_link_rate = VAR_7;

 return VAR_1;
}
