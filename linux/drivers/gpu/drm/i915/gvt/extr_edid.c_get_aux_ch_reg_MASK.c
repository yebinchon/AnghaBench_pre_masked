
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

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_6)
{
 int VAR_7;

 switch (VAR_6 & 0xff) {
 case 0x10:
  VAR_7 = VAR_0;
  break;
 case 0x14:
  VAR_7 = VAR_1;
  break;
 case 0x18:
  VAR_7 = VAR_2;
  break;
 case 0x1c:
  VAR_7 = VAR_3;
  break;
 case 0x20:
  VAR_7 = VAR_4;
  break;
 case 0x24:
  VAR_7 = VAR_5;
  break;
 default:
  VAR_7 = -1;
  break;
 }
 return VAR_7;
}
