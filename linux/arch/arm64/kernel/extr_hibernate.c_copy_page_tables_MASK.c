
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (unsigned long) ;
 int * FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(pgd_t *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5 = VAR_2;
 pgd_t *VAR_6 = FUNC_4(VAR_2);

 VAR_1 = FUNC_5(VAR_1, VAR_2);
 do {
  VAR_4 = FUNC_2(VAR_5, VAR_3);
  if (FUNC_3(FUNC_0(*VAR_6)))
   continue;
  if (FUNC_1(VAR_1, VAR_6, VAR_5, VAR_4))
   return -VAR_0;
 } while (VAR_1++, VAR_6++, VAR_5 = VAR_4, VAR_5 != VAR_3);

 return 0;
}
