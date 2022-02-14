
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

unsigned FUNC_0(unsigned VAR_3)
{
 unsigned VAR_4 = VAR_0 |
  VAR_1;
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_4; ++VAR_5, VAR_4 >>= 1) {
  if ((VAR_4 & 1) && VAR_3-- == 0)
   return VAR_5;
 }
 return VAR_2;
}
