
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct alias_data {scalar_t__ maxpktsize; int * sport; int * dport; int * lnk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_0, struct alias_data *VAR_1)
{





 if (VAR_1->dport == ((void*)0) || VAR_1->sport == ((void*)0) || VAR_1->lnk == ((void*)0) ||
  VAR_1->maxpktsize == 0)
  return (-1);




 if (FUNC_0(*VAR_1->dport) == 123
     || FUNC_0(*VAR_1->sport) == 456)
  return (0);
 return (-1);
}
