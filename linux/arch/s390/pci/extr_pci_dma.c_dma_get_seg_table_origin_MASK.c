
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* FUNC_0 () ;
 int FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long*,unsigned long*) ;
 int FUNC_5 (unsigned long*) ;

__attribute__((used)) static unsigned long *FUNC_6(unsigned long *VAR_0)
{
 unsigned long *VAR_1;

 if (FUNC_3(*VAR_0))
  VAR_1 = FUNC_2(*VAR_0);
 else {
  VAR_1 = FUNC_0();
  if (!VAR_1)
   return ((void*)0);

  FUNC_4(VAR_0, VAR_1);
  FUNC_5(VAR_0);
  FUNC_1(VAR_0);
 }
 return VAR_1;
}
