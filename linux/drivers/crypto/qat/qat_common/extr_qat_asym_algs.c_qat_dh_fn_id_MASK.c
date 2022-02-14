
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
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned int VAR_8, bool VAR_9)
{
 unsigned int VAR_10 = VAR_8 << 3;

 switch (VAR_10) {
 case 1536:
  return VAR_9 ? VAR_4 : VAR_0;
 case 2048:
  return VAR_9 ? VAR_5 : VAR_1;
 case 3072:
  return VAR_9 ? VAR_6 : VAR_2;
 case 4096:
  return VAR_9 ? VAR_7 : VAR_3;
 default:
  return 0;
 };
}
