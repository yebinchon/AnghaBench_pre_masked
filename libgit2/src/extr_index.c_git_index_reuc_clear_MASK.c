
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t length; int * contents; } ;
struct TYPE_5__ {int dirty; TYPE_2__ reuc; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(git_index *VAR_0)
{
 size_t VAR_1;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->reuc.length; ++VAR_1)
  FUNC_3(FUNC_1(VAR_0->reuc.contents[VAR_1], ((void*)0)));

 FUNC_2(&VAR_0->reuc);

 VAR_0->dirty = 1;
}
