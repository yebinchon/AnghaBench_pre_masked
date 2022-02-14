
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int const index_oid; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

const git_oid *FUNC_1(git_submodule *VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1->flags & VAR_0)
  return &VAR_1->index_oid;
 else
  return ((void*)0);
}
