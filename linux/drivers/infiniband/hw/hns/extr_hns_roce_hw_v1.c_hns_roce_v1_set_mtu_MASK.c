
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hns_roce_dev {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hns_roce_dev*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct hns_roce_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_4, u8 VAR_5,
    enum ib_mtu VAR_6)
{
 __le32 VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_4,
   VAR_1 + VAR_5 * VAR_0);
 VAR_7 = FUNC_0(VAR_8);
 FUNC_3(VAR_7, VAR_2,
         VAR_3, VAR_6);
 VAR_8 = FUNC_1(VAR_7);
 FUNC_4(VAR_4, VAR_1 + VAR_5 * VAR_0,
     VAR_8);
}
