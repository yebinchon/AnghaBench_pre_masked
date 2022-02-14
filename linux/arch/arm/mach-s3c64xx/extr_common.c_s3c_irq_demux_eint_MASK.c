
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static inline void FUNC_3(unsigned int VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5 = FUNC_1(VAR_0);
 unsigned int VAR_6;

 VAR_4 &= ~VAR_5;
 VAR_4 >>= VAR_2;
 VAR_4 &= (1 << (VAR_3 - VAR_2 + 1)) - 1;

 for (VAR_6 = FUNC_0(VAR_2); VAR_6 <= FUNC_0(VAR_3); VAR_6++) {
  if (VAR_4 & 1)
   FUNC_2(VAR_6);

  VAR_4 >>= 1;
 }
}
