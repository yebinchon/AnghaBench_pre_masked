
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {scalar_t__ skinnyPort; } ;
struct alias_data {int * dport; int * sport; int * lnk; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_0, struct alias_data *VAR_1)
{

 if (VAR_1->dport == ((void*)0) || VAR_1->sport == ((void*)0) || VAR_1->lnk == ((void*)0))
  return (-1);
 if (VAR_0->skinnyPort != 0 && (FUNC_0(*VAR_1->sport) == VAR_0->skinnyPort ||
        FUNC_0(*VAR_1->dport) == VAR_0->skinnyPort))
  return (0);
 return (-1);
}
