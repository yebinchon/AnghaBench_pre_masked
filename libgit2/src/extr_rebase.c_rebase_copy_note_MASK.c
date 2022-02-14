
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_3__ {int repo; } ;
typedef TYPE_1__ git_rebase ;
typedef int git_oid ;
typedef int git_note ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char const*,int ,int const*,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char const*,int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,char*) ;

__attribute__((used)) static int FUNC_9(
 git_rebase *VAR_1,
 const char *VAR_2,
 git_oid *VAR_3,
 git_oid *VAR_4,
 const git_signature *VAR_5)
{
 git_note *VAR_6 = ((void*)0);
 git_oid VAR_7;
 git_signature *VAR_8 = ((void*)0);
 int VAR_9;

 if ((VAR_9 = FUNC_5(&VAR_6, VAR_1->repo, VAR_2, VAR_3)) < 0) {
  if (VAR_9 == VAR_0) {
   FUNC_0();
   VAR_9 = 0;
  }

  goto done;
 }

 if (!VAR_5) {
  if((VAR_9 = FUNC_6(&VAR_8, VAR_1->repo)) < 0) {
   if (VAR_9 != VAR_0 ||
    (VAR_9 = FUNC_8(&VAR_8, "unknown", "unknown")) < 0)
    goto done;

   FUNC_0();
  }

  VAR_5 = VAR_8;
 }

 VAR_9 = FUNC_2(&VAR_7, VAR_1->repo, VAR_2,
  FUNC_1(VAR_6), VAR_5, VAR_4, FUNC_4(VAR_6), 0);

done:
 FUNC_3(VAR_6);
 FUNC_7(VAR_8);

 return VAR_9;
}
