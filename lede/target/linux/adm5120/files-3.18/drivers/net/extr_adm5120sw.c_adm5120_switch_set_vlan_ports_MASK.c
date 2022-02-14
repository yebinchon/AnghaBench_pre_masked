
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;

 if (VAR_2 < 4)
  VAR_4 = VAR_0;
 else {
  VAR_2 -= 4;
  VAR_4 = VAR_1;
 }

 VAR_5 = FUNC_0(VAR_4);
 VAR_5 &= ~(0xFF << (VAR_2*8));
 VAR_5 |= (VAR_3 << (VAR_2*8));
 FUNC_1(VAR_4, VAR_5);
}
