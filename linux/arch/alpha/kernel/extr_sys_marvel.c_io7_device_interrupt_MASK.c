
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void
FUNC_1(unsigned long VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 VAR_3 = VAR_2 >> 16;
 VAR_4 = ((VAR_2 & 0xffff) - 0x800) >> 4;

 VAR_4 += 16;
 VAR_4 &= VAR_0;
 VAR_4 |= VAR_3 << VAR_1;

 FUNC_0(VAR_4);
}
