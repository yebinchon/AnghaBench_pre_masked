
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* delta; } ;
typedef TYPE_1__ git_pobject ;


 int FUNC_0 (TYPE_1__**,size_t*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(git_pobject **VAR_0, size_t *VAR_1,
 git_pobject *VAR_2)
{
 git_pobject *VAR_3;

 for (VAR_3 = VAR_2; VAR_3->delta; VAR_3 = VAR_3->delta)
  ;
 FUNC_0(VAR_0, VAR_1, VAR_3);
}
