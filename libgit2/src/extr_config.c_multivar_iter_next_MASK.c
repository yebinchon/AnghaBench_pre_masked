
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int regex; int have_regex; int name; TYPE_4__* iter; } ;
typedef TYPE_1__ multivar_iter ;
typedef int git_config_iterator ;
struct TYPE_7__ {int value; int name; } ;
typedef TYPE_2__ git_config_entry ;
struct TYPE_8__ {int (* next ) (TYPE_2__**,TYPE_4__*) ;} ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__**,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(git_config_entry **VAR_0, git_config_iterator *VAR_1)
{
 multivar_iter *VAR_2 = (multivar_iter *) VAR_1;
 int VAR_3 = 0;

 while ((VAR_3 = VAR_2->iter->next(VAR_0, VAR_2->iter)) == 0) {
  if (FUNC_0(VAR_2->name, (*VAR_0)->name))
   continue;

  if (!VAR_2->have_regex)
   return 0;

  if (FUNC_1(&VAR_2->regex, (*VAR_0)->value) == 0)
   return 0;
 }

 return VAR_3;
}
