
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(unsigned long VAR_1)
{
 u8 VAR_2;




 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_1 > (((VAR_0 >> VAR_2) +
       (VAR_0 >> (VAR_2+1))) / 2))
   break;
 }
 return VAR_2;
}
