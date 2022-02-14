
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u64 ;


 int FUNC_0 (int volatile*,unsigned long) ;
 int FUNC_1 (int volatile*,unsigned long) ;

u64 FUNC_2(volatile u64 *VAR_0, u64 VAR_1, u64 VAR_2)
{
 unsigned long VAR_3;
 u64 VAR_4;

 FUNC_0(VAR_0, VAR_3);
 if ((VAR_4 = *VAR_0) == VAR_1)
  *VAR_0 = VAR_2;
 FUNC_1(VAR_0, VAR_3);
 return VAR_4;
}
