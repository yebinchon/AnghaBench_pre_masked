
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;

__attribute__((used)) static unsigned long FUNC_0(u32 VAR_9)
{
 unsigned long VAR_10 = 0;

 if (VAR_9 & 0x02000000) {
  VAR_10 = VAR_1 | VAR_8;
  VAR_10 |= (VAR_9 >> 28) & VAR_5;
  if (VAR_9 & 0x01000000)
   VAR_10 |= VAR_2
     | VAR_6;
  if (VAR_9 & 0x40000000)
   VAR_10 |= VAR_3
     | VAR_4;
 } else if (VAR_9 & 0x01000000)
  VAR_10 = VAR_0 | VAR_7;
 return VAR_10;
}
