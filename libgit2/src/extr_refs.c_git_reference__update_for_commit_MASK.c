
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
struct TYPE_7__ {int oid; } ;
struct TYPE_8__ {TYPE_1__ target; int name; } ;
typedef TYPE_2__ git_reference ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*,int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*,int const*,int const*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__**,int *,int ,int const*,int *,int,int const*,int ,int *,int *) ;

int FUNC_12(
 git_repository *VAR_1,
 git_reference *VAR_2,
 const char *VAR_3,
 const git_oid *VAR_4,
 const char *VAR_5)
{
 git_reference *VAR_6 = ((void*)0);
 git_commit *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;
 const git_signature *VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_7(&VAR_7, VAR_1, VAR_4)) < 0 ||
  (VAR_10 = FUNC_4(&VAR_8, "%s%s: %s",
   VAR_5 ? VAR_5 : "commit",
   FUNC_0(VAR_7),
   FUNC_8(VAR_7))) < 0)
  goto done;

 VAR_9 = FUNC_5(VAR_7);

 if (VAR_2) {
  if ((VAR_10 = FUNC_1(VAR_2)) < 0)
   return VAR_10;

  VAR_10 = FUNC_11(&VAR_6, VAR_1, VAR_2->name, VAR_4, ((void*)0), 1, VAR_9,
       FUNC_2(&VAR_8), &VAR_2->target.oid, ((void*)0));
 }
 else
  VAR_10 = FUNC_9(
   VAR_1, VAR_3, VAR_4, VAR_9, FUNC_2(&VAR_8));

done:
 FUNC_10(VAR_6);
 FUNC_3(&VAR_8);
 FUNC_6(VAR_7);
 return VAR_10;
}
