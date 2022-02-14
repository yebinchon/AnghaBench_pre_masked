
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {scalar_t__ compute_digest; int digest; } ;
typedef TYPE_1__ git_filebuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

int FUNC_5(git_oid *VAR_0, git_filebuf *VAR_1)
{
 FUNC_0(VAR_0 && VAR_1 && VAR_1->compute_digest);

 FUNC_1(VAR_1);

 if (FUNC_4(VAR_1) < 0)
  return -1;

 FUNC_3(VAR_0, &VAR_1->digest);
 FUNC_2(&VAR_1->digest);
 VAR_1->compute_digest = 0;

 return 0;
}
