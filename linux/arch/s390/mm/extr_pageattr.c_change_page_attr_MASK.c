
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (unsigned long) ;
 int FUNC_6 (int *,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;
 pgd_t *VAR_8;

 if (VAR_3 == VAR_4)
  return 0;
 if (VAR_4 >= VAR_1)
  return -VAR_0;
 FUNC_1(&VAR_2);
 VAR_8 = FUNC_5(VAR_3);
 do {
  if (FUNC_4(*VAR_8))
   break;
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  VAR_7 = FUNC_6(VAR_8, VAR_3, VAR_6, VAR_5);
  if (VAR_7)
   break;
  FUNC_0();
 } while (VAR_8++, VAR_3 = VAR_6, VAR_3 < VAR_4 && !VAR_7);
 FUNC_2(&VAR_2);
 return VAR_7;
}
