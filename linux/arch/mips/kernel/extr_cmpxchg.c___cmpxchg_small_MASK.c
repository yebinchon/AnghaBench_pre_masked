
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long volatile*,unsigned long,unsigned long) ;

unsigned long FUNC_4(volatile void *VAR_2, unsigned long VAR_3,
         unsigned long VAR_4, unsigned int VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 volatile u32 *VAR_11;
 unsigned int VAR_12;


 FUNC_2((unsigned long)VAR_2 & (VAR_5 - 1));


 VAR_6 = FUNC_0((VAR_5 * VAR_0) - 1, 0);
 VAR_3 &= VAR_6;
 VAR_4 &= VAR_6;






 VAR_12 = (unsigned long)VAR_2 & 0x3;
 if (FUNC_1(VAR_1))
  VAR_12 ^= sizeof(u32) - VAR_5;
 VAR_12 *= VAR_0;
 VAR_6 <<= VAR_12;





 VAR_11 = (volatile u32 *)((unsigned long)VAR_2 & ~0x3);
 VAR_9 = *VAR_11;

 while (1) {




  VAR_10 = (VAR_9 & VAR_6) >> VAR_12;
  if (VAR_10 != VAR_3)
   return VAR_10;







  VAR_7 = (VAR_9 & ~VAR_6) | (VAR_3 << VAR_12);
  VAR_8 = (VAR_9 & ~VAR_6) | (VAR_4 << VAR_12);
  VAR_9 = FUNC_3(VAR_11, VAR_7, VAR_8);
  if (VAR_9 == VAR_7)
   return VAR_3;
 }
}
