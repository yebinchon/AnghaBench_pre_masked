
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * aka; int * name; } ;
typedef TYPE_1__ _TCBVAR ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;

_TCBVAR *
FUNC_2(char *VAR_1)
{
  _TCBVAR *VAR_2=VAR_0;

  while (VAR_2->name!=((void*)0)) {
    if (FUNC_1(VAR_1,VAR_2->name)) return VAR_2;
    else if (FUNC_1(VAR_1,VAR_2->aka )) return VAR_2;
    VAR_2+=1;
  }
  FUNC_0("lu_tcbvar: bad name %s\n",VAR_1);
  return ((void*)0);
}
