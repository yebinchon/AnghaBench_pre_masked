
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_attr_session ;
typedef int git_attr_file_source ;
typedef int git_attr_file_parser ;
typedef int git_attr_file_entry ;
typedef int git_attr_file ;
typedef int git_attr_cache ;


 int VAR_0 ;
 int FUNC_0 (int **,int **,int *,int *,int ,char const*,char const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int *,int ,int ,int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 () ;
 int * FUNC_7 (int *) ;

int FUNC_8(
 git_attr_file **VAR_1,
 git_repository *VAR_2,
 git_attr_session *VAR_3,
 git_attr_file_source VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 git_attr_file_parser VAR_7,
 bool VAR_8)
{
 int VAR_9 = 0;
 git_attr_cache *VAR_10 = FUNC_7(VAR_2);
 git_attr_file_entry *VAR_11 = ((void*)0);
 git_attr_file *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);

 if ((VAR_9 = FUNC_0(
   &VAR_12, &VAR_11, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
  return VAR_9;


 if (!VAR_12 || (VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_12)) > 0)
  VAR_9 = FUNC_4(&VAR_13, VAR_2, VAR_3, VAR_11, VAR_4, VAR_7, VAR_8);


 if (VAR_13) {
  if ((VAR_9 = FUNC_2(VAR_10, VAR_13)) < 0)
   FUNC_3(VAR_13);
  else {
   FUNC_3(VAR_12);
   VAR_12 = VAR_13;
  }
 }


 if (VAR_9 < 0) {

  if (VAR_12) {
   FUNC_1(VAR_10, VAR_12);
   FUNC_3(VAR_12);
   VAR_12 = ((void*)0);
  }

  if (VAR_9 == VAR_0) {
   FUNC_6();
   VAR_9 = 0;
  }
 }

 *VAR_1 = VAR_12;
 return VAR_9;
}
