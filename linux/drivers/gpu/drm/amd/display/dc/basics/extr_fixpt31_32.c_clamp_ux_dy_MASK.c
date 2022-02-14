
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (long long,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(
 long long VAR_1,
 unsigned int VAR_2,
 unsigned int VAR_3,
 unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_1 >= (1LL << (VAR_2 + VAR_0)))
  return (1 << (VAR_2 + VAR_3)) - 1;
 else if (VAR_5 > VAR_4)
  return VAR_5;
 else
  return VAR_4;
}
