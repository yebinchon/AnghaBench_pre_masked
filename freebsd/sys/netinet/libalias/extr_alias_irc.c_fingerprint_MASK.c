
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct alias_data {scalar_t__ maxpktsize; int * dport; int * lnk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_2, struct alias_data *VAR_3)
{

 if (VAR_3->dport == ((void*)0) || VAR_3->lnk == ((void*)0) || VAR_3->maxpktsize == 0)
  return (-1);
 if (FUNC_0(*VAR_3->dport) == VAR_0
     || FUNC_0(*VAR_3->dport) == VAR_1)
  return (0);
 return (-1);
}
