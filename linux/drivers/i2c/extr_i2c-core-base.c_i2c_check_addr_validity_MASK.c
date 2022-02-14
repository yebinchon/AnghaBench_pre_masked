
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned short VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_2, unsigned short VAR_3)
{
 if (VAR_3 & VAR_1) {

  if (VAR_2 > 0x3ff)
   return -VAR_0;
 } else {

  if (VAR_2 == 0x00 || VAR_2 > 0x7f)
   return -VAR_0;
 }
 return 0;
}
