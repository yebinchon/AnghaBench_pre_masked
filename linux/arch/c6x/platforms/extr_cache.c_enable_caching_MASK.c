
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;

void FUNC_2(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3 = VAR_0 + ((VAR_1 >> 24) << 2);
 unsigned int VAR_4 = VAR_0 + ((VAR_2 >> 24) << 2);

 for (; VAR_3 <= VAR_4; VAR_3 += 4)
  FUNC_1(VAR_3, FUNC_0(VAR_3) | 1);
}
