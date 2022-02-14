
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

int FUNC_2(u32 VAR_3, u32 VAR_4, u8 VAR_5, u32 VAR_6)
{
 s64 VAR_7;

 for (;;) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_7 != VAR_1)
   break;
  FUNC_0(VAR_2);
 }
 return VAR_7 == 0 ? 0 : -VAR_0;
}
