
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_eq {scalar_t__ type_flag; scalar_t__ arm_st; int eqn; int cons_index; int doorbell; struct hns_roce_dev* hr_dev; } ;
struct hns_roce_dev {int dummy; } ;
typedef scalar_t__ __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct hns_roce_dev*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_eq *VAR_13)
{
 struct hns_roce_dev *VAR_14 = VAR_13->hr_dev;
 __le32 VAR_15[2];

 VAR_15[0] = 0;
 VAR_15[1] = 0;

 if (VAR_13->type_flag == VAR_0) {
  FUNC_1(VAR_15[0], VAR_7,
          VAR_8,
          VAR_13->arm_st == VAR_6 ?
          VAR_1 :
          VAR_2);
 } else {
  FUNC_1(VAR_15[0], VAR_11,
          VAR_12, VAR_13->eqn);

  FUNC_1(VAR_15[0], VAR_7,
          VAR_8,
          VAR_13->arm_st == VAR_6 ?
          VAR_3 :
          VAR_4);
 }

 FUNC_1(VAR_15[1], VAR_9,
         VAR_10,
         (VAR_13->cons_index & VAR_5));

 FUNC_0(VAR_14, VAR_15, VAR_13->doorbell);
}
