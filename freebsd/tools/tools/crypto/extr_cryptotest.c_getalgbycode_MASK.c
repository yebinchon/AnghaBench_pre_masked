
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {int code; } ;


 struct alg* VAR_0 ;
 int FUNC_0 (struct alg*) ;

struct alg*
FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == VAR_0[VAR_2].code)
   return &VAR_0[VAR_2];
 return ((void*)0);
}
