
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ volatile u32 ;


 int FUNC_0 (scalar_t__ volatile*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

unsigned long FUNC_3(volatile u32 *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_1(FUNC_0(VAR_0), VAR_2);
 VAR_3 = *VAR_0;
 *VAR_0 = VAR_1;
 FUNC_2(FUNC_0(VAR_0), VAR_2);

 return (unsigned long)VAR_3;
}
