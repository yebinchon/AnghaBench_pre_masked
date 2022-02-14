
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct alias_data {int * sport; int * dport; int * lnk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_1, struct alias_data *VAR_2)
{

 if (VAR_2->dport == ((void*)0) || VAR_2->sport == ((void*)0) || VAR_2->lnk == ((void*)0))
  return (-1);
 if (FUNC_0(*VAR_2->dport) == VAR_0 ||
     FUNC_0(*VAR_2->sport) == VAR_0)
  return (0);
 return (-1);
}
