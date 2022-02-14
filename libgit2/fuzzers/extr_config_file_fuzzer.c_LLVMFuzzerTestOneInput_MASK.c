
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int git_config_backend ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,size_t) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;

int FUNC_6(const uint8_t *VAR_1, size_t VAR_2)
{
 git_config *VAR_3 = ((void*)0);
 git_config_backend *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 if ((VAR_5 = FUNC_5(&VAR_3)) != 0) {
  goto out;
 }

 if ((VAR_5 = FUNC_2(&VAR_4, (const char*)VAR_1, VAR_2)) != 0) {
  goto out;
 }
 if ((VAR_5 = FUNC_0(VAR_3, VAR_4, 0, ((void*)0), 0)) != 0) {
  goto out;
 }

 VAR_4 = ((void*)0);

 FUNC_3(VAR_3, VAR_0, ((void*)0));
 out:
 FUNC_1(VAR_4);
 FUNC_4(VAR_3);

 return 0;
}
