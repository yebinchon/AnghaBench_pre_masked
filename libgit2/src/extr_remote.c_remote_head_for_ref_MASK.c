
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_remote_head ;
typedef int git_remote ;
typedef int git_refspec ;
typedef int git_reference ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int*,int *,int *,int *,char const*) ;
 int FUNC_10 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_11(git_remote_head **VAR_3, git_remote *VAR_4, git_refspec *VAR_5, git_vector *VAR_6, git_reference *VAR_7)
{
 git_reference *VAR_8 = ((void*)0);
 git_buf VAR_9 = VAR_0;
 git_config *VAR_10 = ((void*)0);
 const char *VAR_11;
 int VAR_12 = 0, VAR_13;

 FUNC_0(VAR_3 && VAR_5 && VAR_7);

 *VAR_3 = ((void*)0);

 VAR_12 = FUNC_6(&VAR_8, VAR_7);


 if (VAR_12 == VAR_1 && FUNC_8(VAR_7) == VAR_2) {
  VAR_11 = FUNC_7(VAR_7);
  VAR_12 = 0;
 } else {
  VAR_11 = FUNC_5(VAR_8);
 }

 if ((VAR_12 = FUNC_9(&VAR_13, &VAR_9, VAR_4, VAR_5, VAR_11)) < 0)
  goto cleanup;

 if (VAR_13)
  VAR_12 = FUNC_10(VAR_3, VAR_6, FUNC_1(&VAR_9));

cleanup:
 FUNC_2(&VAR_9);
 FUNC_4(VAR_8);
 FUNC_3(VAR_10);
 return VAR_12;
}
