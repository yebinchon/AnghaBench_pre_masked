
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

int FUNC_2(u32 VAR_5, bool VAR_6)
{
 s64 VAR_7;
 u64 VAR_8 = VAR_3;

 if (VAR_6)
  VAR_8 |= VAR_4;
 for (;;) {
  VAR_7 = FUNC_1(VAR_5, VAR_8, 0);
  if (VAR_7 != VAR_1)
   break;
  FUNC_0(VAR_2);
 }
 return VAR_7 ? -VAR_0 : 0;
}
