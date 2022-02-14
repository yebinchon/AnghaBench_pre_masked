
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_object ;
typedef int git_commit ;
typedef int git_blob ;
struct TYPE_5__ {int refcnt; int path; int * blob; int * commit; } ;
typedef TYPE_1__ git_blame__origin ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int,size_t) ;
 int FUNC_3 (int **,int *,char const*,int ) ;
 int FUNC_4 (int ,char const*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(git_blame__origin **VAR_1, git_commit *VAR_2, const char *VAR_3)
{
 git_blame__origin *VAR_4;
 git_object *VAR_5;
 size_t VAR_6 = FUNC_5(VAR_3), VAR_7;
 int VAR_8 = 0;

 if ((VAR_8 = FUNC_3(&VAR_5, (git_object*)VAR_2,
   VAR_3, VAR_0)) < 0)
  return VAR_8;

 FUNC_1(&VAR_7, sizeof(*VAR_4), VAR_6);
 FUNC_1(&VAR_7, VAR_7, 1);
 VAR_4 = FUNC_2(1, VAR_7);
 FUNC_0(VAR_4);

 VAR_4->commit = VAR_2;
 VAR_4->blob = (git_blob *) VAR_5;
 VAR_4->refcnt = 1;
 FUNC_4(VAR_4->path, VAR_3);

 *VAR_1 = VAR_4;

 return 0;
}
