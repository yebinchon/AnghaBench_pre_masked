
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(pgd_t *VAR_1, unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4)
{
 unsigned long VAR_5;
 p4d_t *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 do {
  if (FUNC_2(*VAR_6))
   return -VAR_0;
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  VAR_7 = FUNC_4(VAR_6, VAR_2, VAR_5, VAR_4);
  VAR_6++;
  VAR_2 = VAR_5;
  FUNC_0();
 } while (VAR_2 < VAR_3 && !VAR_7);
 return VAR_7;
}
