
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__) ;

u8 FUNC_1(struct hfi1_devdata *VAR_1, u8 VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_1, VAR_0 + (VAR_2 / 8) * 8);

 VAR_3 >>= (VAR_2 % 8) * 8;
 return VAR_3;
}
