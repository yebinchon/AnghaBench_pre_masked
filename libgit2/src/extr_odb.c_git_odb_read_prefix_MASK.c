
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int member_0; } ;
struct TYPE_10__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ,TYPE_2__ const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,TYPE_2__*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,TYPE_2__*,size_t,int) ;

int FUNC_8(
 git_odb_object **VAR_3, git_odb *VAR_4, const git_oid *VAR_5, size_t VAR_6)
{
 git_oid VAR_7 = {{0}};
 int VAR_8;

 FUNC_0(VAR_3 && VAR_4);

 if (VAR_6 < VAR_2)
  return FUNC_2("prefix length too short");

 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 if (VAR_6 == VAR_1) {
  *VAR_3 = FUNC_1(FUNC_6(VAR_4), VAR_5);
  if (*VAR_3 != ((void*)0))
   return 0;
 }

 FUNC_5(&VAR_7, VAR_5, VAR_6);

 VAR_8 = FUNC_7(VAR_3, VAR_4, &VAR_7, VAR_6, 0);

 if (VAR_8 == VAR_0 && !FUNC_4(VAR_4))
  VAR_8 = FUNC_7(VAR_3, VAR_4, &VAR_7, VAR_6, 1);

 if (VAR_8 == VAR_0)
  return FUNC_3("no match for prefix", &VAR_7, VAR_6);

 return VAR_8;
}
