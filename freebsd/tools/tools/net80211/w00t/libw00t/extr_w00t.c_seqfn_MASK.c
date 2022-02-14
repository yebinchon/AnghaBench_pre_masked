
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 int FUNC_0 (int) ;

short FUNC_1(unsigned short VAR_1, unsigned short VAR_2)
{
 unsigned short VAR_3 = 0;

 FUNC_0(VAR_2 < 16);

 VAR_3 = VAR_2;
 VAR_3 |= ( (VAR_1 % 4096) << VAR_0);
 return VAR_3;
}
