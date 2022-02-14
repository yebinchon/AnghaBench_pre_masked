
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(u8 *VAR_3)
{

 u16 VAR_4 = FUNC_1(*(__le16 *)VAR_3);

 if (VAR_4 == 0)
  return 0;

 FUNC_0("rx status is %#x\n", VAR_4);
 if (VAR_4 == VAR_1)
  return VAR_2;

 return -VAR_0;
}
