
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int git_config_iterator ;
typedef int git_config_entry ;
struct TYPE_12__ {int (* iterator ) (TYPE_4__**,TYPE_1__*) ;} ;
typedef TYPE_1__ git_config_backend ;
struct TYPE_13__ {TYPE_1__* backend; } ;
typedef TYPE_2__ backend_internal ;
struct TYPE_14__ {size_t i; TYPE_4__* current; TYPE_10__* cfg; } ;
typedef TYPE_3__ all_iter ;
struct TYPE_15__ {int (* next ) (int **,TYPE_4__*) ;int (* free ) (TYPE_4__*) ;} ;
struct TYPE_11__ {int backends; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t*,TYPE_10__*,size_t) ;
 TYPE_2__* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int **,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__**,TYPE_1__*) ;
 int FUNC_5 (int **,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(git_config_entry **VAR_2, git_config_iterator *VAR_3)
{
 all_iter *VAR_4 = (all_iter *) VAR_3;
 backend_internal *VAR_5;
 git_config_backend *VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;

 if (VAR_4->current != ((void*)0) &&
     (VAR_8 = VAR_4->current->next(VAR_2, VAR_4->current)) == 0) {
  return 0;
 }

 if (VAR_8 < 0 && VAR_8 != VAR_1)
  return VAR_8;

 do {
  if (FUNC_0(&VAR_7, VAR_4->cfg, VAR_4->i) < 0)
   return VAR_1;

  VAR_5 = FUNC_1(&VAR_4->cfg->backends, VAR_7 - 1);
  VAR_6 = VAR_5->backend;
  VAR_4->i = VAR_7 - 1;

  if (VAR_4->current)
   VAR_4->current->free(VAR_4->current);

  VAR_4->current = ((void*)0);
  VAR_8 = VAR_6->iterator(&VAR_4->current, VAR_6);
  if (VAR_8 == VAR_0)
   continue;

  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = VAR_4->current->next(VAR_2, VAR_4->current);

  if (VAR_8 == VAR_1)
   continue;

  return VAR_8;

 } while(1);

 return VAR_1;
}
