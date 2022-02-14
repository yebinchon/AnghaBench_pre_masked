
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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

int
FUNC_0(int VAR_11)
{
 int VAR_12;
 VAR_12 = VAR_6;
 if ((VAR_11 & (VAR_10 | VAR_8)) != 0)
  VAR_12 |= VAR_5;
 else if ((VAR_11 & VAR_7) == 0)
  VAR_12 |= VAR_0;
 VAR_12 |= (VAR_11 & VAR_8) != 0 ? VAR_1: 0;
 VAR_12 |= (VAR_11 & VAR_9) != 0 ? VAR_2 : 0;
 VAR_12 |= VAR_3 << VAR_4;
 return (VAR_12);
}
