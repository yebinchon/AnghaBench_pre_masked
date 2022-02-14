
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_dev {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hns_roce_dev*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_5, u32 VAR_6,
        u32 VAR_7)
{
 __le32 VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_2(VAR_5, VAR_0);
 VAR_8 = FUNC_0(VAR_9);
 FUNC_3(VAR_8, VAR_3,
         VAR_4, VAR_7);
 FUNC_3(VAR_8, VAR_1,
         VAR_2, VAR_6);
 VAR_9 = FUNC_1(VAR_8);
 FUNC_4(VAR_5, VAR_0, VAR_9);
}
