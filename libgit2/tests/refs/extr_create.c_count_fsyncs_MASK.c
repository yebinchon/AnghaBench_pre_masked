
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_refdb ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*,int *,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_7(size_t *VAR_3, size_t *VAR_4)
{
 git_reference *VAR_5 = ((void*)0);
 git_refdb *VAR_6;
 git_oid VAR_7;

 VAR_2 = 0;

 FUNC_1(&VAR_7, VAR_0);
 FUNC_0(FUNC_4(&VAR_5, VAR_1, "refs/heads/fsync_test", &VAR_7, 0, "log message"));
 FUNC_5(VAR_5);

 *VAR_3 = VAR_2;
 VAR_2 = 0;

 FUNC_0(FUNC_6(&VAR_6, VAR_1));
 FUNC_0(FUNC_2(VAR_6));
 FUNC_3(VAR_6);

 *VAR_4 = VAR_2;
 VAR_2 = 0;
}
