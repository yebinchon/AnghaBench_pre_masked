
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_index_entry ;
struct TYPE_5__ {size_t length; int * contents; } ;
struct TYPE_4__ {TYPE_3__ deleted; int readers; } ;
typedef TYPE_1__ git_index ;


 int * FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(git_index *VAR_0)
{
 int VAR_1 = (int)FUNC_1(&VAR_0->readers);
 size_t VAR_2;

 if (VAR_1 > 0 || !VAR_0->deleted.length)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->deleted.length; ++VAR_2) {
  git_index_entry *VAR_3 = FUNC_0(VAR_0->deleted.contents[VAR_2], ((void*)0));
  FUNC_3(VAR_3);
 }

 FUNC_2(&VAR_0->deleted);
}
