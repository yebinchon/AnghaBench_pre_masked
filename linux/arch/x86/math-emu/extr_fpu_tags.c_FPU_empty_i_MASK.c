
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(int VAR_3)
{
 int VAR_4 = (VAR_2 + VAR_3) & 7;

 return ((VAR_1 >> (VAR_4 * 2)) & 3) == VAR_0;
}
