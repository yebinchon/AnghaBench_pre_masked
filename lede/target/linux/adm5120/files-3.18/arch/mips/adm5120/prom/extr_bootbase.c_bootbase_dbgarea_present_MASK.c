
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(u8 *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2+5);
 if (VAR_3 != VAR_0)
  return 0;

 VAR_3 = FUNC_0(VAR_2+9);
 if (VAR_3 != VAR_1)
  return 0;

 return 1;
}
