
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_status_options ;
typedef int git_status_list ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_5__ {int dirty; } ;
typedef TYPE_1__ git_describe_result ;
typedef int git_describe_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__**,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *) ;

int FUNC_8(
 git_describe_result **VAR_3,
 git_repository *VAR_4,
 git_describe_options *VAR_5)
{
 int VAR_6;
 git_oid VAR_7;
 git_status_list *VAR_8 = ((void*)0);
 git_status_options VAR_9 = VAR_2;
 git_describe_result *VAR_10 = ((void*)0);
 git_object *VAR_11;

 if ((VAR_6 = FUNC_4(&VAR_7, VAR_4, VAR_0)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_3(&VAR_11, VAR_4, &VAR_7, VAR_1)) < 0)
  return VAR_6;


 if ((VAR_6 = FUNC_0(&VAR_10, VAR_11, VAR_5)) < 0)
  goto out;

 if ((VAR_6 = FUNC_7(&VAR_8, VAR_4, &VAR_9)) < 0)
  goto out;


 if (FUNC_5(VAR_8) > 0)
  VAR_10->dirty = 1;

out:
 FUNC_2(VAR_11);
 FUNC_6(VAR_8);

 if (VAR_6 < 0)
  FUNC_1(VAR_10);
 else
  *VAR_3 = VAR_10;

 return VAR_6;
}
