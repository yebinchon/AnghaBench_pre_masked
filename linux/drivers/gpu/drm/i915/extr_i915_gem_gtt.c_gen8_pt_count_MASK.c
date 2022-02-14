
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(u64 VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_1 >= VAR_2);
 if ((VAR_1 ^ VAR_2) >> FUNC_1(1))
  return VAR_0 - (VAR_1 & (VAR_0 - 1));
 else
  return VAR_2 - VAR_1;
}
