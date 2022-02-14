
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
typedef int git_merge_options ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *) ;
 int FUNC_6 (int **,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int ) ;

int FUNC_8(
 git_index **VAR_2, git_repository *VAR_3,
 const char *VAR_4, const char *VAR_5,
 git_merge_options *VAR_6)
{
 git_commit *VAR_7, *VAR_8;
 git_oid VAR_9, VAR_10;
 git_buf VAR_11 = VAR_0;
 int VAR_12;

 FUNC_3(&VAR_11, "%s%s", VAR_1, VAR_4);
 FUNC_0(FUNC_7(&VAR_9, VAR_3, VAR_11.ptr));
 FUNC_0(FUNC_5(&VAR_7, VAR_3, &VAR_9));

 FUNC_1(&VAR_11);
 FUNC_3(&VAR_11, "%s%s", VAR_1, VAR_5);
 FUNC_0(FUNC_7(&VAR_10, VAR_3, VAR_11.ptr));
 FUNC_0(FUNC_5(&VAR_8, VAR_3, &VAR_10));

 VAR_12 = FUNC_6(VAR_2, VAR_3, VAR_7, VAR_8, VAR_6);

 FUNC_2(&VAR_11);
 FUNC_4(VAR_7);
 FUNC_4(VAR_8);

 return VAR_12;
}
