
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_6 << 3;

 switch (VAR_7) {
 case 512:
  return VAR_5;
 case 1024:
  return VAR_0;
 case 1536:
  return VAR_1;
 case 2048:
  return VAR_2;
 case 3072:
  return VAR_3;
 case 4096:
  return VAR_4;
 default:
  return 0;
 };
}
