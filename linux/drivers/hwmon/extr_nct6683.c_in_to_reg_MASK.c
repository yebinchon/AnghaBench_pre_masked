
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline u16 FUNC_2(u32 VAR_4, u8 VAR_5)
{
 int VAR_6 = 16;

 if (VAR_5 == VAR_2 || VAR_5 == VAR_3 || VAR_5 == VAR_0 ||
     VAR_5 == VAR_1)
  VAR_6 <<= 1;

 return FUNC_1(FUNC_0(VAR_4, VAR_6), 0, 127);
}
