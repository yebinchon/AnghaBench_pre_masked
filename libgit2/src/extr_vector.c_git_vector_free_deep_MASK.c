
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t length; int ** contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(git_vector *VAR_0)
{
 size_t VAR_1;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->length; ++VAR_1) {
  FUNC_1(VAR_0->contents[VAR_1]);
  VAR_0->contents[VAR_1] = ((void*)0);
 }

 FUNC_2(VAR_0);
}
