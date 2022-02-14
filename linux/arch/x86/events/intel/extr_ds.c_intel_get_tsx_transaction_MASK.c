
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u64 FUNC_0(u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5 = (VAR_3 & VAR_0) >> 32;


 if ((VAR_5 & VAR_2) && (VAR_4 & 1))
  VAR_5 |= ((VAR_4 >> 24) & 0xff) << VAR_1;
 return VAR_5;
}
