
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static u64 FUNC_0(int VAR_12)
{
 u64 VAR_13 = 0;

 if (VAR_12 & 0x1)
  VAR_13 |= VAR_11;
 if (VAR_12 & 0x2)
  VAR_13 |= VAR_2;
 if (VAR_12 & 0x4)
  VAR_13 |= VAR_10;
 if (VAR_12 & 0x8) {
  VAR_13 |= VAR_9;
  VAR_13 |= VAR_3;
  VAR_13 |= VAR_0;
  VAR_13 |= VAR_5;
  VAR_13 |= VAR_6;
  VAR_13 |= VAR_7;
  VAR_13 |= VAR_8;
  VAR_13 |= VAR_4;
  VAR_13 |= VAR_1;
 }
 return VAR_13;
}
