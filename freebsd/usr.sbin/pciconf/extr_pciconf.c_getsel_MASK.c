
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcisel {int dummy; } ;


 struct pcisel FUNC_0 (char const*) ;
 struct pcisel FUNC_1 (char const*) ;
 int * FUNC_2 (char const*,char) ;

__attribute__((used)) static struct pcisel
FUNC_3(const char *VAR_0)
{





 if (FUNC_2(VAR_0, ':') == ((void*)0))
  return (FUNC_0(VAR_0));
 else
  return (FUNC_1(VAR_0));
}
