
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int next; int free; } ;
struct TYPE_11__ {int have_regex; TYPE_1__ parent; TYPE_3__* iter; int regex; int name; } ;
typedef TYPE_2__ multivar_iter ;
struct TYPE_12__ {int (* free ) (TYPE_3__*) ;} ;
typedef TYPE_3__ git_config_iterator ;
typedef int git_config ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_3__**,int const*) ;
 int FUNC_5 (int *,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7(git_config_iterator **VAR_2, const git_config *VAR_3, const char *VAR_4, const char *VAR_5)
{
 multivar_iter *VAR_6 = ((void*)0);
 git_config_iterator *VAR_7 = ((void*)0);
 int VAR_8;

 if ((VAR_8 = FUNC_4(&VAR_7, VAR_3)) < 0)
  return VAR_8;

 VAR_6 = FUNC_1(1, sizeof(multivar_iter));
 FUNC_0(VAR_6);

 if ((VAR_8 = FUNC_3(VAR_4, &VAR_6->name)) < 0)
  goto on_error;

 if (VAR_5 != ((void*)0)) {
  if ((VAR_8 = FUNC_5(&VAR_6->regex, VAR_5, 0)) < 0)
   goto on_error;

  VAR_6->have_regex = 1;
 }

 VAR_6->iter = VAR_7;
 VAR_6->parent.free = VAR_0;
 VAR_6->parent.next = VAR_1;

 *VAR_2 = (git_config_iterator *) VAR_6;

 return 0;

on_error:

 VAR_7->free(VAR_7);
 FUNC_2(VAR_6);
 return VAR_8;
}
