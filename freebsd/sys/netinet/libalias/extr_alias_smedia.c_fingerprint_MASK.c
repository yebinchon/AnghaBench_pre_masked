
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct alias_data {scalar_t__ maxpktsize; int * sport; int * dport; int * lnk; int * aport; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_3, struct alias_data *VAR_4)
{

 if (VAR_4->dport != ((void*)0) && VAR_4->aport != ((void*)0) && VAR_4->sport != ((void*)0) &&
            FUNC_0(*VAR_4->dport) == VAR_2)
  return (0);
 if (VAR_4->dport == ((void*)0) || VAR_4->sport == ((void*)0) || VAR_4->lnk == ((void*)0) ||
     VAR_4->maxpktsize == 0)
  return (-1);
 if (FUNC_0(*VAR_4->dport) == VAR_0
     || FUNC_0(*VAR_4->sport) == VAR_0
     || FUNC_0(*VAR_4->dport) == VAR_1
     || FUNC_0(*VAR_4->sport) == VAR_1)
  return (0);
 return (-1);
}
