
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(unsigned int VAR_3)
{
 u8 VAR_4;

 switch (VAR_3) {
 case 128:
  VAR_4 = 0x9;
  break;
 case 256:
  VAR_4 = 0x8;
  break;
 case 1024:
  VAR_4 = 0x6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_1 | VAR_4, VAR_2);

 return 0;
}
