
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_regexp ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(git_object **VAR_3, git_revwalk *VAR_4, git_regexp *VAR_5)
{
 int VAR_6;
 git_oid VAR_7;
 git_object *VAR_8;

 while (!(VAR_6 = FUNC_4(&VAR_7, VAR_4))) {

  VAR_6 = FUNC_2(&VAR_8, FUNC_5(VAR_4), &VAR_7, VAR_2);
  if ((VAR_6 < 0) && (VAR_6 != VAR_0))
   return -1;

  if (!FUNC_3(VAR_5, FUNC_0((git_commit*)VAR_8))) {
   *VAR_3 = VAR_8;
   return 0;
  }

  FUNC_1(VAR_8);
 }

 if (VAR_6 < 0 && VAR_6 == VAR_1)
  VAR_6 = VAR_0;

 return VAR_6;
}
