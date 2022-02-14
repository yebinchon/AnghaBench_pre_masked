
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_note_iterator ;
typedef int (* git_note_foreach_cb ) (int *,int *,void*) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*) ;
 int FUNC_3 (int *,int *,int *) ;

int FUNC_4(
 git_repository *VAR_1,
 const char *VAR_2,
 git_note_foreach_cb VAR_3,
 void *VAR_4)
{
 int VAR_5;
 git_note_iterator *VAR_6 = ((void*)0);
 git_oid VAR_7, VAR_8;

 if ((VAR_5 = FUNC_2(&VAR_6, VAR_1, VAR_2)) < 0)
  return VAR_5;

 while (!(VAR_5 = FUNC_3(&VAR_7, &VAR_8, VAR_6))) {
  if ((VAR_5 = VAR_3(&VAR_7, &VAR_8, VAR_4)) != 0) {
   FUNC_0(VAR_5);
   break;
  }
 }

 if (VAR_5 == VAR_0)
  VAR_5 = 0;

 FUNC_1(VAR_6);
 return VAR_5;
}
