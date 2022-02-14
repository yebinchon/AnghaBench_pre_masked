
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_0) ? VAR_2 : VAR_1;
 unsigned int VAR_6 = (FUNC_1(VAR_3) - 1) & 31;
 unsigned int VAR_7 = (FUNC_2(VAR_4 - VAR_3) - 1) & 31;

 return FUNC_3(VAR_5, 1U << VAR_6, 1U << VAR_7);
}
