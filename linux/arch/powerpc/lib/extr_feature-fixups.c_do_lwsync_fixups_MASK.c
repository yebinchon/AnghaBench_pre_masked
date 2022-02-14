
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int ) ;

void FUNC_1(unsigned long VAR_2, void *VAR_3, void *VAR_4)
{
 long *VAR_5, *VAR_6;
 unsigned int *VAR_7;

 if (!(VAR_2 & VAR_0))
  return ;

 VAR_5 = VAR_3;
 VAR_6 = VAR_4;

 for (; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = (void *)VAR_5 + *VAR_5;
  FUNC_0(VAR_7, VAR_1);
 }
}
