
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_dev {scalar_t__ reg_base; TYPE_1__* hw; } ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ dereg_mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hns_roce_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct hns_roce_dev*,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct hns_roce_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_6, u8 VAR_7,
          u8 *VAR_8)
{
 u32 VAR_9;
 u16 VAR_10;
 __le32 VAR_11;
 u16 *VAR_12;
 u32 *VAR_13;
 u32 VAR_14;






 if (VAR_6->hw->dereg_mr) {
  int VAR_15;

  VAR_15 = FUNC_1(VAR_6);
  if (VAR_15 && VAR_15 != -VAR_0)
   return VAR_15;
 }

 VAR_13 = (u32 *)(&VAR_8[0]);
 VAR_9 = *VAR_13;
 FUNC_3(VAR_9, VAR_6->reg_base + VAR_5 +
         VAR_1 * VAR_7);

 VAR_14 = FUNC_4(VAR_6,
   VAR_2 + VAR_7 * VAR_1);
 VAR_11 = FUNC_0(VAR_14);
 VAR_12 = (u16 *)(&VAR_8[4]);
 VAR_10 = *VAR_12;
 FUNC_5(VAR_11, VAR_3,
         VAR_4, VAR_10);
 VAR_14 = FUNC_2(VAR_11);
 FUNC_6(VAR_6, VAR_2 + VAR_7 * VAR_1,
     VAR_14);

 return 0;
}
