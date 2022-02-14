
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ptr; } ;
struct TYPE_7__ {int objects; TYPE_4__ reserved_names; } ;
typedef TYPE_1__ git_repository ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static git_repository *FUNC_6(void)
{
 git_repository *VAR_0 = FUNC_0(1, sizeof(git_repository));

 if (VAR_0 == ((void*)0) ||
  FUNC_4(&VAR_0->objects) < 0)
  goto on_error;

 FUNC_2(VAR_0->reserved_names, 4);
 if (!VAR_0->reserved_names.ptr)
  goto on_error;


 FUNC_5(VAR_0);

 return VAR_0;

on_error:
 if (VAR_0)
  FUNC_3(&VAR_0->objects);

 FUNC_1(VAR_0);
 return ((void*)0);
}
