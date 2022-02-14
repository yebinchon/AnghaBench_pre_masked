
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object_t ;
typedef int git_filter_list ;
typedef int git_file ;
struct TYPE_7__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,size_t) ;
 int FUNC_3 (int *,int ,size_t,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;

int FUNC_5(
 git_oid *VAR_1, git_file VAR_2, size_t VAR_3, git_object_t VAR_4, git_filter_list *VAR_5)
{
 int VAR_6;
 git_buf VAR_7 = VAR_0;

 if (!VAR_5)
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);





 if (!(VAR_6 = FUNC_2(&VAR_7, VAR_2, VAR_3))) {
  git_buf VAR_8 = VAR_0;

  VAR_6 = FUNC_1(&VAR_8, VAR_5, &VAR_7);

  FUNC_0(&VAR_7);

  if (!VAR_6)
   VAR_6 = FUNC_4(VAR_1, VAR_8.ptr, VAR_8.size, VAR_4);

  FUNC_0(&VAR_8);
 }

 return VAR_6;
}
