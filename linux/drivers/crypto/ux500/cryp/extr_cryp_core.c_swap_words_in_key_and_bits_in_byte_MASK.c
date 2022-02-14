
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static inline void FUNC_1(const u8 *VAR_1,
            u8 *VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = 0;
 int VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_3 - VAR_0;
 while (VAR_5 >= 0) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_6 = VAR_3 - VAR_5 - VAR_0 + VAR_4;
   VAR_2[VAR_5 + VAR_4] =
    FUNC_0(VAR_1[VAR_6]);
  }
  VAR_5 -= VAR_0;
 }
}
