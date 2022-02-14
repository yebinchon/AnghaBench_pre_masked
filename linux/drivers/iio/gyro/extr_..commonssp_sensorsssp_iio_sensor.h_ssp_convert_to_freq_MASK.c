
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(u32 VAR_2, int *VAR_3,
           int *VAR_4)
{
 if (VAR_2 == 0) {
  *VAR_4 = 0;
  *VAR_3 = 0;
  return;
 }

 *VAR_3 = VAR_0 / VAR_2;
 *VAR_4 = *VAR_3 % VAR_1;
 *VAR_3 = *VAR_3 / VAR_1;
}
