
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct log_state {int repo; } ;
struct TYPE_3__ {int flags; int * from; int * to; } ;
typedef TYPE_1__ git_revspec ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,char const*) ;
 scalar_t__ FUNC_5 (int **,int ,char const*) ;
 int FUNC_6 (struct log_state*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct log_state *VAR_3, const char *VAR_4)
{
 git_revspec VAR_5;
 int VAR_6 = 0;

 if (!VAR_4) {
  FUNC_6(VAR_3, ((void*)0), VAR_6);
  return 0;
 }

 if (*VAR_4 == '^') {
  VAR_5.flags = VAR_2;
  VAR_6 = !VAR_6;

  if (FUNC_5(&VAR_5.from, VAR_3->repo, VAR_4 + 1) < 0)
   return -1;
 } else if (FUNC_4(&VAR_5, VAR_3->repo, VAR_4) < 0)
  return -1;

 if ((VAR_5.flags & VAR_2) != 0)
  FUNC_6(VAR_3, VAR_5.from, VAR_6);
 else {
  FUNC_6(VAR_3, VAR_5.to, VAR_6);

  if ((VAR_5.flags & VAR_1) != 0) {
   git_oid VAR_7;
   FUNC_0(FUNC_1(&VAR_7, VAR_3->repo,
    FUNC_2(VAR_5.from), FUNC_2(VAR_5.to)),
    "Could not find merge base", VAR_4);
   FUNC_0(
    FUNC_3(&VAR_5.to, VAR_3->repo, &VAR_7, VAR_0),
    "Could not find merge base commit", ((void*)0));

   FUNC_6(VAR_3, VAR_5.to, VAR_6);
  }

  FUNC_6(VAR_3, VAR_5.from, !VAR_6);
 }

 return 0;
}
