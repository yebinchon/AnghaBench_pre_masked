
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_config_iterator ;
struct TYPE_4__ {TYPE_2__* current; } ;
typedef TYPE_1__ all_iter ;
struct TYPE_5__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(git_config_iterator *VAR_0)
{
 all_iter *VAR_1 = (all_iter *) VAR_0;

 if (VAR_1->current)
  VAR_1->current->free(VAR_1->current);

 FUNC_0(VAR_1);
}
