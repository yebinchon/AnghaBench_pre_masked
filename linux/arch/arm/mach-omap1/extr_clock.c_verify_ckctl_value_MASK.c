
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __u16 FUNC_0(__u16 VAR_6)
{
 __u8 VAR_7;
 __u8 VAR_8;
 __u8 VAR_9;
 __u8 VAR_10;
 __u8 VAR_11;
 __u8 VAR_12;

 VAR_7 = (VAR_6 >> VAR_4) & 3;
 VAR_8 = (VAR_6 >> VAR_3) & 3;
 VAR_9 = (VAR_6 >> VAR_0) & 3;
 VAR_10 = (VAR_6 >> VAR_1) & 3;
 VAR_11 = (VAR_6 >> VAR_5) & 3;
 VAR_12 = (VAR_6 >> VAR_2) & 3;

 if (VAR_12 < VAR_10)
  VAR_12 = VAR_10;
 if (VAR_12 > VAR_10+1)
  VAR_12 = VAR_10+1;
 if (VAR_11 < VAR_9)
  VAR_11 = VAR_9;
 if (VAR_11 < VAR_12)
  VAR_11 = VAR_12;
 if (VAR_11 > VAR_8)
  VAR_8 = VAR_11;
 if (VAR_11 > VAR_7)
  VAR_7 = VAR_11;

 VAR_6 &= 0xf000;
 VAR_6 |= VAR_7 << VAR_4;
 VAR_6 |= VAR_8 << VAR_3;
 VAR_6 |= VAR_9 << VAR_0;
 VAR_6 |= VAR_10 << VAR_1;
 VAR_6 |= VAR_11 << VAR_5;
 VAR_6 |= VAR_12 << VAR_2;

 return VAR_6;
}
