
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(unsigned int VAR_6)
{
 u32 VAR_7;

 switch (VAR_6 & VAR_2) {
 default:
 case 131:
  VAR_7 = 0;
  break;
 case 128:
  VAR_7 = VAR_3 | VAR_4;
  break;
 case 130:
  VAR_7 = VAR_4 | VAR_5;
  break;
 case 129:
  VAR_7 = VAR_3 | VAR_5;
  break;
 }

 if (VAR_6 & VAR_0)
  VAR_7 ^= VAR_4;

 if (VAR_6 & VAR_1)
  VAR_7 ^= VAR_5;

 return VAR_7;
}
