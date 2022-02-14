
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_4__ {scalar_t__ theirs; scalar_t__ ours; scalar_t__ ancestor; } ;
typedef TYPE_1__ checkout_conflictdata ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int const*,size_t) ;

int FUNC_3(
 const git_vector *VAR_0, size_t VAR_1, void *VAR_2)
{
 checkout_conflictdata *VAR_3;

 FUNC_0(VAR_2);

 if ((VAR_3 = FUNC_2(VAR_0, VAR_1)) == ((void*)0))
  return -1;

 if (VAR_3->ancestor || VAR_3->ours || VAR_3->theirs)
  return 0;

 FUNC_1(VAR_3);
 return 1;
}
