
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int const peel; } ;
typedef TYPE_1__ git_reference ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int const*) ;

const git_oid *FUNC_2(const git_reference *VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1->type != VAR_0 || FUNC_1(&VAR_1->peel))
  return ((void*)0);

 return &VAR_1->peel;
}
