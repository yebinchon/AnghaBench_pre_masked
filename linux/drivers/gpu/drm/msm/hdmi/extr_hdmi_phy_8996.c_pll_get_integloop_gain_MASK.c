
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(u64 VAR_2, u64 VAR_3, u32 VAR_4,
      bool VAR_5)
{
 int VAR_6 = VAR_3 >= VAR_1 ? 1 : 2;
 u64 VAR_7;

 if ((VAR_2 != 0) || VAR_5)
  VAR_7 = (64 * VAR_4) / VAR_0;
 else
  VAR_7 = (1022 * VAR_4) / 100;

 VAR_7 <<= VAR_6;

 return (VAR_7 <= 2046 ? VAR_7 : 2046);
}
