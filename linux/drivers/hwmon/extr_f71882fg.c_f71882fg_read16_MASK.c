
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct f71882fg_data {int dummy; } ;


 int FUNC_0 (struct f71882fg_data*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct f71882fg_data *VAR_0, u8 VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1) << 8;
 VAR_2 |= FUNC_0(VAR_0, VAR_1 + 1);

 return VAR_2;
}
