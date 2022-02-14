
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int regex; scalar_t__ have_regex; struct TYPE_4__* name; TYPE_2__* iter; } ;
typedef TYPE_1__ multivar_iter ;
typedef int git_config_iterator ;
struct TYPE_5__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(git_config_iterator *VAR_0)
{
 multivar_iter *VAR_1 = (multivar_iter *) VAR_0;

 VAR_1->iter->free(VAR_1->iter);

 FUNC_0(VAR_1->name);
 if (VAR_1->have_regex)
  FUNC_1(&VAR_1->regex);
 FUNC_0(VAR_1);
}
