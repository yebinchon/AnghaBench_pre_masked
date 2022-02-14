
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {int name; } ;


 struct alg* VAR_0 ;
 int FUNC_0 (struct alg*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

struct alg*
FUNC_2(const char* VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (FUNC_1(VAR_1, VAR_0[VAR_2].name))
   return &VAR_0[VAR_2];
 return ((void*)0);
}
