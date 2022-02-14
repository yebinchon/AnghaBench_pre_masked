
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int lane_count; int aux; int train_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*,int) ;
 int FUNC_1 (struct intel_dp*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static bool
FUNC_3(struct intel_dp *VAR_3,
   u8 VAR_4)
{
 u8 VAR_5[sizeof(VAR_3->train_set) + 1];
 int VAR_6, VAR_7;

 FUNC_1(VAR_3, VAR_4);

 VAR_5[0] = VAR_4;
 if ((VAR_4 & VAR_1) ==
     VAR_0) {

  VAR_7 = 1;
 } else {

  FUNC_2(VAR_5 + 1, VAR_3->train_set, VAR_3->lane_count);
  VAR_7 = VAR_3->lane_count + 1;
 }

 VAR_6 = FUNC_0(&VAR_3->aux, VAR_2,
    VAR_5, VAR_7);

 return VAR_6 == VAR_7;
}
