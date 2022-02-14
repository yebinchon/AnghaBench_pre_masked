
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;

void FUNC_2(unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);


 VAR_2 &= ~7;
 VAR_2 |= (VAR_1 & 7);
 FUNC_1(VAR_0, VAR_2);
 VAR_2 = FUNC_0(VAR_0);
}
