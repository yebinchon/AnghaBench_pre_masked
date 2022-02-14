
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;

bool FUNC_6(unsigned long VAR_2, pgprot_t VAR_3)
{
 if (!FUNC_1(VAR_1))
  return 1;
 if (!FUNC_0(FUNC_5(VAR_3)))
  return 1;

 if (FUNC_4(VAR_2))
  return 1;
 if (VAR_2 >= FUNC_3() && !FUNC_2(VAR_0))
  return 0;
 return 1;
}
