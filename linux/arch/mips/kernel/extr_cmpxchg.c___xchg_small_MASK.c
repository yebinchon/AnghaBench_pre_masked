
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

unsigned long FUNC_4(volatile void *VAR_2, unsigned long VAR_3, unsigned int VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 volatile u32 *VAR_9;
 unsigned int VAR_10;


 FUNC_2((unsigned long)VAR_2 & (VAR_4 - 1));


 VAR_8 = FUNC_0((VAR_4 * VAR_0) - 1, 0);
 VAR_3 &= VAR_8;






 VAR_10 = (unsigned long)VAR_2 & 0x3;
 if (FUNC_1(VAR_1))
  VAR_10 ^= sizeof(u32) - VAR_4;
 VAR_10 *= VAR_0;
 VAR_8 <<= VAR_10;





 VAR_9 = (volatile u32 *)((unsigned long)VAR_2 & ~0x3);
 VAR_7 = *VAR_9;

 do {
  VAR_5 = VAR_7;
  VAR_6 = (VAR_7 & ~VAR_8) | (VAR_3 << VAR_10);
  VAR_7 = FUNC_3(VAR_9, VAR_5, VAR_6);
 } while (VAR_7 != VAR_5);

 return (VAR_7 & VAR_8) >> VAR_10;
}
