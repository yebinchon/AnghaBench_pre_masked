
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static inline bool FUNC_2(void)
{
 u32 VAR_1 = FUNC_1(0x00000001), VAR_2;


 VAR_1 &= ~(0x3U << 14 | 0xfU << 28);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == VAR_0[VAR_2])
   return 1;

 return 0;
}
