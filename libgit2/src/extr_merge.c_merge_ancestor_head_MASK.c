
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_7__ {int commit; } ;
typedef TYPE_1__ git_annotated_commit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (size_t,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__**,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,size_t,int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(
 git_annotated_commit **VAR_0,
 git_repository *VAR_1,
 const git_annotated_commit *VAR_2,
 const git_annotated_commit **VAR_3,
 size_t VAR_4)
{
 git_oid *VAR_5, VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_1 && VAR_2 && VAR_3);

 FUNC_1(&VAR_8, VAR_4, 1);
 VAR_5 = FUNC_3(VAR_8, sizeof(git_oid));
 FUNC_0(VAR_5);

 FUNC_9(&VAR_5[0], FUNC_7(VAR_2->commit));

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_9(&VAR_5[VAR_7 + 1], FUNC_5(VAR_3[VAR_7]));

 if ((VAR_9 = FUNC_8(&VAR_6, VAR_1, VAR_4 + 1, VAR_5)) < 0)
  goto on_error;

 VAR_9 = FUNC_6(VAR_0, VAR_1, &VAR_6);

on_error:
 FUNC_4(VAR_5);
 return VAR_9;
}
