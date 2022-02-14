
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_dev {scalar_t__ reg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->reg_base + VAR_1);

 return (!!(VAR_3 & (1 << VAR_0)));
}
