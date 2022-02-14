
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline u64 FUNC_1(u64 VAR_3)
{
 unsigned int VAR_4 = FUNC_0();

 if (!(VAR_2 & VAR_0))
  VAR_3 += (s8)(VAR_4 >> 4);
 else
  VAR_3 |= (u64)(VAR_4 & VAR_1) << 32;

 return VAR_3;
}
