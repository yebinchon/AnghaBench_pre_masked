
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {int peel; TYPE_1__ target; int type; } ;
typedef TYPE_2__ git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*) ;

git_reference *FUNC_3(
 const char *VAR_1,
 const git_oid *VAR_2,
 const git_oid *VAR_3)
{
 git_reference *VAR_4;

 FUNC_1(VAR_1 && VAR_2);

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->type = VAR_0;
 FUNC_2(&VAR_4->target.oid, VAR_2);

 if (VAR_3 != ((void*)0))
  FUNC_2(&VAR_4->peel, VAR_3);

 return VAR_4;
}
