
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_vector ;
typedef int git_iterator ;
struct TYPE_10__ {int names; int reuc; } ;
typedef TYPE_2__ git_index ;
struct TYPE_9__ {int _cmp; } ;
struct TYPE_11__ {int * update_names; int * update_reuc; TYPE_1__ update_conflicts; int target; } ;
typedef TYPE_3__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*,int *,int *,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(checkout_data *VAR_2, git_iterator *VAR_3, git_vector *VAR_4)
{
 git_index *VAR_5;


 if ((VAR_5 = FUNC_1(VAR_2->target)) == ((void*)0))
  return 0;

 VAR_2->update_conflicts._cmp = VAR_1;

 if (FUNC_0(VAR_2, VAR_5, VAR_3, VAR_4, VAR_0, VAR_2) < 0)
  return -1;


 VAR_2->update_reuc = &VAR_5->reuc;
 VAR_2->update_names = &VAR_5->names;

 return 0;
}
