
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned long,unsigned long) ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 scalar_t__ VAR_2 ;

void FUNC_3(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3 + VAR_4;


 VAR_3 = FUNC_1(VAR_3, VAR_0);
 VAR_5 = FUNC_2(VAR_5, VAR_0);
 if (VAR_3 >= VAR_5)
  return;


 FUNC_0(&VAR_1, (pgd_t *)VAR_2,
      VAR_3, VAR_5);
}
