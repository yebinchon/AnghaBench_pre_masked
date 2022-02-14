
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_regexp ;
struct TYPE_12__ {scalar_t__ (* next ) (TYPE_2__**,TYPE_1__*) ;int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_config_iterator ;
typedef int (* git_config_foreach_cb ) (TYPE_2__*,void*) ;
struct TYPE_13__ {int name; } ;
typedef TYPE_2__ git_config_entry ;
struct TYPE_14__ {int (* iterator ) (TYPE_1__**,TYPE_4__*) ;} ;
typedef TYPE_4__ git_config_backend ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__**,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_2__**,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(
 git_config_backend *VAR_0,
 const char *VAR_1,
 git_config_foreach_cb VAR_2,
 void *VAR_3)
{
 git_config_entry *VAR_4;
 git_config_iterator* VAR_5;
 git_regexp VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_0 && VAR_2);

 if (VAR_1 && FUNC_2(&VAR_6, VAR_1, 0) < 0)
  return -1;

 if ((VAR_7 = VAR_0->iterator(&VAR_5, VAR_0)) < 0) {
  VAR_5 = ((void*)0);
  return -1;
 }

 while (!(VAR_5->next(&VAR_4, VAR_5) < 0)) {

  if (VAR_1 && FUNC_4(&VAR_6, VAR_4->name) != 0)
   continue;


  if ((VAR_7 = VAR_2(VAR_4, VAR_3)) != 0) {
   FUNC_1(VAR_7);
   break;
  }
 }

 if (VAR_1 != ((void*)0))
  FUNC_3(&VAR_6);

 VAR_5->free(VAR_5);

 return VAR_7;
}
