
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int execute; } ;
struct TYPE_6__ {int * next; int flags; int execute; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int FUNC_0 (int,int *) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static PLAN *
FUNC_2(OPTION *VAR_0)
{
 PLAN *VAR_1;

 if ((VAR_1 = FUNC_1(sizeof(PLAN))) == ((void*)0))
  FUNC_0(1, ((void*)0));
 VAR_1->execute = VAR_0->execute;
 VAR_1->flags = VAR_0->flags;
 VAR_1->next = ((void*)0);
 return VAR_1;
}
