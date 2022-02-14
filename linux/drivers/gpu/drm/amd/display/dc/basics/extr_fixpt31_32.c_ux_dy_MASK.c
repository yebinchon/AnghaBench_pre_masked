
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 long long VAR_1 ;
 unsigned int FUNC_0 (long long) ;

__attribute__((used)) static inline unsigned int FUNC_1(
 long long VAR_2,
 unsigned int VAR_3,
 unsigned int VAR_4)
{

 unsigned int VAR_5 = (1 << VAR_3) - 1;

 unsigned int VAR_6 = VAR_1 & VAR_2;

 VAR_5 &= FUNC_0(VAR_2);

 VAR_5 <<= VAR_4;

 VAR_6 >>= VAR_0 - VAR_4;

 return VAR_5 | VAR_6;
}
